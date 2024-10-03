
#include "User.h"
#include "Event.h"
using namespace std;

void User::addCar(){
    system("cls");
    string car_name, car_gov_number;
    unsigned int car_mileage, car_fuel_type;
    Car *newCargit ;
    cout << "Enter car name: ";
    cin >> car_name;
    cout << "Enter car government number: ";
    cin >> car_gov_number;
    cout << "Enter car mileage: ";
    cin >> car_mileage;
    cout << "Choose fuel type:" << endl;
    cout << "0 - Petrol;" << endl;
    cout << "1 - Diesel;" << endl;
    cout << "2 - Propane-butane;" << endl;
    cout << "3 - Methane;" << endl;
    cout << "4 - Electricity." << endl;
    cout << "Your choice: ";
    cin >> car_fuel_type;
    newCar->setCar(car_name, car_gov_number, car_mileage, static_cast<FUEL_TYPE>(car_fuel_type));

    car_list.push_back(newCar);
}

void User::deleteCar() {
    system("cls");
    unsigned int chosen_id;
    cout << "Choose id of car to delete:" << endl;
    for (unsigned int element_id = 0; element_id < car_list.size(); element_id++) {
        cout << "ID: " << element_id << " Car name: " << car_list[element_id]->getCarName() << endl;
    }
    cout << "Your choice: ";
    cin >> chosen_id;
    car_list[chosen_id]->deleteEventList();
    car_list.erase(car_list.begin() + chosen_id);
}
void User::printCarsInfo(){
    cout << "Your amount of cars " << car_list.size() << ":" << endl;
    for (unsigned x = 0; x < car_list.size(); x++){
        cout << "--- Car " << x+1 << " ---" << endl;
        cout << "Car name: " << car_list[x]->getCarName() << endl;
        cout << "Car government number: " << car_list[x]->getCarGovNumber() << endl;
        cout << "Car mileage: " << car_list[x]->getCarMileage() << endl;
        cout << "Car money spent: " << car_list[x]->getCarMoneySpent() << endl;
        cout << "Car add date: " << car_list[x]->getCarAddDateAsString() << endl;
        cout << "Car fuel type: " << car_list[x]->FuelTypeToStringFun(car_list[x]->getCarFuelType()) << endl;
        cout << "Car events amount: " << car_list[x]->getEventList().size() << endl;
        cout << "--- Car " << x+1 << " ---" << endl;
    }
}
void User::updateUserMoneySpent(){
    user_money_spent = 0;
    user_money_spent_refueling = 0;
    user_money_spent_service = 0;
    for (auto & car : car_list){
        user_money_spent += car->getCarMoneySpent();
        for (Event* & event : car->getEventList()){
            if (event->getEventType() == SERVICE){
                user_money_spent_service += event->getMoneyValue();
            }
            else if (event->getEventType() == REFUELING){
                user_money_spent_refueling += event->getMoneyValue();
            }
        }
    }
}

float User::getUserMoneySpent(){
    return user_money_spent;
}
float User::getUserMoneySpentService(){
    return user_money_spent_service;
}
float User::getUserMoneySpentRefueling(){
    return user_money_spent_refueling;
}

vector<Car*> User::getCarList(){
    return car_list;
}
