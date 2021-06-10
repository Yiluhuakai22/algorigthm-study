TAR=main

CC = g++
CFLAGS = -std=c++11 -Wall -g -fexec-charset=GBK -I ../Solution

vpath %.cpp ../Solution

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
$(TAR):$(OBJ)
	$(CC) $(OBJ) -o $(TAR)
$(OBJ):
.PHONY : clean
clean:
	del $(OBJ) $(TAR)