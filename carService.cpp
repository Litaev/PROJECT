
#include "carService.h"
#include <iostream>
using namespace std;

SERVICE_NAME CarService::getServiceType() {
    return service_type;
}
void CarService::setServiceType(SERVICE_NAME serviceType) {
    service_type = serviceType;
}
std::string CarService::getServiceTypeAsString() {
    return service_type_string;
}
void CarService::setServiceTypeAsString(std::string &serviceName) {
    service_type_string = serviceName;
}
std::string CarService::ServiceNameToStringFun(){
    const auto& it = ServiceNameToString.find(service_type);
    if (it != ServiceNameToString.end()) {
        return it->second;
    }
    return "Unknown";
}
void CarService::printEventInfo(){
    cout << "Event Type: Service" << endl;
    cout << "Service type: " << getServiceTypeAsString() << endl;
    cout << "Service comment: " << getServiceTypeAsString() << endl;
    cout << "Price: " << getMoneyValue() << endl;
    cout << "Date: " << getEventDateAsString() << endl;
    cout << "Car mileage: " << getCarMileage() << endl;
}
