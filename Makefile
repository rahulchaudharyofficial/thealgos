CC=clang
CFLAG=-Wall -g

SRCDIR=src
OBJDIR=obj
BINDIR=bin
VPATH=src
PRINT_SRCS=ps
PRINT_OBJS=po
BIN=$(BINDIR)/main

SRCS=$(wildcard $(SRCDIR)/*.c)
OBJS=$(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o, $(SRCS))


all:$(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAG) -o $@ $<

$(OBJS): $(SRCS)
	$(CC) $(CFLAG) -c $<

clean:
	rm $(OBJDIR)/* $(BINDIR)/* $(SRCDIR)/*.o

.PHONY=$(PRINT_SRCS)
.PHONY=$(PRINT_OBJS)

$(PRINT_OBJS):
	@printf "OBJS = $(OBJS)\n"

$(PRINT_SRCS):
	@printf "SRCS = $(SRCS)\n"