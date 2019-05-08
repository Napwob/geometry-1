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
        
$(EXECUTABLE):	$(OD)main.o $(OD)func.o
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)main.o $(OD)func.o
$(OD)main.o: $(SD)main.c
	$(CC) $(CFLAGS) -c -o $(OD)main.o $(SD)main.c
$(OD)func.o: $(SD)func.c
	$(CC) $(CFLAGS) -c -o $(OD)func.o $(SD)func.c
testing: $(TEST)

$(TEST): $(ODT)tmain.o $(ODT)func.o
	$(CC) $(CFLAGS) -o $(TEST) $(ODT)tmain.o $(ODT)func.o
$(OD)tmain.o: $(T)tmain.c
	$(CC) $(CFLAGS) -c -o $(ODT)tmain.o $(T)tmain.c
$(OD)func.o: $(SD)func.c
	$(CC) $(CFLAGS) -c -o $(ODT)func.o $(SD)func.c    
clean:
	rm -rf $(EXECUTABLE) $(OD)*.o $(TEST) $(ODT)*.o        
