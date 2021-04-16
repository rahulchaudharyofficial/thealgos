CC=clang
CFLAG=-Wall -g

SRCDIR=src
OBJDIR=obj
BINDIR=bin
VPATH=src

SRCS=$(wildcard $(SRCDIR)/*.c)
OBJS=$(patsubst %.c,%.o, $(SRCS))
BIN=$(BINDIR)/main

all:$(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAG) $< -o $@

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm $(OBJDIR)/* $(BINDIR)/*
