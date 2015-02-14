## Compiler
CC = gcc
COPT = -Wall

## gcc optimize option
OPTIMIZE = -O2

##
OBJECTS = driver_gj.o gj.o

driver_gj:	driver_gj.o gj.o
	$(CC) $(COPT) -o driver_gj $(OBJECTS)
gj.o:	gj.c
	$(CC) $(COPT) -c gj.c
driver_gj.o:	driver_gj.c
	$(CC) $(COPT) -c driver_gj.c


clean:
	rm -f *.o
