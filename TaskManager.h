#ifndef TASKMANAGER_H
#define TASKMANAGER_H
#include "Sensor.h"
#include "SystemState.h"


class TaskManager
{
    private:
        Sensor *sensor;
        SystemState *state;
    
    public:
        TaskManager(Sensor *sensor, SystemState *state);
        
        void runSensorTask(float newTemp);
        void runMonitorTask();
        void runStatusTask() const;
};

#endif