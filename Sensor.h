#ifndef SENSOR_H
#define SENSOR_H

class Sensor
{
    private:
        int id;
        float temperature;
        bool valid;

    public:
        Sensor (int id, float temperature, bool valid);
        
        void update(float newTemperature);
        float getTemperature() const;
        bool isValid() const;
        int getId() const;

};


#endif