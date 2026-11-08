CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

TARGET = rtos_sensor_app

OBJS = main.o Sensor.o TaskManager.o

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

main.o: main.cpp Sensor.h SystemState.h TaskManager.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Sensor.o: Sensor.cpp Sensor.h
	$(CXX) $(CXXFLAGS) -c Sensor.cpp

TaskManager.o: TaskManager.cpp TaskManager.h Sensor.h SystemState.h
	$(CXX) $(CXXFLAGS) -c TaskManager.cpp

clean:
	rm -f $(OBJS) $(TARGET)