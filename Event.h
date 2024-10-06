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
    float getMoneyValue() const;
    void setMoneyValue(float newMoneyValue);
    Date getEventDate() const;
    void setEventDateNow();
    unsigned int getCarMileage() const;
    void setCarMileage(unsigned int carMileage);
    void setEventType(CONSUMPTION_NAME consumption);
    CONSUMPTION_NAME getEventType() const;
    std::string getEventDateAsString() const;
    static std::string consumptionNameToStringFun(CONSUMPTION_NAME name);
    virtual void printEventInfo(){/*VIRTUAL*/};
    virtual void setFuelType(FUEL_TYPE carFuelType){/*VIRTUAL*/};
    virtual void setAmountOfLitres(float amountOfLitres){/*VIRTUAL*/};
    virtual void setPricePerLitre(float pricePerLitre){/*VIRTUAL*/};
    virtual void setServiceType(SERVICE_NAME serviceType){/*VIRTUAL*/};
    virtual void setServiceTypeAsString(std::string &serviceName){/*VIRTUAL*/};
};

#endif // EVENT_H
