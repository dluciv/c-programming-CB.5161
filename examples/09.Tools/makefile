CC=gcc
CCOPT=-g
LNK=gcc

%.o : %.c
	$(CC) -c $(CCOPT) -o $@ $<

program : mod.o prog.o
	$(LNK) -o $@ $?

all : program

clean :
	- rm *.o

cleanall : clean
	- rm program

mrproper : cleanall
