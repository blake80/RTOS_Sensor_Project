#include <iostream>
#include <vector>
#include "Sensor.h"
#include "TaskManager.h"
#include "SystemState.h"

int main()
{
    std::vector<Sensor> sensors = 
    {
        Sensor(101, 80.0, true),
        Sensor(102, 90.0, false),
        Sensor(103, 75.0, true)
    };

    for(Sensor &sensors : sensors)
    {
        std::cout << "Sensor: " << sensors.getId() << " ";
        std::cout << "Temp: " << sensors.getTemperature() << " ";
        std::cout << "Valid: " << sensors.isValid() << '\n';
    }
    
    return 0;
}