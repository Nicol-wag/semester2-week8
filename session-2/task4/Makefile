
# student: student.o main.o
# 	gcc student.o main.o -o student

# main.o: main.c student.h structure.h
# 	gcc -c main.c

# student.o: student.c student.h structure.h
# 	gcc -c student.c

# clean:
# 	rm student.o main.o student
	
# 编译器
CC = gcc
CFLAGS = -Wall -Wextra

# 目录
SRC = src
INC = include
OBJ = obj
BIN = bin

# 文件
TARGET = $(BIN)/student
OBJS = $(OBJ)/main.o $(OBJ)/student.o

# 默认目标
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# main.o
$(OBJ)/main.o: $(SRC)/main.c $(INC)/student.h $(INC)/structure.h
	$(CC) $(CFLAGS) -c $(SRC)/main.c -o $(OBJ)/main.o

# student.o
$(OBJ)/student.o: $(SRC)/student.c $(INC)/student.h $(INC)/structure.h
	$(CC) $(CFLAGS) -c $(SRC)/student.c -o $(OBJ)/student.o

# 清理
clean:
	rm -f $(OBJ)/*.o $(TARGET)
