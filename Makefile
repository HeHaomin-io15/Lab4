all: calculator
#dependencies
calculator: main.o calculator.o
	@echo $$(date "+%M:%S.%3N")
	g++ main.o calculator.o -o calculator
	@echo $$(date "+%M:%S.%3N")
main.o: main.cpp
	g++ -c main.cpp
calculator.o: calculator.cpp
	g++ -c calculator.cpp
clean:
	rm -rf *.o calculator
 