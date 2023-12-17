CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

SRCS = spm.cc package_manager.cc

OBJS = $(SRCS:.cc=.o)

TARGET = spm # Scpel Packae manager

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

