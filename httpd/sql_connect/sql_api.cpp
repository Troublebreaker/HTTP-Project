#include"sql_api.h"

using namespace std;

sqlApi::sqlApi(const std::string &_h,const std::string&_u,const std::string&_p,const std::string&_d,int _port)
{
    host=_h;
    user=_u;
    passwd=_p;
    db=_d;
    port=_port;
    conn=mysql_init(NULL);

}
int sqlApi::connect()
{
    if(mysql_real_connect(conn,host.c_str(),user.c_str(),"",\
                         db.c_str(),port,NULL,0))
    {
        cout<<"connect sucess!"<<endl;
    }
    else
    {
        cout<<"connect falied"<<endl;
    }
    return 0;
}
int sqlApi:: insert(const std::string &_name,\
                    const std::string &_sex,\
                    const int &_age,\
                    const std::string &_hobby)
{
    std::string sql="INSERT INTO stu_info (name,age,sex,hobby) values('";
    sql+=_name;
    sql+="',";
    sql+=_age;
    sql+="',";
    sql+=_sex;
    sql+="',";
    sql+=_hobby;
    sql+="');";

    cout<<sql<<endl;
    int ret=mysql_query(conn,sql.c_str());
    return ret;

}
sqlApi::~sqlApi()
{
    mysql_close(conn);
}


