# created following template Makefile on course webpage

SOURCES = dog.c
INCLUDES = $(wildcard *.h)

TARGET = dog

CXXFLAGS = -std=gnu++11 -Wall -Wextra -Wpedantic -Wshadow -g -Og

LDFLAGS =

OBJECTS = $(SOURCES:.c = .o)

DEPS = $(SOURCES:.c = .d)

CXX = clang

all: $(TARGET)

clean: 
	-rm $(DEPS) $(OBJECTS)

spotless: clean
	-rm $(TARGET)

	clang-format -i $(SOURCES) $(INCLUDES)

$(TARGET): (OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJECTS)

%.o: %.c
	$(CXX) $(CXXFLAGS) -c -MD -o $@ $<

-include $(DEPS)

.PHONY: all clean format spotless
