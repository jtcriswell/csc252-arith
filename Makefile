all: mp1

mp1: driver.o student.o
	$(CC) -g -o $@ driver.o student.o

clean:
	rm -f mp1 driver.o student.o

