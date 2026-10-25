CC = gcc
TARGET = matmult
OBJS = main.o matmult.o

all: $(TARGET)
	rm $(OBJS)

matmult: $(OBJS)
	$(CC) -o $@ $^

main.o: main.c matmult.h
	$(CC) -c $<

matmult.o: matmult.c matmult.h
	$(CC) -c $<

clean:
	rm -f $(OBJS) $(TARGET)
