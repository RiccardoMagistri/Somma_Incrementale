all: somma_incrementale

somma_incrementale: somma_incrementale_a.o somma_incrementale_b.o
	gcc -o somma_incrementale somma_incrementale_a.o somma_incrementale_b.o

somma_incrementale_a.o : somma_incrementale_a.c somma_incrementale.h
	gcc -c -o somma_incrementale_a.o somma_incrementale_a.c

somma_incrementale_b.o : somma_incrementale_b.c somma_incrementale.h
	gcc -c -o somma_incrementale_b.o somma_incrementale_b.c