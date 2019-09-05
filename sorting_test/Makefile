CC=g++
CFLAGS=-I.
DEPS = my_sorting.h test_generate.h
OBJ = my_sorting.o  sorting.o  test_generate.o

.PONEY: clean

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

sorting: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o sorting