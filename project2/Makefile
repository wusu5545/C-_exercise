#-------------------------------
SOUECE=src/main.cpp
PROGRAM=montecarlo
INCLUDE=include

#TESTDIR=test
#TEST=$(TESTDIR)/TestComplex.cpp
#TESTFILE=TestComplex
#TESTINPUT=input.txt
TESTOUTPUT=plot/Pi_Approx.txt

CC=g++ -std=c++11
DOXY=doxygen
DOCDIR=doc
DOXYFILE=$(DOCDIR)/$(PROGRAM)
#-------------------------------

all: $(PROGRAM) doc clean

$(PROGRAM): $(SOUECE)
	$(CC) -I $(INCLUDE) -c $(SOUECE) -o $(PROGRAM).o
	$(CC) -o $(PROGRAM) $(PROGRAM).o
#test: $(TEST)
#	$(CC) -I $(INCLUDE) -c $(TEST) -o $(TESTFILE).o
#	$(CC) -o $(TESTDIR)/$(TESTFILE) $(TESTFILE).o
#driver:
#	./$(TESTDIR)/$(TESTFILE) < $(TESTINPUT) > $(TESTOUTPUT)
out: $(TESTOUTPUT)
	head $(TESTOUTPUT)
#in: $(TESTINPUT)
#	head $(TESTINPUT)
doc: $(DOXYFILE)
	$(DOXY) $(DOXYFILE)
.PHONY: $(PROGRAM) doc clean
	
clean:
	rm -f $(PROGRAM).o $(TESTFILE).o