CC=g++
CCFLAGS =-fopenmp -O3 -std=c++17 -g -pthread -fopenmp
# CC = g++
# CCFLAGS = -O3 -g -fopenmp
DEPS = my_sorting.h test_generate.h time_test.h headers.h
OBJ =  sorting.o my_sorting.o time_test.o test_generate.o 

.PONEY: clean

sorting: $(OBJ)
	$(CC) -o sorting $(CCFLAGS) $(OBJ)

.cpp.o:
	$(CC) -c $(CCFLAGS) $<
# sorting.o: $(DEPS)
# 	$(CC) $(CCFLAGS) -c sorting.cpp $<

# my_sorting.o: my_sorting.h headers.h
# 	$(CC) $(CCFLAGS) -c my_sorting $<
# time_test.o: time_test.h headers.h
# 	$(CC) $(CCFLAGS) -c time_test.cpp $<
# test_generate.o: test_generate.h headers.h
# 	$(CC) $(CCFLAGS) -c test_generate.cpp $<

clean:
	rm -rf *.o sorting