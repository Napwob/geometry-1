.PHONY:all clean testing
CC = gcc
CFLAGS = -Wall -Werror
SD = src/
OD = build/
ODT = build/test
T = test/
EXECUTABLE = bin/result.exe
TEST = bin/test.exe
all: $(EXECUTABLE)
      
all: build/ bin/ $(EXECUTABLE)
build/:
	mkdir build/ -p
bin/:
	mkdir bin/ -p        
$(EXECUTABLE):  $(OD)main.o $(OD)func.o
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)main.o $(OD)func.o -lm
$(OD)main.o: $(SD)main.c
	$(CC) $(CFLAGS) -c -o  $(OD)main.o $(SD)main.c -lm
$(OD)func.o: $(SD)func.c
	 $(CC) $(CFLAGS) -c -o  $(OD)func.o $(SD)func.c -lm
clean:
	rm -rf $(EXECUTABLE) $(OD)*.o $(TEST) $(ODT)*.o        
