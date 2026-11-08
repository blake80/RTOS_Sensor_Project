#include <iostream>
#include "TaskManager.h"

TaskManager::TaskManager(Sensor *sensor, SystemState *state)
{
    this->sensor = sensor;
    this->state = state;
}

void TaskManager::runSensorTask(float newTemp)
{
    sensor->update(newTemp);
}

void TaskManager::runMonitorTask()
{
    if (sensor->getTemperature() > 85.0)
    {
        state->overTemp = true;
    }
    else
    {
        state->overTemp = false;
    }
}

void TaskManager::runStatusTask() const
{
    std::cout << "Temperature: " << sensor->getTemperature() << '\n';
    std::cout << "OverTemp: " << state->overTemp << '\n';
    std::cout << "Cycle: " << state->cycleCount << '\n';
}