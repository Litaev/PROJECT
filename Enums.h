#ifndef ENUMS_H
#define ENUMS_H

#include <string>
#include <map>

enum class FUEL_TYPE { PETROL, DIESEL, PROPANE_BUTANE, METHANE, ELECTRICITY };
extern const std::map<FUEL_TYPE, std::string> FuelTypeToString;

enum class CONSUMPTION_NAME { SERVICE, REFUELING, OTHER_CONSUMPTION };
extern const std::map<CONSUMPTION_NAME, std::string> ConsumptionNameToString;

enum class SERVICE_NAME { MAINTENANCE, REPAIR, TUNING, DETAIL, DIAGNOSTICS, TIRE_FITTING, OTHER_SERVICE };
extern const std::map<SERVICE_NAME, std::string> ServiceNameToString;

#endif // ENUMS_H
