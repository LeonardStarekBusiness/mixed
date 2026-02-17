all:
	cc -S c.c
	c++ -S main.cpp
	gfortran -c fortran.f90
	cc -c *.s
	c++ *.o -o mix

clean:
	rm -f *.o
	rm -f *.s
	rm -f *.mod

fclean: clean
	rm -f mix