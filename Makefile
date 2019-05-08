.PHONY:all clean
CC = gcc
CFLAGS = -Wall -Werror
SD = src/
OD = build/
EXECUTABLE = bin/result.exe
all: $(EXECUTABLE)
        
$(EXECUTABLE):	$(OD)main.o $(OD)func.o
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)main.o $(OD)func.o
$(OD)main.o: $(SD)main.c
	$(CC) $(CFLAGS) -c -o $(OD)main.o $(SD)main.c
$(OD)func.o: $(SD)func.c
	$(CC) $(CFLAGS) -c -o $(OD)func.o $(SD)func.c
clean:
	rm -rf $(EXECUTABLE) $(OD)*.o        
