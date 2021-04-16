CC=clang
CFLAG=-Wall -g

SRCDIR=src
OBJDIR=obj
BINDIR=bin
VPATH=src
PRINT_SRCS=ps
PRINT_OBJS=po

SRCS=$(wildcard $(SRCDIR)/*.c)
.PHONY=$(PRINT_SRCS)
.PHONY=$(PRINT_OBJS)

$(PRINT_SRCS):
	@printf "SRCS = $(SRCS)\n"

OBJS=$(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o, $(SRCS))

$(PRINT_OBJS):
	@printf "OBJS = $(OBJS)\n"

BIN=$(BINDIR)/main

all:$(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAG) $< -o $@

$(OBJS): $(SRCS)
	$(CC) $(CFLAG) -c $<

clean:
	rm $(OBJDIR)/* $(BINDIR)/* $(SRCDIR)/*.o
