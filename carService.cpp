
#include "carService.h"
#include <iostream>
using namespace std;

SERVICE_NAME CarService::getServiceType() const{
    return service_type;
}
void CarService::setServiceType(SERVICE_NAME serviceType) {
    service_type = serviceType;
}
std::string CarService::getServiceTypeAsString() const{
    return service_type_string;
}
void CarService::setServiceTypeAsString(std::string &serviceName) {
    service_type_string = serviceName;
}
std::string CarService::ServiceNameToStringFun() const{
    return ServiceNameToString.find(service_type)->second;
}
void CarService::printEventInfo(){
    cout << "Event Type: Service" << endl;
    cout << "Service type: " << getServiceTypeAsString() << endl;
    cout << "Service comment: " << getServiceTypeAsString() << endl;
    cout << "Price: " << getMoneyValue() << endl;
    cout << "Date: " << getEventDateAsString() << endl;
    cout << "Car mileage: " << getCarMileage() << endl;
}
