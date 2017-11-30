# E-Commerce Makefile
# Created by Fernando Rodrigues Maciel
CC=g++
PROG=Q06
CPPFLAGS=-Wall -pedantic -std=c++11

.PHONY: all init

all: Q06

debug: CPPFLAGS += -g -O0
debug: all

Q06: math.o main.o 
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CPPFLAGS) -o $(PROG) $^
	@echo "+++ Executavel criado em $(BIN_DIR)/$(PROG) +++"
	@echo "============="

math.o: math.cpp 
	$(CC) -c $(CPPFLAGS) -o $@ $<

main.o: main.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

doxy:
	doxygen -g