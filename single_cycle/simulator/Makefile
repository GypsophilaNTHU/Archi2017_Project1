CC		=gcc

SRC		=simulator.c\
		 instruction.c\
		 regfile.c\
		 memory.c

OUT		=single_cycle

CFLAGS	=-Wfatal-errors

TMPFILE	=*.o

RM		=rm -rf

all : compile

compile :
	$(CC) $(SRC) $(WFLAG) -o $(OUT)
warn :
	$(CC) $(SRC) -Wall -o $(OUT)
clean :
	$(RM) $(TMPFILE) $(OUT)
