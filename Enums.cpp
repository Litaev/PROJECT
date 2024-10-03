#include <map>
#include <string>

enum FUEL_TYPE { PETROL, DIESEL, PROPANE_BUTANE, METHANE, ELECTRICITY };
std::map<FUEL_TYPE, std::string> FuelTypeToString = {
        {PETROL, "Petrol"},
        {DIESEL, "Diesel"},
        {PROPANE_BUTANE, "Propane-butane"},
        {METHANE, "Methane"},
        {ELECTRICITY, "Electricity"}
};

enum CONSUMPTION_NAME { SERVICE, REFUELING, OTHER_CONSUMPTION };
std::map<CONSUMPTION_NAME, std::string> ConsumptionNameToString = {
        {SERVICE, "Service"},
        {REFUELING, "Refueling"},
        {OTHER_CONSUMPTION, "Other"}
};

enum SERVICE_NAME { MAINTENANCE, REPAIR, TUNING, DETAIL, DIAGNOSTICS, TIRE_FITTING, OTHER_SERVICE };
std::map<SERVICE_NAME, std::string> ServiceNameToString = {
        {MAINTENANCE, "Maintenance"},
        {REPAIR, "Repair"},
        {TUNING, "Tuning"},
        {DETAIL, "Detail"},
        {DIAGNOSTICS, "Diagnostics"},
        {TIRE_FITTING, "Tire fitting"},
        {OTHER_SERVICE, "Other"}
};
