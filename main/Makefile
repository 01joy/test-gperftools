SRC = main.cpp
OBJS = $(SRC:.cpp=.o)
BUILD_DIR = ../build
LIBS = -lcomplex
TARGET = main

all: $(TARGET)

clean:
	-rm -f $(OBJS) $(TARGET)

$(OBJS): $(SRC)
	$(CXX) -c $(SRC)
	 	
$(TARGET): $(OBJS)
	$(CXX) -L$(BUILD_DIR) -o $(TARGET) $(OBJS) $(LIBS)
	cp $(TARGET) $(BUILD_DIR)
