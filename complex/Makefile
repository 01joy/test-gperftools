SRC = complex.cpp
OBJS = $(SRC:.cpp=.o)
BUILD_DIR = ../build
TARGET = libcomplex.so

all: $(TARGET)

clean:
	-rm -f $(OBJS) $(TARGET)
	
$(OBJS): $(SRC)
	$(CXX) -fPIC -c $(SRC)
	 	
$(TARGET): $(OBJS)
	$(CXX) -shared -o $(TARGET) $(OBJS)
	cp $(TARGET) $(BUILD_DIR)
