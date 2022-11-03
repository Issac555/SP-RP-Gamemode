#if defined _dof2_included
	#endinput
#endif
#define _dof2_included

#include <a_samp>

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

/*
 * This is a new version of the INI script Double-O-Files.
 * However, it's has completely been rewritten and has now a much better performance.
 * There is also the support for sections in the INI file. (But there is no support for comments.)
 * Double-O-Files 2 is compatible with DUDB, DINI, Double-O-Files and possibly y_ini since it
 * can handle sections and entry of the format "key = value", not only "key=value".
 * The number of spaces between the equal sign and key and value can actually be arbitrary.
 * I've added some comments below. You may see that I've mentioned the big-O-notation,
 * 'n' always Entries.Count.
 * Double-O-Files 2 should also be useful for Russian letter because I'm using
 * the functions fgetchar and fputchar to write and read the files.
 *
 * There is another new feature which has been inspired by ZCMD and y_ini:
 * The OnParseFile callbacks. To learn more about it, read the description in
 * the SA-MP forums if you haven't already.
 * THE END
 */

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

/*
native DOF2_SetFile(file[]);
native DOF2_LoadFile();
native DOF2_SaveFile();
native DOF2_ParseFile(file[],extraid,bool:callback=true);
native DOF2_ReparseFile(file[],extraid,bool:callback=true);
native DOF2_WriteFile();
native DOF2_PrintFile(comment[]="");
native DOF2_GetString(file[],key[],tag[]="");
native DOF2_GetStringEx(file[],key[],result[],size,tag[]="");
native Float:DOF2_GetFloat(file[],key[]);
native DOF2_GetInt(file[],key[],tag[]="");
native DOF2_GetHex(file[],key[],tag[]="");
native DOF2_GetBin(file[],key[],tag[]="");
native bool:DOF2_GetBool(file[],key[],tag[]="");
native DOF2_SetString(file[],key[],value[],tag[]="");
native DOF2_SetFloat(file[],key[],Float:value);
native DOF2_SetInt(file[],key[],value,tag[]="");
native DOF2_SetHex(file[],key[],value,tag[]="");
native DOF2_SetBin(file[],key[],value,tag[]="");
native DOF2_SetBool(file[],key[],bool:value,tag[]="");
native DOF2_IsSet(file[],key[],tag[]="");
native DOF2_Unset(file[],key[],tag[]="");
native DOF2_FileExists(file[]);
native DOF2_RemoveFile(file[]);
native DOF2_CreateFile(file[],password[]="");
native DOF2_RenameFile(oldfile[],newfile[]);
native DOF2_RenameKey(file[],oldkey[],newkey[],tag[]="");
native DOF2_CopyFile(filetocopy[],newfile[]);
native DOF2_CheckLogin(file[],password[]);
native DOF2_File(user[]);
native DOF2_ParseInt();
native DOF2_ParseFloat();
native DOF2_ParseBool();
native DOF2_ParseBin();
native DOF2_ParseHex();
native DOF2_SetUTF8(bool:set);
native bool:DOF2_GetUTF8();
native DOF2_GetFile();
native DOF2_MakeBackup(file[]);
native DOF2_RemoveTag (file [], tag []);
native DOF2_TagExists (file [], tag []);
*/

// OnParseFile <Tag><Key>(extraid, value [])
// OnParseFile <><Key>(extraid, value [])
// OnDefaultParseFile (extraid, value [], key [], tag [], file [])

#define OnParseFile<%0><%1>(%2) \
	forward _OnParseFile_%0_%1(%2); \
	public _OnParseFile_%0_%1(%2)

// The tag may be the empty tag (tag with no name). If necessary, use 'isnull(tag)' to check if it's the empty tag.
#define OnDefaultParseFile(%0) \
	forward _OnDefaultParseFile(%0); \
	public _OnDefaultParseFile(%0)

#define DOF2_ParseBool() \
	(strval (value) || (value [0] && !strcmp (value, "true", true)))

#define DOF2_ParseInt() \
	(strval (value))

#define DOF2_ParseFloat() \
	(floatstr (value))

#define DOF2_ParseBin() \
	(DOF2_strbin (value))

#define DOF2_ParseHex() \
	(DOF2_strhex (value))

#define DOF2_LoadFile() \
	DOF2_ParseFile (CurrentFile, -1, false)

#define DOF2_SaveFile \
	DOF2_WriteFile

#define DOF2_FileExists \
	fexist

#define Tags. \
	Tags_

#define Entries. \
	Entries_

#define DOF2:: \
	DOF2_

/*
#define MAX_TAG_SIZE        (32)
#define MAX_LINE_SIZE       (128)
#define MAX_TAGS            (32)
#define MAX_ENTRIES         (256)
#define MAX_FILE_SIZE       (64)

#define USER_FILE_PATH 		"Users/%s.ini"
*/

// The maximum length of the name of a tag.
#if !defined MAX_TAG_SIZE
	#define MAX_TAG_SIZE        (32)
#endif

// The maximum length of a line (including key and value).
#if !defined MAX_LINE_SIZE
	#define MAX_LINE_SIZE       (128)
#endif

// The maximum number of sections which can be handled. Be careful: MUST NOT be higher than 255.
#if !defined MAX_TAGS
	#define MAX_TAGS            (32)
#endif

// The maximum number of entries which can be loaded into the cache.
#if !defined MAX_ENTRIES
	#define MAX_ENTRIES         (256)
#endif

// The maximum length of the name of a file.
#if !defined MAX_FILE_SIZE
	#define MAX_FILE_SIZE       (64)
#endif

/*
If PACK_CONTENT == true tag names and lines (key + value) will get stored in cache as packed strings.
The result is less memory usage. However, you won't be able to use special characters like russian or chinese ones.
*/
#if !defined PACK_CONTENT
	#define PACK_CONTENT        (false)
#endif

#define INVALID_ENTRY           (-1)
#define INVALID_TAG_ID          (-1)

// Do you want to emulate DUDB?
#if !defined DUDB_CONVERT && 0 // Change to 1 to enable.
	#define DUDB_CONVERT
	#if !defined USER_FILE_PATH
		#define USER_FILE_PATH 	"%s.dudb.sav"
	#endif
#elseif !defined USER_FILE_PATH
	#define USER_FILE_PATH 		"Users/%s.ini" // Create Users folder or redefine.
#endif

// Do you want to emulate DINI?
#if !defined DINI_CONVERT && 0 // Change to 1 to enable.
	#define DINI_CONVERT
#endif

#if MAX_TAGS >= 256
	#error MAX_TAGS must not be greater than 255.
#endif

#if !defined isnull
	#define isnull(%1) \
		((!(%1[0])) || (((%1[0]) == '\1') && (!(%1[1]))))
#endif

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

static stock
	bool: UseUTF8 = PACK_CONTENT,
	CurrentFile [MAX_FILE_SIZE],
	bool: FileChanged,
	Tags.FirstEntry [MAX_TAGS] = {INVALID_ENTRY, ...},
	Tags.LastEntry [MAX_TAGS] = {INVALID_ENTRY, ...},
	Tags.Count,
#if PACK_CONTENT == true
	Tags.Name [MAX_TAGS][MAX_TAG_SIZE char],
	Entries.Line [MAX_ENTRIES][MAX_LINE_SIZE char],
	Entries.Tag [MAX_ENTRIES][MAX_TAG_SIZE char],
#else
	Tags.Name [MAX_TAGS][MAX_TAG_SIZE],
    Entries.Line [MAX_ENTRIES][MAX_LINE_SIZE],
	Entries.Tag [MAX_ENTRIES][MAX_TAG_SIZE],
#endif
	Entries.TagID [MAX_ENTRIES char],
	Entries.NextEntry [MAX_ENTRIES] = {INVALID_ENTRY, ...},
	Entries.PreviousEntry [MAX_ENTRIES] = {INVALID_ENTRY, ...},
	Entries.Count,
	SortedEntries [MAX_ENTRIES][2]; // Index 0: Hashcode, Index 1: EntryID

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

DOF2::Exit ()
	DOF2::WriteFile ();

stock DOF2::SetUTF8 (bool: set)
	UseUTF8 = set;

stock bool: DOF2::GetUTF8 ()
	return UseUTF8;

stock DOF2::SetFile (file [])
{
    CurrentFile [0] = '\0';
	strcat (CurrentFile, file);
}

stock DOF2::GetFile ()
	return CurrentFile;

stock DOF2::CreateFile (file [], password [] = "")
{
	if (!DOF2::FileExists (file))
	{
		if (password [0])
	    #if defined DUDB_CONVERT
	    	return DOF2::SetInt (file, "password_hash", DOF2::num_hash (password));
		#else
		    return DOF2::SetInt (file, "password", DOF2::num_hash (password));
		#endif
		else
		{
		    new File: f = fopen (file, io_append);
		    return fclose (f);
		}
	}
	return 0;
}

stock DOF2::RenameFile (oldfile [], newfile [])
{
	if (DOF2::FileExists (oldfile) && !DOF2::FileExists (newfile))
	{
		if (CurrentFile [0] && !strcmp (CurrentFile, oldfile) && FileChanged)
			DOF2::WriteFile ();
		else
			DOF2::ParseFile (oldfile, -1, false);
		DOF2::SetFile (newfile);
		if (DOF2::WriteFile ())
		    return fremove (oldfile);
	}
	return 0;
}

stock DOF2::CopyFile (filetocopy [], newfile [])
{
    if (DOF2::FileExists (filetocopy) && !DOF2::FileExists (newfile))
	{
	    if (CurrentFile [0] && !strcmp (CurrentFile, filetocopy) && FileChanged)
			DOF2::WriteFile ();
		else
			DOF2::ParseFile (filetocopy, -1, false);
		DOF2::SetFile (newfile);
		return DOF2::WriteFile ();
	}
	return 0;
}

stock DOF2::RemoveFile (file [])
{
	if (file [0])
	{
	    if (CurrentFile [0] && !strcmp (CurrentFile, file))
	        CurrentFile [0] = '\0';
		return fremove (file);
	}
	return 0;
}

stock DOF2::MakeBackup (file [])
{
	if (DOF2::FileExists (file))
	{
	    new
	        year,
			month,
			day,
			hour,
			minute,
			second,
			backupfile [MAX_FILE_SIZE];

	    getdate (year, month, day);
	    gettime (hour, minute, second);
	    format (backupfile, sizeof (backupfile), "%s.%02d_%02d_%02d.%02d_%02d_%02d_%02d.bak", CurrentFile, month, day, year, hour, minute, second, GetTickCount ());
	    return DOF2::CopyFile (CurrentFile, backupfile);
	}
	return 0;
}

stock bool: DOF2::TagExists (file [], tag [])
{
    if (file [0] && DOF2::FileExists (file)) // You can't remove the empty Tags.
	{
	    if (!tag [0])
	        return true; // Emptry section always exists.

	#if PACK_CONTENT == true
		new buf [MAX_TAG_SIZE];
	#endif
	
    	for (new i = 1; i < Tags.Count; ++i)
    	{
    	#if PACK_CONTENT == true
    	    strunpack (buf, Tags.Name [i]);
	        if (!strcmp (buf, tag))
		        return true;
		#else
		    if (!strcmp (Tags.Name [i], tag))
		        return true;
		#endif
    	}
	}
	return false;
}

stock DOF2::RemoveTag (file [], tag [])
{
	// Removes tag 'tag' with all it's entries.
	if (file [0] && tag [0] && DOF2::FileExists (file)) // You can't remove the empty Tags.
	{
    	if (CurrentFile [0] && !strcmp (CurrentFile, file) && FileChanged)
			DOF2::WriteFile ();
		else
			DOF2::ParseFile (file, -1, false);

		new
		#if PACK_CONTENT == true
		    line [MAX_LINE_SIZE],
		    buf [MAX_TAG_SIZE],
		#endif
			tagid = INVALID_TAG_ID,
			currententry,
			key [MAX_KEY_SIZE];

	    for (new i = 1; i < Tags.Count; ++i)
	    {
		#if PACK_CONTENT == true
	        strunpack (buf, Tags.Name [i]);
	        if (!strcmp (buf, tag))
	        {
	            tagid = i;
	            break;
	        }
		#else
		    if (!strcmp (Tags.Name [i], tag))
	        {
	            tagid = i;
	            break;
	        }
		#endif
	    }

		if (tagid != INVALID_TAG_ID)
		{
			currententry = Tags.FirstEntry [tagid];
			while (currententry != INVALID_ENTRY)
			{
			    // Remove all entries under the current Tags.
		    #if PACK_CONTENT == true
		    	strunpack (line, Entries.Line [currententry]);
			    DOF2::ParseLine (line, key, buf);
			#else
			    DOF2::ParseLine (Entries.Line [currententry], key, buf);
			#endif
			    DOF2::Unset (file, key, tag);
				currententry = Entries.NextEntry [currententry];
			}

		    // Move the last tag to the position of the current tag. Creates a little mess.
		    --Tags.Count;
		    Tags.Name [tagid] = Tags.Name [Tags.Count];
		    Tags.FirstEntry [tagid] = Tags.FirstEntry [Tags.Count];
		    Tags.LastEntry [tagid] = Tags.LastEntry [Tags.Count];

			// Adjust the tag IDs of the entries.
		    currententry = Tags.FirstEntry [tagid];
		    while (currententry != INVALID_ENTRY)
		    {
		        Entries.TagID {currententry} = tagid;
		        currententry = Entries.NextEntry [currententry];
		    }
		    FileChanged = true;
		    return 1;
		}
	}
	return 0;
}

static stock DOF2::SearchEntry (key [], tag [], keybuf [], valbuf [], &pos, keybufsize = sizeof (keybuf), valbufsize = sizeof (valbuf))
{
	if (key [0] && Entries.Count)
	{
	    new
	        entry = INVALID_ENTRY,
	        l,
	        m,
	        r,
	        h,
		#if PACK_CONTENT == true
	        line [MAX_LINE_SIZE],
	        buf [MAX_TAG_SIZE],
		#endif
	        i;

        h = DOF2::bernstein (key);
		l = 0;
		r = Entries.Count - 1;

		/*
		 * Binary search in a sorted list of entries in O(log n) time. This algorithm makes for example with 256 elements a maximum of ~8 steps until the entry is found if it exists.
		 * A sequential search would take up to 256 steps. That was the case in the first Double-O-Files script.
		 */
		while (l <= r)
		{
		    if ((r - l) < 2)
		    {
		        if (h == SortedEntries [l][0])
		        {
		            m = l;
			        entry = SortedEntries [l][1];
				}
				else if (r > l && h == SortedEntries [r][0])
				{
				    m = r;
				    entry = SortedEntries [r][1];
				}
		        break;
		    }
		    else
		    {
		        m = l + (r - l) / 2;
			    if (h == SortedEntries [m][0])
			    {
			        entry = SortedEntries [m][1];
			        break;
			    }
			    else if (h > SortedEntries [m][0])
					l = m + 1;
				else
				    r = m - 1;
			}
		}

		// Candidate found?
		if (entry != INVALID_ENTRY)
		{
			// Check if it's the entry we want.
  		#if PACK_CONTENT == true
			strunpack (line, Entries.Line [entry]);
			DOF2::ParseLine (line, keybuf, valbuf, keybufsize, valbufsize);
		    strunpack (buf, Entries.Tag [entry]);
			if (!strcmp (keybuf, key) && ((!tag [0] && !buf [0]) || (tag [0] && buf [0] && !strcmp (tag, buf))))
		#else
			DOF2::ParseLine (Entries.Line [entry], keybuf, valbuf, keybufsize, valbufsize);
		    if (!strcmp (keybuf, key) && ((!tag [0] && !Entries.Tag [entry][0]) || (tag [0] && Entries.Tag [entry][0] && !strcmp (tag, Entries.Tag [entry]))))
		#endif
			    return (pos = m, entry);
			else
			{
			    // If not, look left and right in the list for entries with the same hash code. This can be collisions or entries with the same key from another section.
			    for (i = m - 1; i >= 0 && h == SortedEntries [i][0]; --i)
			    {
			        entry = SortedEntries [i][1];
			 	#if PACK_CONTENT == true
					strunpack (line, Entries.Line [entry]);
					DOF2::ParseLine (line, keybuf, valbuf, keybufsize, valbufsize);
				    strunpack (buf, Entries.Tag [entry]);
					if (!strcmp (keybuf, key) && ((!tag [0] && !buf [0]) || (tag [0] && buf [0] && !strcmp (tag, buf))))
				#else
					DOF2::ParseLine (Entries.Line [entry], keybuf, valbuf, keybufsize, valbufsize);
				    if (!strcmp (keybuf, key) && ((!tag [0] && !Entries.Tag [entry][0]) || (tag [0] && Entries.Tag [entry][0] && !strcmp (tag, Entries.Tag [entry]))))
				#endif
					    return (pos = i, entry);
			    }

			    for (i = m + 1; i < Entries.Count && h == SortedEntries [i][0]; ++i)
			    {
			        entry = SortedEntries [i][1];
			 	#if PACK_CONTENT == true
					strunpack (line, Entries.Line [entry]);
					DOF2::ParseLine (line, keybuf, valbuf, keybufsize, valbufsize);
				    strunpack (buf, Entries.Tag [entry]);
					if (!strcmp (keybuf, key) && ((!tag [0] && !buf [0]) || (tag [0] && buf [0] && !strcmp (tag, buf))))
				#else
					DOF2::ParseLine (Entries.Line [entry], keybuf, valbuf, keybufsize, valbufsize);
				    if (!strcmp (keybuf, key) && ((!tag [0] && !Entries.Tag [entry][0]) || (tag [0] && Entries.Tag [entry][0] && !strcmp (tag, Entries.Tag [entry]))))
				#endif
					    return (pos = i, entry);
			    }
			}
		}
	}
	
	keybuf [0] = valbuf [0] = '\0';
	return INVALID_ENTRY;
}

stock DOF2::SetString (file [], key [], value [], tag [] = "")
{
    if (file [0] && key [0] && value [0] && DOF2::FileExists (file))
	{
	    new
	        entry,
	        pos,
	        tagid = INVALID_TAG_ID,
	        keybuf [MAX_LINE_SIZE],
	        valbuf [MAX_LINE_SIZE],
		#if PACK_CONTENT == true
	        buf [MAX_TAG_SIZE],
	        line [MAX_LINE_SIZE],
		#endif
			i;

        if (!CurrentFile [0] || strcmp (CurrentFile, file)) // No file in buffer or the file you want to read from is not the file in the buffer.
	    	DOF2::ParseFile (file, -1, false);

        entry = DOF2::SearchEntry (key, tag, keybuf, valbuf, pos);

        // If the entry has been found, just change it's content.
        if (entry != INVALID_ENTRY)
		{
		    FileChanged = true;
		#if PACK_CONTENT == true
			format (line, sizeof (line), "%s = %s", key, value);
		    return strpack (Entries.Line [entry], line);
		#else
			format (Entries.Line [entry], sizeof (Entries.Line []), "%s = %s", key, value);
			return 1;
		#endif
        }

		if (Entries.Count >= MAX_ENTRIES)
		    return 0;

		// Search for the section where the entry belongs.
		if (!tag [0])
		    tagid = 0;
		else
		{
			for (i = 1; i < Tags.Count; ++i)
			{
			#if PACK_CONTENT == true
			    strunpack (buf, Tags.Name [i]);
			    if (buf [0] && !strcmp (tag, buf))
			    {
			        tagid = i;
			        break;
			    }
			#else
			    if (Tags.Name [i][0] && !strcmp (tag, Tags.Name [i]))
			    {
			        tagid = i;
			        break;
			    }
			#endif
			}
		}

		// Section we want does not exist, create new one if possible.
		if (tagid == INVALID_TAG_ID)
		{
		    if (Tags.Count >= MAX_TAGS)
		        return 0;

		    tagid = Tags.Count++;
	    #if PACK_CONTENT == true
			strpack (Tags.Name [tagid], tag);
		#else
		    Tags.Name [tagid][0] = '\0';
		    strcat (Tags.Name [tagid], tag, sizeof Tags.Name []);
		#endif
			Tags.FirstEntry [tagid] = Tags.LastEntry [tagid] = INVALID_ENTRY;
		}

		// Add the entry to the section. Section's content is defined by a linear two way list.
	#if PACK_CONTENT == true
		format (line, sizeof (line), "%s = %s", key, value);
		strpack (Entries.Line [Entries.Count], line);
	#else
	    format (Entries.Line [Entries.Count], sizeof (Entries.Line []), "%s = %s", key, value);
	#endif
		Entries.Tag [Entries.Count] = Tags.Name [tagid];
		Entries.TagID {Entries.Count} = tagid;
		Entries.NextEntry [Entries.Count] = INVALID_ENTRY;

		// Add entry to sorted list of entries and move to right correct position in O(n) time.
		SortedEntries [Entries.Count][0] = DOF2::bernstein (key);
		SortedEntries [Entries.Count][1] = Entries.Count;
		i = Entries.Count - 1;
		while (i >= 0 && SortedEntries [i][0] > SortedEntries [i + 1][0])
		{
		    DOF2::Swap (SortedEntries [i], SortedEntries [i + 1]);
		    --i;
		}

		if (Tags.LastEntry [tagid] == INVALID_ENTRY) // No entry in this section.
		{
		    Tags.FirstEntry [tagid] = Tags.LastEntry [tagid] = Entries.Count;
		    Entries.PreviousEntry [Entries.Count] = INVALID_ENTRY;
		}
		else
		{
			Entries.NextEntry [Tags.LastEntry [tagid]] = Entries.Count;
			Entries.PreviousEntry [Entries.Count] = Tags.LastEntry [tagid];
			Tags.LastEntry [tagid] = Entries.Count;
		}
		++Entries.Count;
		FileChanged = true;
	}
	return 1;
}

stock DOF2::GetString (file [], key [], tag [] = "")
{
	new buf [MAX_LINE_SIZE];
	DOF2::GetStringEx (file, key, buf, sizeof (buf), tag);
	return buf;
}

stock DOF2::GetStringEx (file [], key [], result [], size, tag [] = "")
{
	if (file [0] && key [0] && DOF2::FileExists (file))
	{
	    new
	        pos,
			keybuf [MAX_LINE_SIZE];

        if (!CurrentFile [0] || strcmp (CurrentFile, file))
	    	DOF2::ParseFile (file, -1, false);

		// Find entry and assign the result with it's value.
		return (DOF2::SearchEntry (key, tag, keybuf, result, pos, sizeof (keybuf), size) != INVALID_ENTRY);
	}
	return 0;
}

stock DOF2::Unset (file [], key [], tag [] = "")
{
	if (file [0] && key [0] && DOF2::FileExists (file))
	{
	    new
	        entry,
	        pos,
			keybuf [MAX_LINE_SIZE],
			valbuf [MAX_LINE_SIZE];

		if (!CurrentFile [0] || strcmp (CurrentFile, file))
	    	DOF2::ParseFile (file, -1, false);

		if ((entry = DOF2::SearchEntry (key, tag, keybuf, valbuf, pos)) != INVALID_ENTRY)
		{
		    // Remove entry from it's section.
		    if (Tags.FirstEntry [Entries.TagID {entry}] == entry) // Is the entry the first entry in the section? Make it's next entry the first entry.
		    {
		        Tags.FirstEntry [Entries.TagID {entry}] = Entries.NextEntry [entry];
		        if (Entries.NextEntry [entry] != INVALID_ENTRY)
					Entries.PreviousEntry [Entries.NextEntry [entry]] = INVALID_ENTRY;
			}
			else
			{
			    Entries.NextEntry [Entries.PreviousEntry [entry]] = Entries.NextEntry [entry];
			    if (Entries.NextEntry [entry] != INVALID_ENTRY)
					Entries.PreviousEntry [Entries.NextEntry [entry]] = Entries.PreviousEntry [entry];
			}

			if (Tags.LastEntry [Entries.TagID {entry}] == entry)
			{
			    Tags.LastEntry [Entries.TagID {entry}] = Entries.PreviousEntry [entry];
			    if (Entries.PreviousEntry [entry] != INVALID_ENTRY)
			        Entries.NextEntry [Entries.PreviousEntry [entry]] = INVALID_ENTRY;
			}
			else
			{
			    Entries.PreviousEntry [Entries.NextEntry [entry]] = Entries.PreviousEntry [entry];
			    if (Entries.PreviousEntry [entry] != INVALID_ENTRY)
			        Entries.NextEntry [Entries.PreviousEntry [entry]] = Entries.NextEntry [entry];
			}

			// Move the entry to the end of the sorted list and decrement Entries.Count to forget about the unset Entries.
			while (pos < (Entries.Count - 1))
			{
			    DOF2::Swap (SortedEntries [pos], SortedEntries [pos + 1]);
			    ++pos;
			}
			--Entries.Count;
			FileChanged = true;
		    return 1;
		}
	}
	return 0;
}

stock DOF2::RenameKey (file [], oldkey [], newkey [], tag [] = "")
{
	if (file [0] && oldkey [0] && DOF2::FileExists (file))
	{
	    new
	        entry,
	        pos,
		#if PACK_CONTENT == true
			line [MAX_LINE_SIZE],
		#endif
			keybuf [MAX_LINE_SIZE],
			valbuf [MAX_LINE_SIZE];

		if (!CurrentFile [0] || strcmp (CurrentFile, file))
	    	DOF2::ParseFile (file, -1, false);

		if ((entry = DOF2::SearchEntry (oldkey, tag, keybuf, valbuf, pos)) != INVALID_ENTRY)
		{
		    // Change content of Entries.
		#if PACK_CONTENT == true
            format (line, sizeof (line), "%s = %s", newkey, valbuf);
		    strpack (Entries.Line [entry], line);
		#else
            format (Entries.Line [entry], sizeof (Entries.Line []), "%s = %s", newkey, valbuf);
		#endif

		    // Because the hashcode has been changed, the entry has to move in the list.
		    SortedEntries [pos][0] = DOF2::bernstein (newkey);
		    if (pos < (MAX_ENTRIES - 1) && SortedEntries [pos][0] > SortedEntries [pos + 1][0])
		    {
				// Hash value of key is greater than the hash value of it's right neighbor, move to the right by swapping the 2 entries.
				while (pos < (MAX_ENTRIES - 1) && SortedEntries [pos][0] > SortedEntries [pos + 1][0])
				{
				    DOF2::Swap (SortedEntries [pos], SortedEntries [pos + 1]);
				    ++pos;
				}
		    }
		    else if (pos > 0 && SortedEntries [pos][0] < SortedEntries [pos + 1][0])
		    {
		        // Hash value of key is smaller than the hash value of it' left neighbor, move to the left by swapping the 2 entries.
		        while (pos > 0 && SortedEntries [pos][0] < SortedEntries [pos - 1][0])
		        {
		            DOF2::Swap (SortedEntries [pos], SortedEntries [pos - 1]);
		            --pos;
		        }
		    }

			FileChanged = true;
		    return 1;
		}
	}
	return 0;
}

stock bool: DOF2::IsSet (file [], key [], tag [] = "")
{
	if (!DOF2::FileExists (file))
	    return false;
	    
	new
	    pos,
		keybuf [MAX_LINE_SIZE],
		valbuf [MAX_LINE_SIZE];

	if (!CurrentFile [0] || strcmp (CurrentFile, file))
		DOF2::ParseFile (file, -1, false);

	// Try to find the Entries.
	return (DOF2::SearchEntry (key, tag, keybuf, valbuf, pos) != INVALID_ENTRY);
}

stock DOF2::SetInt (file [], key [], value, tag [] = "")
{
	new buf [16];
	format (buf, sizeof (buf), "%d", value);
	return DOF2::SetString (file, key, buf, tag);
}

stock DOF2::GetInt (file [], key [], tag [] = "")
{
	new buf [16];
	DOF2::GetStringEx (file, key, buf, sizeof (buf), tag);
	return strval (buf);
}

stock DOF2::SetHex (file [], key [], value, tag [] = "")
{
	new buf [16];
	DOF2::hexstr (value, buf);
	return DOF2::SetString (file, key, buf, tag);
}

stock DOF2::GetHex (file [], key [], tag [] = "")
{
	new buf [16];
	DOF2::GetStringEx (file, key, buf, sizeof (buf), tag);
	return DOF2::strhex (buf);
}

stock DOF2::SetBin (file [], key [], value, tag [] = "")
{
	new buf [35];
	DOF2::binstr (value, buf);
	return DOF2::SetString (file, key, buf, tag);
}

stock DOF2::GetBin (file [], key [], tag [] = "")
{
	new buf [35];
	DOF2::GetStringEx (file, key, buf, sizeof (buf), tag);
	return DOF2::strbin (buf);
}

stock DOF2::SetFloat (file [], key [], Float: value, tag [] = "")
{
	new buf [32];
	format (buf, sizeof (buf), "%.8f", value);
	return DOF2::SetString (file, key, buf, tag);
}

stock Float: DOF2::GetFloat (file [], key [], tag [] = "")
{
	new buf [32];
	DOF2::GetStringEx (file, key, buf, sizeof (buf), tag);
	return floatstr (buf);
}

stock bool: DOF2::GetBool (file [], key [], tag [] = "")
{
	new buf [16];
	DOF2::GetStringEx (file, key, buf, sizeof (buf), tag);
	return (strval (buf) || (buf [0] && !strcmp (buf, "true", true)));
}

stock DOF2::SetBool (file [], key [], bool: value, tag [] = "")
	return DOF2::SetString (file, key, value ? ("true") : ("false"), tag);
	
/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

stock DOF2::PrintFile (comment [] = "")
{
    if (CurrentFile [0])
	{
		new
			bool: firstline = true,
			currententry,
		#if PACK_CONTENT == true
			buf [MAX_LINE_SIZE],
		#endif
			entries,
			i;

	    printf ("[DOF] Current file: %s", CurrentFile);
		for ( ; i < Tags.Count; ++i)
		{
		    if (i)
			{
			    if (!firstline)
					print (" ");
				else
				    firstline = false;
			#if PACK_CONTENT == true
				strunpack (buf, Tags.Name [i]);
				printf ("[%s]", buf);
			#else
			    printf ("[%s]", Tags.Name [i]);
			#endif
			}
			currententry = Tags.FirstEntry [i];
			while (currententry != INVALID_ENTRY)
			{
			#if PACK_CONTENT == true
				strunpack (buf, Entries.Line [currententry]);
				print (buf);
			#else
			    print (Entries.Line [currententry]);
			#endif
			    currententry = Entries.NextEntry [currententry];
			    firstline = false;
			    ++entries;
			}
		}
		printf ("* %d sections, %d entries", i, entries);
		if (comment [0])
			printf ("* Comment: %s", comment);
		return 1;
	}
	return 0;
}

stock DOF2::WriteFile ()
{
	if (CurrentFile [0])
	{
		new
			File: f = fopen (CurrentFile, io_write),
			bool: firstline = true,
			currententry;

		if (f)
		{
			for (new i; i < Tags.Count; ++i)
			{
			    if (Tags.FirstEntry [i] != INVALID_ENTRY) // Do not write when empty.
			    {
				    if (i)
					{
					    if (!firstline)
						{
							fputchar (f, '\r', UseUTF8);
							fputchar (f, '\n', UseUTF8);
						}
						else
						    firstline = false;
						fputchar (f, '[', UseUTF8);
						fwritechars (f, Tags.Name [i]);
						fputchar (f, ']', UseUTF8);
						fputchar (f, '\r', UseUTF8);
						fputchar (f, '\n', UseUTF8);
					}

					currententry = Tags.FirstEntry [i];
					while (currententry != INVALID_ENTRY)
					{
					    fwritechars (f, Entries.Line [currententry]);
					    fputchar (f, '\r', UseUTF8);
					    fputchar (f, '\n', UseUTF8);
					    currententry = Entries.NextEntry [currententry];
					    firstline = false;
					}
				}
			}
			FileChanged = false;
			return fclose (f);
		}
	}
	return 0;
}

stock DOF2::ParseFile (file [], extraid = -1, bool: callback = true)
{
    if (file [0] && DOF2::FileExists (file))
	{
	    // Write the buffer when 'CurrentFile' is not the file you want to read or when you want to use callbacks and the file has been changed.
	    if (((CurrentFile [0] && strcmp (CurrentFile, file)) || callback) && FileChanged)
	    	DOF2::WriteFile ();

		new
			File: f = fopen (file, io_readwrite),
		    buf [MAX_LINE_SIZE],
		#if PACK_CONTENT == true
		    line [MAX_LINE_SIZE char],
		    tag [MAX_TAG_SIZE],
		#else
		    line [MAX_LINE_SIZE],
		#endif
		    key [MAX_LINE_SIZE],
		    value [MAX_LINE_SIZE],
			c,
			pos;

		if (f)
		{
			FileChanged = false;
            DOF2::SetFile (file);

			Tags.Count = 1;
			Entries.Count = 0;
			Tags.FirstEntry [0] = Tags.LastEntry [0] = INVALID_ENTRY;

			for (new i, size = flength (f); i < size; ++i)
			{
			    c = fgetchar (f, 0, UseUTF8);
				if (pos == MAX_LINE_SIZE - 1 || c == '\n' || c == '\r')
				    c = '\0';
			#if PACK_CONTENT == true
				line {pos++} = c;
			#else
			    line [pos++] = c;
			#endif

				if (c == '\0')
				{
				    // A new section found. Add the section to the list of sections.
				#if PACK_CONTENT == true
				    if (line {0} == '[')
				#else
                	if (line [0] == '[')
				#endif
				    {
				        if (Tags.Count < MAX_TAGS)
				        {
							pos = 1;
						#if PACK_CONTENT == true
							while (line {pos} && line {pos} != ']' && (pos - 1) < MAX_TAG_SIZE)
							{
								Tags.Name [Tags.Count]{pos - 1} = line {pos};
								++pos;
							}
							Tags.Name [Tags.Count]{pos - 1} = '\0';
						#else
						    while (line [pos] && line [pos] != ']' && (pos - 1) < MAX_TAG_SIZE)
							{
								Tags.Name [Tags.Count][pos - 1] = line [pos];
								++pos;
							}
							Tags.Name [Tags.Count][pos - 1] = '\0';
						#endif
							Tags.FirstEntry [Tags.Count] = Tags.LastEntry [Tags.Count] = INVALID_ENTRY;
							++Tags.Count;
					    }
				    }
				    else
				    {
					#if PACK_CONTENT == true
				        if (line {0})
					#else
					    if (line [0])
					#endif
				        {
				        #if PACK_CONTENT == true
							strunpack (buf, line);
					        DOF2::ParseLine (buf, key, value);
					        strunpack (tag, Tags.Name [Tags.Count - 1]);

							// Call a specific function for a specific entry - ZCMD-style!
					        if (callback)
					        {
						        format (buf, sizeof (buf), "_OnParseFile_%s_%s", tag, key);
						        if (!CallRemoteFunction (buf, "is", extraid, value))
									CallRemoteFunction ("_OnDefaultParseFile", "issss", extraid, value, key, Tags.Name [Tags.Count - 1][0] ? Tags.Name [Tags.Count - 1] : ("\1"), file);
							}
						#else
					        DOF2::ParseLine (line, key, value);

							// Call a specific function for a specific entry - ZCMD-style!
					        if (callback)
					        {
						        format (buf, sizeof (buf), "_OnParseFile_%s_%s", Tags.Name [Tags.Count - 1], key);
						        if (!CallRemoteFunction (buf, "is", extraid, value))
									CallRemoteFunction ("_OnDefaultParseFile", "issss", extraid, value, key, Tags.Name [Tags.Count - 1][0] ? Tags.Name [Tags.Count - 1] : ("\1"), file);
							}
						#endif

							// Add entry to it's section and to the list which will be sorted.
							Entries.Line [Entries.Count] = line;
							Entries.Tag [Entries.Count] = Tags.Name [Tags.Count - 1];
							Entries.TagID {Entries.Count} = Tags.Count - 1;
							Entries.NextEntry [Entries.Count] = INVALID_ENTRY;

							SortedEntries [Entries.Count][0] = DOF2::bernstein (key);
							SortedEntries [Entries.Count][1] = Entries.Count;

							if (Tags.LastEntry [Tags.Count - 1] == INVALID_ENTRY)
							{
							    Tags.FirstEntry [Tags.Count - 1] = Tags.LastEntry [Tags.Count - 1] = Entries.Count;
							    Entries.PreviousEntry [Entries.Count] = INVALID_ENTRY;
							}
							else
							{
								Entries.NextEntry [Tags.LastEntry [Tags.Count - 1]] = Entries.Count;
								Entries.PreviousEntry [Entries.Count] = Tags.LastEntry [Tags.Count - 1];
								Tags.LastEntry [Tags.Count - 1] = Entries.Count;
							}
							++Entries.Count;
						}
				    }
				    pos = 0;
				}
			}
			/*
			 * Sort list of entries by it's hashcodes in O(n * log n) time.
			 * (Worst case is actually O(n * n), however, this QuickSort implementation chooses a randomized pivot
			 * to minimize the chance for the worst case.)
			 */
			DOF2::QuickSort (SortedEntries, 0, Entries.Count - 1, true);
			return fclose (f);
		}
	}
	return 0;
}

stock DOF2::ReparseFile (file [], extraid, bool: callback = true)
{
	if (file [0] && CurrentFile [0] && !strcmp (file, CurrentFile))
	{
	    CurrentFile [0] = '\0';
		return DOF2::ParseFile (file, extraid, callback);
	}
	return 0;
}

static stock DOF2::ParseLine (line [], key [], value [], keysize = sizeof (key), valuesize = sizeof (value))
{
	new
		pos,
		readpos;

	if ((pos = charfind (line, '=')) != -1)
	{
	    // Read key and value.
	    readpos = pos - 1;
		while (readpos >= 0 && line [readpos] == ' ')
		    --readpos;

		if (readpos >= 0 && keysize > (readpos + 1))
		{
			key [readpos + 1] = '\0';
			while (readpos >= 0)
			{
				key [readpos] = line [readpos];
				--readpos;
			}
		}
		else
		    return 0;

		readpos = pos + 1;
		++pos;
		while (line [readpos] == ' ')
		{
			++pos;
		    ++readpos;
		}

        if (line [readpos])
		{
			while (readpos >= 0 && line [readpos] && valuesize > (readpos - pos + 1))
			{
				value [readpos - pos] = line [readpos];
				++readpos;
			}
			value [readpos - pos] = '\0';
		}
		else
		{
		    key [0] = '\0';
		    return 0;
		}
		return 1;
	}
	return 0;
}

stock DOF2::File (user [])
{
	new newfile [MAX_FILE_SIZE];
	format (newfile, sizeof (newfile), USER_FILE_PATH, DOF2::udb_encode (user));
	return newfile;
}

stock bool: DOF2::CheckLogin (file [], password [])
	return (file [0] && password [0] && DOF2::num_hash (password) == DOF2::GetInt (file, "password"));

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

stock DOF2::binstr (value, dest [], size = sizeof (dest))
	format (dest, size, "0b%b", value);

stock DOF2::hexstr (value, dest [], size = sizeof (dest))
	format (dest, size, "0x%x", value);

stock DOF2::strhex (string [])
{
	new
		i,
		value;
	if (string [0] == '0' && (string [1] == 'x' || string [1] == 'X'))
		i = 2;

    while (string [i])
    {
		value <<= 4;
		switch (string [i])
		{
		    case '0' .. '9':
		        value |= string [i] - '0';

			case 'A' .. 'F':
			    value |= string [i] - 'A' + 10;

            case 'a' .. 'f':
			    value |= string [i] - 'a' + 10;

			default:
			    return 0;
		}
		++i;
    }
    return value;
}

stock DOF2::strbin (string [])
{
	new
	    i,
	    value;

	if (string [0] == '0' && (string [1] == 'b' || string [1] == 'B'))
	    i = 2;

	while (string [i])
	{
	    if (string [i] != '1' && string [i] != '0')
	        return 0;

		value <<= 1;
		value |= (string [i] - '0');
		++i;
	}
	return value;
}

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

static stock charfind (string [], c)
{
	for (new i, len = strlen (string); i < len; ++i)
		if (string [i] == c)
		    return i;
	return -1;
}

static stock fwritechars (File: handle, c [])
{
    new pos;
#if PACK_CONTENT == true
	while (c {pos})
	    fputchar (handle, c {pos++}, UseUTF8);
#else
    while (c [pos])
	    fputchar (handle, c [pos++], UseUTF8);
#endif
}

static stock DOF2::QuickSort (array [][2], l, r, bool: randomize = true)
{
	if (r > l)
	{
		if (randomize)
		{
			new k = l + (random (65535) % (r - l + 1));
		  	DOF2::Swap (array [k], array [r]);
		}

		new
			i = l - 1,
			j = r,
			pivot = array [r][0];

		while (i < j)
		{
			do
				++i;
			while (array [i][0] <= pivot && i < r);

			do
			    --j;
			while (array [j][0] >= pivot && j > l);

			if (i < j)
			    DOF2::Swap (array [i], array [j]);
		}
		DOF2::Swap (array [i], array [r]);
		DOF2::QuickSort (array, l, i - 1, randomize);
		DOF2::QuickSort (array, i + 1, r, randomize);
	}
}

static stock DOF2::Swap (a [2], b [2])
{
 	new c [2];
	c [0] = a [0];
	c [1] = a [1];
	a [0] = b [0];
	a [1] = b [1];
	b [0] = c [0];
	b [1] = c [1];
}

static stock DOF2::bernstein (string [])
{
	new
		h = -1,
		i,
		j;

	while ((j = string [i++]))
		h = h * 33 + j;
	return h;
}

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

stock str_replace (const newstr [], const oldstr [], const srcstr [], deststr [], bool: ignorecase = false, size = sizeof (deststr))
{
	new
	    newlen = strlen (newstr),
	    oldlen = strlen (oldstr),
	    srclen = strlen (srcstr),
	    idx,
		rep;

	for (new i = 0; i < srclen; ++i)
	{
	    if (idx < (size - 1))
	    {
		    if ((i + oldlen) <= srclen)
		    {
		        if (!strcmp (srcstr [i], oldstr, ignorecase, oldlen))
		        {
					deststr [idx] = '\0';
					strcat (deststr, newstr, size);
					++rep;
					idx += newlen;
					i += oldlen - 1;
				}
				else
					deststr [idx++] = srcstr [i];
		    }
		    else
		    	deststr [idx++] = srcstr [i];
	    }
		else
		    return rep;
	}
	deststr [idx] = '\0';
	return rep;
}

stock DOF2::udb_encode (nickname [])
{
	new
		buf [256],
		result [256];

	static const symbols [][2][] =
	{
	    {"_", "_00"},
		{";", "_01"},
		{"!", "_02"},
		{"/", "_03"},
		{"\\", "_04"},
		{"[", "_05"},
		{"]", "_06"},
		{"?", "_07"},
		{".", "_08"},
		{"*", "_09"},
		{"<", "_10"},
		{">", "_11"},
		{"{", "_12"},
		{"}", "_13"},
		{" ", "_14"},
		{"\"", "_15"},
		{":", "_16"},
		{"|", "_17"},
		{"=", "_18"}
	};

	strcat (buf, nickname);
	for (new i = 0; i < sizeof (symbols); ++i)
	{
	    str_replace (symbols [i][1], symbols [i][0], buf, result);
	    buf [0] = '\0';
	    strcat (buf, result);
	}
	return result;
}

stock DOF2::udb_decode (nickname [])
{
	new
		buf [256],
		result [256];

	static const symbols [][2][] =
	{
	    {"_", "_00"},
		{";", "_01"},
		{"!", "_02"},
		{"/", "_03"},
		{"\\", "_04"},
		{"[", "_05"},
		{"]", "_06"},
		{"?", "_07"},
		{".", "_08"},
		{"*", "_09"},
		{"<", "_10"},
		{">", "_11"},
		{"{", "_12"},
		{"}", "_13"},
		{" ", "_14"},
		{"\"", "_15"},
		{":", "_16"},
		{"|", "_17"},
		{"=", "_18"}
	};

	strcat (buf, nickname);
	for (new i = 0; i < sizeof (symbols); ++i)
	{
	    str_replace (symbols [i][0], symbols [i][1], buf, result);
	    buf [0] = '\0';
	    strcat (buf, result);
	}
	return result;
}

stock DOF2::num_hash (buf [])
{
	new
		length = strlen (buf),
    	s1 = 1,
    	s2 = 0,
    	n;

    for (n = 0; n < length; n++)
	{
       s1 = (s1 + buf [n]) % 65521;
       s2 = (s2 + s1) % 65521;
    }
    return (s2 << 16) + s1;
}

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

#if defined DUDB_CONVERT

	#tryinclude <dutils>

	#define dUser(%0).( 			DOF2_GetString(DOF2_File(%0),
	#define dUserSet(%0).( 			DOF2_SetString(DOF2_File(%0),
	#define dUserINT(%0).( 			DOF2_GetInt(DOF2_File(%0),
	#define dUserSetINT(%0).( 		DOF2_SetInt(DOF2_File(%0),
	#define dUserFLOAT(%0).( 		DOF2_GetFloat(DOF2_File(%0),
	#define dUserSetFLOAT(%0).( 	DOF2_SetFloat(DOF2_File(%0),
	#define udb_Create(%0,%1)		DOF2_CreateFile(DOF2_File(%0),%1)
	#define udb_RenameUser(%0,%1)   DOF2_RenameFile(DOF2_File(%0),DOF2_File(%1))
	#define udb_Exists(%0)          DOF2_FileExists(DOF2_File(%0))
	#define udb_Remove(%0)          DOF2_RemoveFile(DOF2_File(%0))
	#define udb_CheckLogin(%0,%1)   DOF2_CheckLogin(DOF2_File(%0),%1)

	#if !defined _dudb_included
		#define _dudb_included
	#endif

#endif

#if defined DINI_CONVERT

	#define dini_Exists		        DOF2_FileExists
	#define dini_Remove         	DOF2_RemoveFile
	#define dini_Create         	DOF2_CreateFile
	#define dini_Set			    DOF2_SetString
	#define dini_Get         		DOF2_GetString
	#define dini_IntSet   			DOF2_SetInt
	#define dini_Int         		DOF2_GetInt
	#define dini_BoolSet            DOF2_SetBool
	#define dini_Bool               DOF2_GetBool
	#define dini_FloatSet 			DOF2_SetFloat
	#define dini_Float      		DOF2_GetFloat
	#define dini_Unset       		DOF2_Unset
	#define dini_Isset       		DOF2_IsSet

	#if !defined _dini_included
		#define _dini_included
	#endif

#endif

#if defined DINI_CONVERT || defined DUDB_CONVERT

	#define udb_hash            	DOF2_num_hash
	#define num_hash            	DOF2_num_hash
	#define udb_encode              DOF2_udb_encode
	#define udb_decode              DOF2_udb_decode

#endif
