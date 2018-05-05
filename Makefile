OBJS = main.o prints.o
CC = gcc

all: testMac1

exec: 
	./testMac1
testMac1: $(OBJS)
	$(CC) -o $@ $^

# Complime all source into Objects	
%.o: %.c
	$(CC) -c $^

#	
clean:
	rm -rf testMac1 $(OBJS) 