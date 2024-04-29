# Compiler settings
CXX = g++
CXXFLAGS = -std=c++17  -I . -I /usr/local/include/libxsd-frontend 

XML_DIR = ../xml
XML = $(XML_DIR)/*.xml


# Compiler flags
CXXFLAGS = -std=c++11 -Wall -Wextra

# XML files directory
XML_DIR = ../xml

# XML Schema Definition (XSD) files
XSD_FILES = $(wildcard $(XML_DIR)/*.xsd)

# Generated C++ files directory
CPP_XSD_DIR = ./

# Generated C++ files from XSD
GEN_SRCS = $(patsubst $(XML_DIR)/%.xsd,$(CPP_XSD_DIR)/%.cpp,$(XSD_FILES))

# Source files
SRCS = xsd.cpp $(GEN_SRCS)

# Object files
OBJS = $(SRCS:.cpp=.o) $(GEN_SRCS:.cpp=.o)

# Target executable
TARGET = main_xsd

# Build rule
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ -lxerces-c

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TARGET)
	./$(TARGET) ../xml/sample.xml

xsd_gen: $(GEN_SRCS)

# Rule to generate C++ files from XSD
$(CPP_XSD_DIR)/%.cpp: $(XML_DIR)/%.xsd
	mkdir -p $(CPP_XSD_DIR)
	# xsd cxx-tree --hxx-suffix .hpp --cxx-suffix .cpp --output-dir  $<
	xsd cxx-tree --hxx-suffix .h --cxx-suffix .cpp --output-dir $(CPP_XSD_DIR) $<

