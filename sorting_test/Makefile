CC=g++
CCFLAGS =-fopenmp -O3 -std=c++17 -g 
DEPS = my_sorting.h test_generate.h
OBJ = my_sorting.o  sorting.o  test_generate.o

.PONEY: clean

sorting: $(OBJ)
	$(CC) -o sorting $(CCFLAGS) $(OBJ)

sorting.o: my_sorting.h test_generate.h
my_sorting.o: my_sorting.h
test_generate.o: test_generate.h

clean:
	rm -rf *.o sorting