OBJS= main.o dfa.o 
CC= g++
CFLAGS=
main:$(OBJS)
	$(CC) $(OBJS) -o main
main.o:main.cpp dfa.h
	        $(CC) $(CFLAGS) -c $< -o main.o
dfa.o:dfa.cpp dfa.h
	        $(CC) $(CFLAGS) -c $< -o $@
.PHONY: clean
clean:
	rm *.o main
