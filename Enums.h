#ifndef ENUMS_H
#define ENUMS_H

#include <string>
#include <map>

enum FUEL_TYPE { PETROL, DIESEL, PROPANE_BUTANE, METHANE, ELECTRICITY };
extern std::map<FUEL_TYPE, std::string> FuelTypeToString;

enum CONSUMPTION_NAME { SERVICE, REFUELING, OTHER_CONSUMPTION };
extern std::map<CONSUMPTION_NAME, std::string> ConsumptionNameToString;

enum SERVICE_NAME { MAINTENANCE, REPAIR, TUNING, DETAIL, DIAGNOSTICS, TIRE_FITTING, OTHER_SERVICE };
extern std::map<SERVICE_NAME, std::string> ServiceNameToString;

#endif // ENUMS_H
