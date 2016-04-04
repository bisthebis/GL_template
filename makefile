OBJ = main.o
LIB = -lsfml-graphics -lsfml-window -lsfml-system -pthread -lGL -lGLEW
CFLAGS = -Wall -Wextra -Werror -O2 -std=c++14
CC = g++
TARGET = Programme

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ) $(LIB) $(CFLAGS)

%.o: %.cpp
	$(CC) -c $< $(CFLAGS)

clean:
	rm *.o

mrproper: clean
	rm Programme
