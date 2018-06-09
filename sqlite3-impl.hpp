#include <iostream>
#include "sqlite3.h"
// this header file only acts for sqlite implementation.

namespace sqlite
{
    class database
    {
        sqlite3* db;
        void dbInit()
        {
            int result = sqlite3_open("$HOME/.alertme/birthday.db", &db);
            if( result != SQLITE_OK )
            {
                std::cout << sqlite3_errmsg(db);
            }
        }
    };
}