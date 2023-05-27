LIB_PACKAGES=igraph
CC=clang
CCOPT=`pkg-config --cflags $(LIB_PACKAGES)`
LNK=clang
LNKOPT=`pkg-config --libs $(LIB_PACKAGES)`

%.o : %.c
	$(CC) -c $(CCOPT) -o $@ $^

program : igraph_small.o
	$(LNK) -o $@ $(LNKOPT) $?

all : program
