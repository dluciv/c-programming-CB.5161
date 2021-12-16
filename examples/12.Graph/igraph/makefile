LIB_PACKAGES=libigraph-dev
CC=gcc
CCOPT=`pkg-config --cflags $(LIB_PACKAGES)`
LNK=gcc
LNKOPT=`pkg-config --libs $(LIB_PACKAGES)`

%.o : %.c
	$(CC) -c $(CCOPT) -o $@ $<

program : igd.o
	$(LNK) -o $@ $(LNKOPT) $?

all : program
