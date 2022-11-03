#include <a_samp>

#define DOB:: \
	DOB_

stock DOB::WordToBytes (word, &byte0, &byte1, &byte2, &byte3, mode = 0)
{
	switch (mode)
	{
	    case 0:
	    {
	        new bytes [4 char]; // 4 char = 1
	        bytes [0] = word;
			byte0 = bytes {0};
			byte1 = bytes {1};
			byte2 = bytes {2};
			byte3 = bytes {3};
	    }

	    default:
	    {
	        byte3 = word & 0xFF;
	        byte2 = (word & 0xFF00) >>> 8;
	        byte1 = (word & 0xFF0000) >>> 16;
	        byte0 = (word & 0xFF000000) >>> 24;
	    }
	}
}

stock DOB::BytesToWord (byte0, byte1, byte2, byte3, &word, mode = 0)
{
	switch (mode)
	{
	    case 0:
	    {
	        new bytes [4 char]; // 4 char = 1
			bytes {0} = byte0;
			bytes {1} = byte1;
			bytes {2} = byte2;
			bytes {3} = byte3;
			word = bytes [0];
	    }

	    default:
     	{
	        word = byte3; // & 0xFF;
	        word |= (byte2 << 8); // & 0xFF00;
	        word |= (byte1 << 16); // & 0xFF0000;
	        word |= (byte0 << 24); // & 0xFF000000;
	    }
	}
}

// 1-bit array:

#define SHAMT   (5)

#define BitArray:%0<%1> \
	Bits:%0[((%1) + cellbits) >>> SHAMT]
	
stock DOB::GetBit (Bits: bitarray [], index, cells = sizeof (bitarray))
{
    new i = index >>> SHAMT;

	if (i < 0 || i >= cells)
	    return 0;
	    
	return ((_: bitarray [i] >>> (index & (cellbits - 1))) & 1);
}

stock DOB::SetBit (Bits: bitarray [], index, bool: set, cells = sizeof (bitarray))
{
	new i = index >>> SHAMT;
	
	if (i < 0 || i >= cells)
	    return;
	    
	if (set)
		bitarray [i] |= Bits: (1 << (index & (cellbits - 1))); // (index % cellbits));
	else
	    bitarray [i] &= Bits: ~(1 << (index & (cellbits - 1))); // (index % cellbits));
}

stock DOB::SetAllBits (Bits: bitarray [], bool: set, cells = sizeof (bitarray))
{
	if (set)
	    for (new i = 0; i < cells; ++i)
	        bitarray [i] = Bits: 0xFFFFFFFF; // bitarray [i] |= Bits: 0xFFFFFFFF;
	else
	    for (new i = 0; i < cells; ++i)
	        bitarray [i] = Bits: 0; // bitarray [i] &= Bits: 0;
}

// 4-bit array (nibble array):

#define NibbleArray:%0<%1> \
    Nibbles:%0[((%1) + 8) >>> 3]

stock DOB::GetNibble (Nibbles: nibblearray [], index, cells = sizeof (nibblearray))
{
	new i = index >>> 3;
	
	if (i < 0 || i >= cells)
	    return 0;
	
    return (((_: nibblearray [i] >>> ((index & 7) << 2)) & 0x0F);
}

stock DOB::SetNibble (Nibbles: nibblearray [], index, value, cells = sizeof (nibblearray))
{
    new
        shamt = (index & 7) * 4, // (index % 8) * 4
        i = index >>> 3;

    if (i < 0 || i >= cells)
	    return;

    nibblearray [i] &= Nibbles: ~(0x0F << shamt); // Set target "cell" to 0.
    nibblearray [i] |= Nibbles: ((value & 0x0F) << shamt); // This looks more save to me.
}

// 8-bit array => char array (byte array)

// 16-bit (integer16) array:

/*
#define Int16Array:%0<%1> \
	Ints16:%0[(%1 << 1) char]
	
stock DOB::GetInt16 (Ints16: int16array [], index)
{
	new i = index << 1;
	return ((int16array {i} << 8) & int16array {i + 1});
}
	
stock DOB::SetInt16 (Ints16: int16array [], index, value)
{
	new i = index << 1;
	int16array {i} = (value & 0xFF00) >>> 8;
	int16array {i + 1} = value & 0xFF;
}
*/

#define Int16Array:%0<%1> \
	Ints16:%0[((%1) + 1) >>> 1]

stock DOB::GetInt16 (Ints16: int16array [], index, cells = sizeof (int16array))
{
    new i = index >>> 1 char;
    
	if (i < 0 || i >= cells)
	    return 0;
	    
	return (((_: int16array [i] >>> ((index & 1) << 4)) & 0xFFFF);
}

stock DOB::SetInt16 (Ints16: int16array [], index, value, cells = sizeof (int16array))
{
	new
	    shamt = (index & 1) * 16,
	    i = index >>> 1;

    if (i < 0 || i >= cells)
	    return;

	int16array [i] &= Ints16: ~(0xFFFF << shamt);
	int16array [i] |= Ints16: ((value & 0xFFFF) << shamt);
}
