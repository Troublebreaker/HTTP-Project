#ifndef _SQL_API_H
#define _SQL_API_H

#include<iostream>
#include<mysql.h>
#include<string>
#include<string.h>
//connect   disconnect   execute


class sqlApi
{

public:


sqlApi(const std::string&_h,const std::string&_u="root",const std::string&_p="",const std::string&_d="linux",int _port=3306);
    int  insert(const std::string &_name,\
                const std::string &_sex,\
                    const int &_age,\
                const std::string &_hobby);
    int connect();
    ~sqlApi();

private:

    MYSQL*conn;
    std::string host;
    std::string user;
    std::string passwd;
    std::string db;
    int port;
};

#endif
