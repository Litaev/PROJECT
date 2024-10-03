#ifndef EVENT_H
#define EVENT_H

#include <string>
#include "Enums.h"
#include "date.h"

class Event {
    CONSUMPTION_NAME event_type;
    float moneyValue;
    Date event_date;
    unsigned int car_mileage;
    std::string event_comment;
public:
    float getMoneyValue();
    void setMoneyValue(float newMoneyValue);
    Date getEventDate();
    void setEventDateNow();
    unsigned int getCarMileage();
    void setCarMileage(unsigned int carMileage);
    void setEventType(CONSUMPTION_NAME consumption);
    CONSUMPTION_NAME getEventType();
    std::string getEventDateAsString();
    static std::string consumptionNameToStringFun(CONSUMPTION_NAME name);
    virtual void printEventInfo();
    virtual void setFuelType(FUEL_TYPE carFuelType);
    virtual void setAmountOfLitres(float amountOfLitres);
    virtual void setPricePerLitre(float pricePerLitre);
    virtual void setServiceType(SERVICE_NAME serviceType);
    virtual void setServiceTypeAsString(std::string &serviceName);
};

#endif // EVENT_H
