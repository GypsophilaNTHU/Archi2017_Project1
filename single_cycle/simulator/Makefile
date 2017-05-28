CC := gcc -std=c99
program_NAME := single_cycle
program_C_SRCS := $(wildcard *.c)
program_CXX_SRCS := $(wildcard *.cpp)
program_C_OBJS := ${program_C_SRCS:.c=.o}
program_CXX_OBJS := ${program_CXX_SRCS:.cpp=.o}
program_OBJS := $(program_C_OBJS) $(program_CXX_OBJS)
#program_INCLUDE_DIRS :=
#program_LIBRARY_DIRS :=
#program_LIBRARIES :=

#CPPFLAGS += $(foreach includedir,$(program_INCLUDE_DIRS),-I$(includedir))
#LDFLAGS += $(foreach librarydir,$(program_LIBRARY_DIRS),-L$(librarydir))
#LDFLAGS += $(foreach library,$(program_LIBRARIES),-l$(library))

.PHONY: all clean_all clean distclean

all: clean_all $(program_NAME)

$(program_NAME): $(program_OBJS)
	$(CC) -g $(program_OBJS) -o $(program_NAME)
$(program_OBJS):
	$(CC) -Wall -c $(program_C_SRCS)

clean_all: clean
	@- $(RM) $(program_NAME)
clean:
	@- $(RM) $(program_OBJS)

distclean: clean_all
