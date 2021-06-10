CC = g++
CFLAGS = -std=c++11 -Wall -g -fexec-charset=GBK -I ../Solution

vpath %.cpp ../Solution

all: mytest main

main: main.cpp test_1_100.o test_101_200.o test_401_500.o profiler.o util.o
	$(CC) $(CFLAGS) main.cpp test_1_100.o test_101_200.o test_401_500.o profiler.o util.o -o main

mytest: mytest.cpp test_1_100.o test_101_200.o test_401_500.o profiler.o util.o
	$(CC) $(CFLAGS) mytest.cpp  test_1_100.o test_101_200.o test_401_500.o profiler.o util.o -o mytest

test_401_500.o: test_401_500.cpp 
	$(CC) $(CFLAGS) -c test_401_500.cpp 

test_101_200.o: test_101_200.cpp 
	$(CC) $(CFLAGS) -c test_101_200.cpp 

test_1_100.o: test_1_100.cpp util.cpp  
	$(CC) $(CFLAGS) -c test_1_100.cpp ../Solution/util.cpp

util.o: util.cpp 
	$(CC) $(CFLAGS) -c ../Solution/util.cpp

profiler.o: profiler.cpp 
	$(CC) $(CFLAGS) -c profiler.cpp 

.PHONY : clean
clean:
	del *.o
	del *.exe