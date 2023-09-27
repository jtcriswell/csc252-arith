CC := clang

all: hyp ratio card

%.o: %.c
	$(CC) -g -c -o $@ $<

%.o: %.S
	$(CC) -g -c -o $@ $<

hyp: hyp.o student.o
	$(CC) -g -z noexecstack -o $@ hyp.o student.o

ratio: ratio.o student.o
	$(CC) -g -z noexecstack -o $@ ratio.o student.o

card: card.o student.o
	$(CC) -g -z noexecstack -o $@ card.o student.o

clean:
	rm -f hyp ratio card *.o

