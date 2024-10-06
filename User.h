#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include "Car.h"

class User {
    std::vector<std::shared_ptr<Car>> car_list;
    float user_money_spent = 0;
    float user_money_spent_refueling = 0;
    float user_money_spent_service = 0;
public:
    void addCar();
    void deleteCar();
    void printCarsInfo() const;
    void updateUserMoneySpent();
    float getUserMoneySpent() const;
    float getUserMoneySpentService() const ;
    float getUserMoneySpentRefueling() const;
    std::vector<std::shared_ptr<Car>> getCarList() const;
};

#endif // USER_H
