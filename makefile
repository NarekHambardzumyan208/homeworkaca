CC = g++
CFLAGS = -std=c++11 -Wall
SRCS = main.cpp add.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = myprogram
$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
%.o: %.cpp
    $(CC) $(CFLAGS) -c $< -o $@
clean:
    rm -f $(OBJS) $(TARGET)

