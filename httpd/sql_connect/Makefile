ROOT=$(shell pwd)
MYSQL_INCLUDE=$(ROOT)/lib/include
LIB=$(ROOT)/lib/lib

.PHONY:all
all:insert_api select_api

insert_api:insert_api.o sql_api.o
	g++ -o $@ $^ -L$(LIB) -lmysqlclient
select_api:select_api.o sql_api.o
	g++ -o $@ $^ -L$(LIB) -lmysqlclient

%.o:%.cpp
	g++ -c $< -I$(MYSQL_INCLUDE)  
.PHONY:clean
clean:
	rm -f insert_api select_api %.o


.PHNOY:debug
debug:
	echo $(MYSQL_INCLUDE)



