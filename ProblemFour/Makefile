#ProblemFour Make file
# $@ name of the target
# $^ name of all prerequisites with duplicates removed
# $< name of the first prerequisite 
CC = g++
CFLAGS = -ggdb #compile with debugging for gdb
LDFLAGS = -lcppunit
COMMON_SOURCES = ProblemFour.cpp
TARGET_SOURCES = main.cpp
TEST_SOURCES = test/ProblemFourTestMain.cpp test/ProblemFourTest.cpp
COMMON_OBJECTS = $(COMMON_SOURCES:.cpp=.o)
TARGET_OBJECTS = $(TARGET_SOURCES:.cpp=.o)
TEST_OBJECTS = $(TEST_SOURCES:.cpp=.o)
EXECUTABLE = ProblemFour 
TEST_EXECUTABLE = ProblemFourTest

.PHONY: all target tests

all: target tests

target: $(EXECUTABLE)

tests: $(TEST_EXECUTABLE)


$(EXECUTABLE): $(COMMON_OBJECTS) $(TARGET_OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@

$(TEST_EXECUTABLE): $(COMMON_OBJECTS) $(TEST_OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	\rm *.o test/*.o ProblemFour ProblemFourTest

