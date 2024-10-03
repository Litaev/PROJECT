
#include "Event.h"
#include <iostream>
using namespace std;


float Event::getMoneyValue() {
    return moneyValue;
}
void Event::setMoneyValue(float newMoneyValue) {
    moneyValue = newMoneyValue;
}
Date Event::getEventDate() {
    return event_date;
}
void Event::setEventDateNow() {
    event_date.setNowDate();
}
unsigned int Event::getCarMileage() {
    return car_mileage;
}
void Event::setCarMileage(unsigned int carMileage) {
    car_mileage = carMileage;
}
void Event::setEventType(CONSUMPTION_NAME consumption){
    event_type = consumption;
}
CONSUMPTION_NAME Event::getEventType() {
    return event_type;
}
string Event::getEventDateAsString(){
    return event_date.getDateAsString();
}
string Event::consumptionNameToStringFun(CONSUMPTION_NAME name){
    return ConsumptionNameToString[name];
}
void Event::printEventInfo(){
    cout << "Event Type: Other" << endl;
    cout << "Price: " << getMoneyValue() << endl;
    cout << "Date: " << getEventDateAsString() << endl;
    cout << "Car mileage: " << getCarMileage() << endl;
}
void Event::setFuelType(FUEL_TYPE carFuelType){}
void Event::setAmountOfLitres(float amountOfLitres){}
void Event::setPricePerLitre(float pricePerLitre){}
void Event::setServiceType(SERVICE_NAME serviceType){}
void Event::setServiceTypeAsString(std::string &serviceName){}