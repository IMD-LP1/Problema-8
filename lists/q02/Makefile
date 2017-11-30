# E-Commerce Makefile
# Created by Fernando Rodrigues Maciel
CC=g++
PROG=main
CPPFLAGS=-Wall -pedantic -std=c++11

.PHONY: all init

all: Q02

debug: CPPFLAGS += -g -O0
debug: all

Q02: generate_id.o main.o 
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CPPFLAGS) -o $(PROG) $^
	@echo "+++ Executavel criado em $(BIN_DIR)/$(PROG) +++"
	@echo "============="

loja.o:generate_id.cpp 
	$(CC) -c $(CPPFLAGS) -o $@ $<

main.o: main.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<
