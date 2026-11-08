#include "Sensor.h"
#include <iostream>


Sensor::Sensor (int id, float temperature, bool valid)
{
    this->id = id;
    this->temperature = temperature;
    this->valid = valid;
}

void Sensor::update(float newTemperature)
{
    temperature = newTemperature;
}

float Sensor::getTemperature() const
{
    return temperature;
}
bool Sensor::isValid() const
{
    return valid;
}

int Sensor::getId() const
{
    return id;
}