all:
	$(F90) fiddle.f90 -c 
	$(CXX) test.cpp fiddle.o -larmflang -o hello


install:
