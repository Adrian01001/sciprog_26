CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = matmult
OBJS = main.o matmult.o

all: $(TARGET)

matmult: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c matmult.h
	$(CC) $(CFLAGS) -c $<

matmult.o: matmult.c matmult.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)
