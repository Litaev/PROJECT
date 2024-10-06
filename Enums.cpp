#include <map>
#include <string>
#include "Enums.h"



const std::map<FUEL_TYPE, std::string> FuelTypeToString = {
        {FUEL_TYPE::PETROL, "Petrol"},
        {FUEL_TYPE::DIESEL, "Diesel"},
        {FUEL_TYPE::PROPANE_BUTANE, "Propane-butane"},
        {FUEL_TYPE::METHANE, "Methane"},
        {FUEL_TYPE::ELECTRICITY, "Electricity"}
};



const std::map<CONSUMPTION_NAME, std::string> ConsumptionNameToString = {
        {CONSUMPTION_NAME::SERVICE, "Service"},
        {CONSUMPTION_NAME::REFUELING, "Refueling"},
        {CONSUMPTION_NAME::OTHER_CONSUMPTION, "Other"}
};


const std::map<SERVICE_NAME, std::string> ServiceNameToString = {
        {SERVICE_NAME::MAINTENANCE, "Maintenance"},
        {SERVICE_NAME::REPAIR, "Repair"},
        {SERVICE_NAME::TUNING, "Tuning"},
        {SERVICE_NAME::DETAIL, "Detail"},
        {SERVICE_NAME::DIAGNOSTICS, "Diagnostics"},
        {SERVICE_NAME::TIRE_FITTING, "Tire fitting"},
        {SERVICE_NAME::OTHER_SERVICE, "Other"}
};
