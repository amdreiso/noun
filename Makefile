
CC=gcc
LIBS=-Wall
SRC=main.c
TARGET=verbo

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET) $(LIBS)

clean:
	rm ./verbo
	rm *.txt

