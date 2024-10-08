#ifndef DATE_H
#define DATE_H

#include <string>
#include <memory>
#include <chrono>
class Date {
    unsigned int year;
    unsigned int month;
    unsigned int day;
public:
    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;
    void setYear(unsigned int new_year);
    void setMonth(unsigned int new_month);
    void setDay(unsigned int new_day);
    void setNowDate();
    std::string getDateAsString() const;
};

#endif // DATE_H
