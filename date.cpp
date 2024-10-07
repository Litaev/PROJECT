
#include "date.h"

unsigned int Date::getYear() const{
    return year;
}
unsigned int Date::getMonth() const{
    return month;
}
unsigned int Date::getDay() const{
    return day;
}
void Date::setYear(unsigned int new_year){
    year = new_year;
}
void Date::setMonth(unsigned int new_month){
    month = new_month;
}
void Date::setDay(unsigned int new_day){
    day = new_day;
}
void Date::setNowDate(){
    auto now = std::chrono::system_clock::now();
    std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
    std::tm* now_tm = std::localtime(&now_time_t);
    setYear(now_tm->tm_year+1900);
    setMonth(now_tm->tm_mon+1);
    setDay(now_tm->tm_mday);

}
std::string Date::getDateAsString() const{
    return std::to_string(day) + "." + std::to_string(month) + "." + std::to_string(year);
}