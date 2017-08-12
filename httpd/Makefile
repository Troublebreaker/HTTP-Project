ROOT=$(shell pwd)
httpd:httpd.c
	gcc -o $@ $^ -lpthread
.PHONY:clean
clean:
	rm -f httpd
