CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp functions.cpp Class.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=chess

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@