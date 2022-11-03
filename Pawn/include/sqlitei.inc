#define MAX_STRING_QUERY (1000)
#define function:%0<%1> stock sql_%0(%1)
new DB:sql_Database,DBResult:sql_Result,sql_Field[30],sql_StringSet[MAX_STRING_QUERY],sql_StringInt[MAX_STRING_QUERY],sql_StringFloat[MAX_STRING_QUERY],sql_StringCreate[MAX_STRING_QUERY],sql_QueryString[MAX_STRING_QUERY];
function:SetString<DB:database,table[],field[],value[]> {
        format(sql_StringSet,sizeof(sql_StringSet),"UPDATE `%s` SET `%s` = '%s'",table,field,value);
        return db_query(database,sql_StringSet),1;
}
function:SetInt<DB:database,table[],field[],value> {
        format(sql_StringInt,sizeof(sql_StringInt),"UPDATE `%s` SET `%s` = '%d'",table,field,value);
        return db_query(database,sql_StringInt),1;
}
function:SetFloat<DB:database,table[],field[],Float:value> {
        format(sql_StringInt,sizeof(sql_StringInt),"UPDATE `%s` SET `%s` = '%f'",table,field,value);
        return db_query(database,sql_StringInt),1;
}
function:GetInt<DB:database,table[],field[],get[]> return strval(sql_GetString(database,table,field,get));
function:GetIntEx<DB:database,table[],field[],get[],equal[]> return strval(sql_GetStringEx(database,table,field,get,equal));
stock Float:sql_GetFloat(DB:database,table[],field[],get[]) return floatstr(sql_GetString(database,table,field,get));
stock Float:sql_GetFloatEx(DB:database,table[],field[],get[],equal[]) return floatstr(sql_GetStringEx(database,table,field,get,equal));
function:Exists<DB:database,table[],field[],value[]> {
        new sql_String[MAX_STRING_QUERY],bool:sql_Return;
        format(sql_String,sizeof(sql_String),"SELECT `%s` FROM `%s` WHERE `%s` = '%s'",field,table,field,value);
        sql_Result = db_query(database,sql_String);
        sql_Return = db_num_rows(sql_Result)?true:false;
        db_free_result(sql_Result);
        return sql_Return;
}
function:GetString<DB:database,table[],field[],get[]> {
        new sql_String[MAX_STRING_QUERY],sql_Return[100];
        format(sql_String,sizeof(sql_String),"SELECT * FROM `%s` WHERE `%s`",table,field);
        sql_Result = db_query(database,sql_String);
        db_get_field_assoc(sql_Result,get,sql_Field,sizeof(sql_Field));
        format(sql_Return,sizeof(sql_Return),"%s",sql_Field),db_free_result(sql_Result);
        return sql_Return;
}
function:GetStringEx<DB:database,table[],field[],get[],equal[]> {
        new sql_String[MAX_STRING_QUERY],sql_Return[100];
        format(sql_String,sizeof(sql_String),"SELECT * FROM `%s` WHERE `%s` = '%s'",table,field,equal);
        sql_Result = db_query(database,sql_String);
        db_get_field_assoc(sql_Result,get,sql_Field,sizeof(sql_Field));
        format(sql_Return,sizeof(sql_Return),"%s",sql_Field),db_free_result(sql_Result);
        return sql_Return;
}
function:Count<DB:database,table[]> {
        new sql_Query[MAX_STRING_QUERY];
        format(sql_Query,sizeof(sql_Query),"SELECT * FROM `%s`",table);
        sql_Result = db_query(database,sql_Query);
        return db_num_rows(sql_Result);
}
