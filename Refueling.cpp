#include <iostream>
#include "Refueling.h"
using namespace std;

FUEL_TYPE Refueling::getFuelType() const{
    return car_fuel_type;
}
void Refueling::setFuelType(FUEL_TYPE carFuelType) {
    car_fuel_type = carFuelType;
}
float Refueling::getAmountOfLitres() const{
    return amount_of_litres;
}
void Refueling::setAmountOfLitres(float amountOfLitres) {
    amount_of_litres = amountOfLitres;
}
float Refueling::getPricePerLitre() const{
    return price_per_litre;
}
void Refueling::setPricePerLitre(float pricePerLitre) {
    price_per_litre = pricePerLitre;
}
std::string Refueling::FuelTypeNameToStringFun() const{
    return FuelTypeToString.find(car_fuel_type)->second;
}
void Refueling::printEventInfo(){
    cout << "Event Type: Refueling" << endl;
    cout << "Fuel type: " << FuelTypeNameToStringFun() << endl;
    cout << "Amount of litres: " << getAmountOfLitres() << endl;
    cout << "Price per litre: " << getPricePerLitre() << endl;
    cout << "Price: " << getMoneyValue() << endl;
    cout << "Date: " << getEventDateAsString() << endl;
    cout << "Car mileage: " << getCarMileage() << endl;
}