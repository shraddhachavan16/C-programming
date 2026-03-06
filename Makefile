//2502

CC = g++
CFLAGS = -g -Wno-deprecated

TARGET = main

OBJS = $(TARGET).o Board.o Queen.o

HEADERS = Board.h Queen.h

SOURCES = main.cpp Board.cpp Queen.cpp

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

$(OBJS): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SOURCES)

tidy:
	rm -rf $(OBJS) *~

clean: tidy
	rm -rf $(TARGET)

