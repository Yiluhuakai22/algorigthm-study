CC = g++
CFLAGS = -std=c++11 -Wall -g -fexec-charset=GBK -I ../Solution

all: test1

test1: test_1_100.cpp profiler.o
	$(CC) $(CFLAGS) test_1_100.cpp profiler.o -o test 

profiler.o: profiler.cpp 
	$(CC) $(CFLAGS) -c profiler.cpp 

.PHONY : clean
clean:
	del *.o
	del *.exe