# E-Commerce Makefile
# Created by Fernando Rodrigues Maciel
CC=g++
PROG=Q05
CPPFLAGS=-Wall -pedantic -std=c++11

.PHONY: all init doxy

all: Q05

debug: CPPFLAGS += -g -O0
debug: all

Q05: vital_stats.o main.o 
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CPPFLAGS) -o $(PROG) $^
	@echo "+++ Executavel criado em $(BIN_DIR)/$(PROG) +++"
	@echo "============="

vital_stats.o: vital_stats.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

main.o: main.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

doxy:
	doxygen -g