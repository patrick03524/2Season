#ifndef BIRTHDAY_H
#define BIRTHDAY_H


class Birthday
{
    public:
        Birthday();
        Birthday(int year1,int month1,int day1);
        ~Birthday();
        int getYear();
        int getMonth();
        int getDay();
    private:
        int year,month,day;
};

#endif // BIRTHDAY_H
