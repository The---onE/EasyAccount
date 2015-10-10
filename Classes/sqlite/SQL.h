#pragma once

#include "Global.h"
#include "sqlite3.h"

class SQL
{
public:
	bool openFlag;
	sqlite3 *db;
	bool selectFlag;
	char **re;
	int r;

	static SQL* s_singleInstance;
	static SQL* getInstance();
	static void destroyInstance();

	int openDB();
	int closeDB();
	int createTable();
	int insert(int type, int num, std::string sclass, int loan);
	int selectStart();
	int selectStartWithType(int type1, int type2 = -1, int type3 = -1);
	int selectStartWithLoan();
	int select(int line, int* type, int* num, std::string* sclass, int* loan, std::string* datatime);
	int selectEnd();
	int clearDB();
};