#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
    unsigned int year;
    unsigned int month;
    unsigned int day;
public:
    unsigned int getYear();
    unsigned int getMonth();
    unsigned int getDay();
    void setYear(unsigned int new_year);
    void setMonth(unsigned int new_month);
    void setDay(unsigned int new_day);
    void setNowDate();
    std::string getDateAsString();
};

#endif // DATE_H
