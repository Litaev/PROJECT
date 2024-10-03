#ifndef REFUELING_H
#define REFUELING_H

#include "Event.h"

class Refueling : public Event {
    FUEL_TYPE car_fuel_type;
    float amount_of_litres;
    float price_per_litre;
public:
    FUEL_TYPE getFuelType();
    void setFuelType(FUEL_TYPE carFuelType) override;
    float getAmountOfLitres();
    void setAmountOfLitres(float amountOfLitres) override;
    float getPricePerLitre();
    void setPricePerLitre(float pricePerLitre) override;
    std::string FuelTypeNameToStringFun();
    void printEventInfo() override;
};

#endif // REFUELING_H
