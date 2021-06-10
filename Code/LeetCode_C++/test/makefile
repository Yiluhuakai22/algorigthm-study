CC = g++
CFLAGS = -std=c++11 -Wall -g -fexec-charset=GBK -I ../Solution

all: test main

main: main.cpp test_1_100.o test_401_500.o profiler.o
	$(CC) $(CFLAGS) main.cpp test_1_100.o test_401_500.o profiler.o -o main

test: test.cpp test_1_100.o test_401_500.o profiler.o
	$(CC) $(CFLAGS) test.cpp test_1_100.o test_401_500.o profiler.o -o test

test_401_500.o: test_401_500.cpp 
	$(CC) $(CFLAGS) -c test_401_500.cpp 

test_1_100.o: test_1_100.cpp 
	$(CC) $(CFLAGS) -c test_1_100.cpp 

profiler.o: profiler.cpp 
	$(CC) $(CFLAGS) -c profiler.cpp 

.PHONY : clean
clean:
	del *.o
	del *.exe