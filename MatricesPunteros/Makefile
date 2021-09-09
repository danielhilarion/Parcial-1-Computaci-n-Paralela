GCC  = gcc
FLAGS = -ansi -pedantic -Wall -std=c99
C_FLAGS = -lm
PROGRAMAS = matrices

matrices:
	$(GCC) $(FLAGS) funcionesMatrices.c -c
	$(GCC) $(FLAGS) funcionesTime.c -c
	$(GCC) $(FLAGS) $@.c -c
	$(GCC) $(FLAGS) -o $@ $@.o funcionesMatrices.o funcionesTime.o

clean:
	$(RM) $(PROGRAMAS) *.o