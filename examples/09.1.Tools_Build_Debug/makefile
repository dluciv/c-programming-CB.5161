CC=clang
CCOPT=-g
LNK=clang

%.o : %.c
	$(CC) -c $(CCOPT) -o $@ $<

program : mod.o prog.o
	$(LNK) -o $@ $?

all : program

clean :
	- rm *.o
	- rm *.hdrdep.bak

cleanall : clean
	- rm program
	- echo > makefile.hdrdep

mrproper : cleanall

# Advanced feature: #include file dependencies
# Run `make depends` before `make all`

depends :
	makedepend -f makefile.hdrdep *.c

include makefile.hdrdep
