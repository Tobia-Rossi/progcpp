# Project Name:     Prakt05a1
# Project Code:     progpp05a1

# File Name:        Makefile
# File Description: Makefile for the compiling of the project
# File Code:        progpp05a1makefile

# Author Name:	    Tobia Rossi
# Author Code:	    tuoyo

CXX = clang++
CXXFLAGS = -Wall -c
LDFLAGS = -o
BUILDDIR = build
BIN = $(BUILDDIR)/unitTestprogpp05a1.run
OBJS = $(BUILDDIR)/ListElement.o $(BUILDDIR)/main.o
SAVEDEST = ../build/

# Run the compiled project
run: $(BIN)
	$(BIN)

# Compile the whole project
all: $(BIN)

# Compile source code file into object file in the build directory
$(BUILDDIR)/%.o: %.cpp
	$(CXX) -o $@ $(CXXFLAGS) $<

# Link all compiled object files into an executable in the build directory
$(BIN): $(OBJS)
	$(CXX) $(LDFLAGS) $@ $^

# Clean the build directory
clean:
	rm -f $(BIN) $(OBJS)

# Save the executable in the general build directory for storing
save:
	mv -f $(BIN) $(SAVEDEST)

.PHONY: save clean all