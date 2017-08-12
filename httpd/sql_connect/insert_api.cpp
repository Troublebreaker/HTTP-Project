#include"sql_api.h"

using namespace std;

int main()
{
    sqlApi mydb("127.0.0.1");

    mydb.connect();
    mydb.insert("zhangsan",\
                "man",\
                    18,\
                "coding");
   return 0;
}
