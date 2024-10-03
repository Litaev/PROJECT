
#include "date.h"
#include <time.h>
unsigned int Date::getYear(){
    return year;
}
unsigned int Date::getMonth(){
    return month;
}
unsigned int Date::getDay(){
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
    time_t t = time(0);
    tm* now = localtime(&t);
    setYear(now->tm_year+1900);
    setMonth(now->tm_mon+1);
    setDay(now->tm_mday);
}
std::string Date::getDateAsString(){
    return std::to_string(day) + "." + std::to_string(month) + "." + std::to_string(year);
}