#include <Arduino.h>

class SensorData 
{
    public:
        float temperature,
            pressure,
            humidity,
            altitude,
            longitude,
            latitude;
        String sensorName;
        SensorData(float temperature, float pressure, float humidity, float altitude);  
        String toJson();
};