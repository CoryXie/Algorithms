# Makefile for executable treetest

# ***************************************************************
# Parameters to control Makefile operation

CC = gcc
C++ = g++
CFLAGS = -Wall -g -c
LDFLAGS =


# ***************************************************************
# Entry to bring the executable up to date

checkString_SOURCES=checkString.c
checkString_OBJECTS=$(checkString_SOURCES:.c=.o)
checkString_EXECUTABLE=checkString

$(checkString_EXECUTABLE): $(checkString_OBJECTS) 
	$(CC) $(LDFLAGS) $(checkString_OBJECTS) -o $@

SOURCES=$(checkString_SOURCES)
EXECUTABLES=$(checkString_EXECUTABLE) 

all: $(SOURCES) $(EXECUTABLE)
	
.c.o:
	$(CC) $(CFLAGS) $< -o $@

.cpp.o:
	$(C++) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLES)

