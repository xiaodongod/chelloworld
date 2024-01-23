CC=gcc
#CFLAGS=-Wall -Wextra -pedantic
SRC_DIR=.
BIN_DIR=./bin

SRCS=$(wildcard $(SRC_DIR)/*.c)
BINS=$(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SRCS))

all: $(BINS)

$(BIN_DIR)/%: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean
clean:
	rm -f $(BINS)