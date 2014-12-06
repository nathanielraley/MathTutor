#FILES

EXEC := bin/project

SRC := $(wildcard src/*.cpp)
OBJ := $(patsubst src/%.cpp, src/%.o, $(SRC))

#OPTIONS

CC := g++
#CFLAGS :=
#LDFLAGS := -L/lib
#LDLIBS := -lm

#RULES

$(EXEC): $(OBJ)
	$(CC) $(LDFLAGS) $(LDLIBS) -o $@ $^

%.o:src/%.cpp
	$(CC) $(CFLAGS) -c $<

#PHONY TARGETS

.PHONY: clobber clean neat echo

clobber: clean
	$(RM) $(EXEC)
clean: neat
	$(RM) $(OBJ)
neat:
	$(RM) *~ .*~
echo:
	@echo $(OBJ)

run:
	./$(EXEC)




