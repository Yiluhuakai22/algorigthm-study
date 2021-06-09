CC = g++
CFLAGS = -std=c++11 -Wall -g -fexec-charset=GBK -I ../Solution

all: test

test: test.cpp test_1_100.o profiler.o
	$(CC) $(CFLAGS) test.cpp test_1_100.o profiler.o -o test

test_1_100.o: test_1_100.cpp 
	$(CC) $(CFLAGS) -c test_1_100.cpp 

profiler.o: profiler.cpp 
	$(CC) $(CFLAGS) -c profiler.cpp 

.PHONY : clean
clean:
	del *.o
	del *.exe