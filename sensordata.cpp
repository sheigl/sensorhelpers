#include "sensordata.h"

/*
Temperature is calculated in degrees C, you can convert this to F by using the classic F = C * 9/5 + 32 equation.

Pressure is returned in the SI units of Pascals. 100 Pascals = 1 hPa = 1 millibar. 
Often times barometric pressure is reported in millibar or inches-mercury. 
For future reference 1 pascal =0.000295333727 inches of mercury, or 1 inch Hg = 3386.39 Pascal. 
So if you take the pascal value of say 100734 and divide by 3386.39 you'll get 29.72 inches-Hg.
*/

SensorData::SensorData(float temperature, float pressure, float humidity, float altitude) {
    SensorData::temperature = temperature;/*(temperature * 9) / 5 + 32*/ // to F
    SensorData::pressure = pressure;/*   / 100.0F*/
    SensorData::humidity = humidity;
    SensorData::altitude = altitude;
}

String SensorData::toJson() {
    String returnValue = "{";
    return returnValue + "\"temperature\":" + temperature + ","
    + "\"pressure\":" + pressure + ","
    + "\"humidity\":" + humidity + ","
    + "\"altitude\":" + altitude + ","
    + "\"longitude\":" + longitude + ","
    + "\"latitude\":" + latitude + ","
    + "\"sensorName\":\"" + sensorName + "\""
    + "}";
};