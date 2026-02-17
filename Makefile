all:
	cc -S c.c
	c++ -S main.cpp
	cc -c *.s
	c++ *.o -o mix

clean:
	rm -f *.o
	rm -f *.s

fclean: clean
	rm -f mix