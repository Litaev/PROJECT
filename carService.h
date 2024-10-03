#ifndef CARSERVICE_H
#define CARSERVICE_H

#include "Event.h"

class CarService : public Event {
    SERVICE_NAME service_type;
    std::string service_type_string;
public:
    SERVICE_NAME getServiceType();
    void setServiceType(SERVICE_NAME serviceType) override;
    std::string getServiceTypeAsString();
    void setServiceTypeAsString(std::string &serviceName) override;
    std::string ServiceNameToStringFun();
    void printEventInfo() override;
};

#endif // CARSERVICE_H
