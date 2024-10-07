
#include "Car.h"
#include "carService.h"
#include "Refueling.h"
#include <iostream>
using namespace std;


string Car::getCarName() const{
    return car_name;
}
void Car::setCarName(const string new_car_name) {
    this->car_name = new_car_name;
}
void Car::setCarFuelType(FUEL_TYPE new_fuel_type){
    car_fuel_type = new_fuel_type;
}
FUEL_TYPE Car::getCarFuelType() const{
    return car_fuel_type;
}
string Car::getCarGovNumber() const{
    return car_gov_number;
}
void Car::setCarGovNumber(const string new_car_gov_number) {
    car_gov_number = new_car_gov_number;
}
unsigned int Car::getCarMileage() const{
    return car_mileage;
}
void Car::setCarMileage(unsigned int new_car_mileage) {
    car_mileage = new_car_mileage;
}
float Car::getCarMoneySpent() const{
    return car_money_spent;
}
void Car::setCarMoneySpent(float carMoneySpent) {
    car_money_spent = carMoneySpent;
}
std::string Car::getCarAddDateAsString() const{
    return car_add_date.getDateAsString();
}
void Car::setCar(const string new_car_name, const string new_car_gov_number, unsigned new_car_mileage, FUEL_TYPE new_car_fuel_type){
    setCarName(new_car_name);
    setCarGovNumber(new_car_gov_number);
    setCarMileage(new_car_mileage);
    car_add_date.setNowDate();
    setCarFuelType(new_car_fuel_type);
}
void Car::addEvent(){
    system("cls");
    unsigned int chosen_event;
    float money_spent;
    cout << "Choose event type:" << endl;
    cout << "0 - Service;" << endl;
    cout << "1 - Car Refuel;" << endl;
    cout << "2 - Other." << endl;
    cout << "Your choice: ";
    cin >> chosen_event;
    std::shared_ptr<Event> new_event;
    if (chosen_event == 0){
        new_event = std::make_shared<CarService>();
        unsigned int chosen_service;
        string information;
        cout << "Choose service: " << endl;
        cout << "0 - Car maintenance;" << endl;
        cout << "1 - Car repair;" << endl;
        cout << "2 - Car Tuning;" << endl;
        cout << "3 - Detail replace;" << endl;
        cout << "4 - Car diagnostics;" << endl;
        cout << "5 - Car tire fitting;" << endl;
        cout << "6 - Other." << endl;
        cout << "Your choice: ";
        cin >> chosen_service;
        new_event->setServiceType(static_cast<SERVICE_NAME>(chosen_service));
        cout << "\nEnter Information: ";
        cin >> information;
        new_event->setServiceTypeAsString(information);
    }
    else if (chosen_event == 1){
        new_event = {std::make_shared<Refueling>()};
        unsigned int chosen_fuel_type;
        float chosen_price_per_litre;
        float chosen_amount_of_litres;
        cout << "Choose fuel type:" << endl;
        cout << "0 - Petrol;" << endl;
        cout << "1 - Diesel;" << endl;
        cout << "2 - Propane-butane;" << endl;
        cout << "3 - Methane;" << endl;
        cout << "4 - Electricity." << endl;
        cout << "Your choice: ";
        cin >> chosen_fuel_type;
        if(getCarFuelType() != static_cast<FUEL_TYPE>(chosen_fuel_type)){
            unsigned int permission;
            cout << "Fuel type does not match the engine, set engine fuel type (1 - Yes, 0 - No)" << endl;
            cout << "Your choice: ";
            cin >> permission;
            if (permission == 1) new_event->setFuelType(car_fuel_type);
            else new_event->setFuelType(static_cast<FUEL_TYPE>(chosen_fuel_type));
        }
        else new_event->setFuelType(static_cast<FUEL_TYPE>(chosen_fuel_type));

        if (static_cast<FUEL_TYPE>(chosen_fuel_type) == FUEL_TYPE::ELECTRICITY){
            cout << "Enter price per kW and amount Kw (price amount): ";
        }
        else{
            cout << "Enter price per litre and amount litre (price amount): ";
        }
        cin >> chosen_price_per_litre;
        cin >> chosen_amount_of_litres;
        new_event->setAmountOfLitres(chosen_amount_of_litres);
        new_event->setPricePerLitre(chosen_price_per_litre);
    }
    else{
        new_event = {std::make_shared<Event>()};
    }
    new_event->setEventType(static_cast<CONSUMPTION_NAME>(chosen_event));
    cout << "\n Enter money spent: ";
    cin >> money_spent;
    car_money_spent += money_spent;
    new_event->setMoneyValue(money_spent);
    new_event->setEventDateNow();
    cout << "\n Enter car mileage: ";
    cin >> car_mileage;
    new_event->setCarMileage(car_mileage);
    event_list.push_back(new_event);
}
vector<std::shared_ptr<Event>> Car::getEventList() const{
    return event_list;
}
void Car::deleteEventList(){
    event_list.clear();
    updateCarMoneySpent();
};
void Car::deleteEventListElement(){
    system("cls");
    unsigned int chosen_id;
    cout << "Choose id of event to delete:" << endl;
    for (unsigned int element_id = 0; element_id < event_list.size(); element_id++){
        cout << "ID: " << element_id << " Event name: " << event_list[element_id]->
        consumptionNameToStringFun(event_list[element_id]->getEventType()) << " Event date: "
        << event_list[element_id]->getEventDateAsString() << endl;
    }
    cout << "Your choice: ";
    cin >> chosen_id;
    event_list.erase(event_list.begin()+chosen_id);
    updateCarMoneySpent();
}
std::string Car::FuelTypeToStringFun(FUEL_TYPE name){
    const auto& it = FuelTypeToString.find(name);
    if (it != FuelTypeToString.end()) {
        return it->second;
    }
    return "Unknown";
}
void Car::printEventList() const{
    for (unsigned x = 1; x <= event_list.size(); x++){
        cout << "----Event N" << x << "----" << endl;
        event_list[x-1]->printEventInfo();
        cout << "----Event N" << x << "----" << endl;
    }
}
void Car::updateCarMoneySpent(){
    car_money_spent = 0;
    for (const auto & event : event_list){
        car_money_spent += event->getMoneyValue();
    }
}
