#This is an example of a src dir level make file.
#If this were a module in a larger project then
#a top level make file would call this, and the 
#tests would have thier own makefile.
#
#
#Make file
#
#Useful shortcuts:
# $@ name of the target
# $^ name of all prerequisites with duplicates removed
# $< name of the first prerequisite 
#
CC = g++
CFLAGS = -ggdb #compile with debugging for gdb
LDFLAGS_TARGET =
LDFLAGS_TEST = -lcppunit
COMMON_SOURCES = ProblemFive.cpp
TARGET_SOURCES = main.cpp
TEST_SOURCES = test/ProblemFiveTestMain.cpp test/ProblemFiveTest.cpp
COMMON_OBJECTS = $(COMMON_SOURCES:.cpp=.o)
TARGET_OBJECTS = $(TARGET_SOURCES:.cpp=.o)
TEST_OBJECTS = $(TEST_SOURCES:.cpp=.o)
EXECUTABLE = ProblemFive 
TEST_EXECUTABLE = ProblemFiveTest

#.PHONY means that there should never be a file made named 'all',
#or 'target', or 'tests', therefore these commands will be run
#everytime they are called with make, even if there is a file
#with the same name
.PHONY: all target tests

all: target tests

target: $(EXECUTABLE)

tests: $(TEST_EXECUTABLE)


$(EXECUTABLE): $(COMMON_OBJECTS) $(TARGET_OBJECTS)
	$(CC) $(LDFLAGS_TARGET) $^ -o $@

$(TEST_EXECUTABLE): $(COMMON_OBJECTS) $(TEST_OBJECTS)
	$(CC) $(LDFLAGS_TEST) $^ -o $@

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	\rm *.o test/*.o $(EXECUTABLE) $(TEST_EXECUTABLE)

