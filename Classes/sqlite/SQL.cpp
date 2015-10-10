#include "SQL.h"

SQL* SQL::s_singleInstance = nullptr;

SQL* SQL::getInstance()
{
	if (!s_singleInstance)
	{
		s_singleInstance = new SQL();
		s_singleInstance->openFlag = false;
		s_singleInstance->selectFlag = false;
	}
	return s_singleInstance;
}

void SQL::destroyInstance()
{
	CC_SAFE_DELETE(s_singleInstance);
	s_singleInstance = nullptr;
}

int SQL::openDB()
{
	if (!openFlag)
	{
		db = NULL;
		std::string path = FileUtils::getInstance()->getWritablePath() + "account.db";

		std::string sql;
		int result;
		result = sqlite3_open(path.c_str(), &db);

		CC_ASSERT(result == SQLITE_OK);
		openFlag = true;
		return result;
	}
	else
	{
		//CC_ASSERT(false);
		log("Database has been opened");
		return UNNECESSARY;
	}
}

int SQL::closeDB()
{
	if (openFlag)
	{
		int result = sqlite3_close(db);
		CC_ASSERT(result == SQLITE_OK);
		openFlag = false;
		return result;
	}
	else
	{
		//CC_ASSERT(false);
		log("Database has not been opened");
		return UNNECESSARY;
	}
}

int SQL::createTable()
{
	if (openFlag)
	{
		std::string sql = "create table account(ID integer primary key autoincrement, TYPE integer, NUM integer, CLASS graphic(12), LOAN integer, DATATIME not null default(datetime('now', 'localtime')))";
		int result = sqlite3_exec(db, sql.c_str(), NULL, NULL, NULL);
		if (result == SQLITE_ERROR)
			return UNNECESSARY;
		CC_ASSERT(result == SQLITE_OK);
		return result;
	}
	else
	{
		//CC_ASSERT(false);
		log("Database has not been opened");
		return FAIL;
	}
}

int SQL::insert(int type, int num, std::string sclass, int loan)
{
	if (openFlag)
	{
		std::string sql = String::createWithFormat("insert into account(TYPE, NUM, CLASS, LOAN) values(%d, %d, '%s', %d)", type, num, sclass.c_str(), loan)->getCString();
		int result = sqlite3_exec(db, sql.c_str(), NULL, NULL, NULL);
		CC_ASSERT(result == SQLITE_OK);
		return result;
	}
	else
	{
		//CC_ASSERT(false);
		log("Database has not been opened");
		return FAIL;
	}
}

int SQL::selectStart()
{
	if (openFlag)
	{
		if (!selectFlag)
		{
			int c;
			std::string sql = "select * from account";
			int result = sqlite3_get_table(db, sql.c_str(), &re, &r, &c, NULL);
			CC_ASSERT(result == SQLITE_OK);
			selectFlag = true;
			return r;
		}
		else
		{
			//CC_ASSERT(false);
			log("Select has been started");
			return UNNECESSARY;
		}
	}
	else
	{
		//CC_ASSERT(false);
		log("Database has not been opened");
		return FAIL;
	}
}

int SQL::selectStartWithType(int type1, int type2 /* = -1 */, int type3 /* = -1 */)
{
	if (openFlag)
	{
		if (!selectFlag)
		{
			int c;
			std::string sql;
			if (type3 == -1)
			{
				if (type2 == -1)
					sql = String::createWithFormat("select * from account where TYPE=%d", type1)->getCString();
				else
					sql = String::createWithFormat("select * from account where TYPE=%d or TYPE=%d", type1, type2)->getCString();
			}
			else
				sql = String::createWithFormat("select * from account where TYPE=%d or TYPE=%d or TYPE=%d", type1, type2, type3)->getCString();
			int result = sqlite3_get_table(db, sql.c_str(), &re, &r, &c, NULL);
			CC_ASSERT(result == SQLITE_OK);
			selectFlag = true;
			return r;
		}
		else
		{
			//CC_ASSERT(false);
			log("Select has been started");
			return UNNECESSARY;
		}
	}
	else
	{
		//CC_ASSERT(false);
		log("Database has not been opened");
		return FAIL;
	}
}

int SQL::selectStartWithLoan()
{
	if (openFlag)
	{
		if (!selectFlag)
		{
			int c;
			std::string sql = String::createWithFormat("select * from account where LOAN=%d or LOAN=%d", BORROW, LEND)->getCString();
			int result = sqlite3_get_table(db, sql.c_str(), &re, &r, &c, NULL);
			CC_ASSERT(result == SQLITE_OK);
			selectFlag = true;
			return r;
		}
		else
		{
			//CC_ASSERT(false);
			log("Select has been started");
			return UNNECESSARY;
		}
	}
	else
	{
		//CC_ASSERT(false);
		log("Database has not been opened");
		return FAIL;
	}
}

int SQL::select(int line, int* type, int* num, std::string* sclass, int* loan, std::string* datatime)
{
	if (selectFlag)
	{
		int base = 6 * (r - line);
		*type = stdStoI(re[base + TYPE]);
		*num = stdStoI(re[base + NUM]);
		*sclass = std::string(re[base + CLASS]);
		*loan = stdStoI(re[base + LOAN]);
		*datatime = std::string(re[base + DATATIME]);
		return 0;
	}
	else
	{
		//CC_ASSERT(false);
		log("Select has not been started");
		return FAIL;
	}
}

int SQL::selectEnd()
{
	if (selectFlag)
	{
		sqlite3_free_table(re);
		selectFlag = false;
		return 0;
	}
	else
	{
		//CC_ASSERT(false);
		log("Select has not been started");
		return UNNECESSARY;
	}
}

int SQL::clearDB()
{
	if (openFlag)
	{
		std::string sql = "delete from account";
		int result = sqlite3_exec(db, sql.c_str(), NULL, NULL, NULL);
		CC_ASSERT(result == SQLITE_OK);
		sql = "delete from sqlite_sequence";
		result = sqlite3_exec(db, sql.c_str(), NULL, NULL, NULL);
		CC_ASSERT(result == SQLITE_OK);
		return result;
	}
	else
	{
		//CC_ASSERT(false);
		log("Database has not been opened");
		return FAIL;
	}
}