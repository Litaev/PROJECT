
#include "Event.h"
#include <iostream>
using namespace std;


float Event::getMoneyValue() const{
    return moneyValue;
}
void Event::setMoneyValue(float newMoneyValue) {
    moneyValue = newMoneyValue;
}
Date Event::getEventDate() const{
    return event_date;
}
void Event::setEventDateNow() {
    event_date.setNowDate();
}
unsigned int Event::getCarMileage() const{
    return car_mileage;
}
void Event::setCarMileage(unsigned int carMileage) {
    car_mileage = carMileage;
}
void Event::setEventType(CONSUMPTION_NAME consumption){
    event_type = consumption;
}
CONSUMPTION_NAME Event::getEventType() const {
    return event_type;
}
string Event::getEventDateAsString() const{
    return event_date.getDateAsString();
}
string Event::consumptionNameToStringFun(CONSUMPTION_NAME name){
    const auto& it = ConsumptionNameToString.find(name);
    if (it != ConsumptionNameToString.end()) {
        return it->second;
    }
    return "Unknown";
}
