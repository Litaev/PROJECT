#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include "Car.h"

class User {
    std::vector<Car*> car_list;
    float user_money_spent = 0;
    float user_money_spent_refueling = 0;
    float user_money_spent_service = 0;
public:
    void addCar();
    void deleteCar();
    void printCarsInfo();
    void updateUserMoneySpent();
    float getUserMoneySpent();
    float getUserMoneySpentService();
    float getUserMoneySpentRefueling();
    std::vector<Car*> getCarList();
};

#endif // USER_H
