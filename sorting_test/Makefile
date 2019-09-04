CC = g++
CCFLAGS = -I.
DEPS = hellomake.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

sorting: my_sorting.o my_sorting.o 
	$(CC) -o hellomake hellomake.o hellofunc.o 