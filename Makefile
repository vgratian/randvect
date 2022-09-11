.PHONY: clean

CC ?= gcc
TARGET := randvect

$(TARGET): $(TARGET).c 
	@${CC} $@.c -o $@

clean:
	@rm -f $(TARGET)
