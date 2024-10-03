#ifndef CAR_H
#define CAR_H

#include <string>
#include <vector>
#include "Enums.h"
#include "Event.h"
#include "date.h"

class Car {
    std::string car_name;
    std::string car_gov_number;
    unsigned car_mileage;
    float car_money_spent = 0;
    Date car_add_date;
    FUEL_TYPE car_fuel_type;
    std::vector<Event*> event_list;
public:
    void setCar(std::string new_car_name, std::string new_car_gov_number, unsigned new_car_mileage, FUEL_TYPE new_car_fuel_type);
    std::string getCarName();
    void setCarName(std::string new_car_name);
    void setCarFuelType(FUEL_TYPE new_fuel_type);
    FUEL_TYPE getCarFuelType();
    std::string getCarGovNumber();
    void setCarGovNumber(std::string new_car_gov_number);
    unsigned int getCarMileage();
    void setCarMileage(unsigned int new_car_mileage);
    float getCarMoneySpent();
    void setCarMoneySpent(float carMoneySpent);
    std::string getCarAddDateAsString();
    void addEvent();
    std::vector<Event*> getEventList();
    void deleteEventList();
    void deleteEventListElement();
    static std::string FuelTypeToStringFun(FUEL_TYPE name);
    void printEventList();
};

#endif // CAR_H
