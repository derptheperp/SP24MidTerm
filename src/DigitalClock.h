#ifndef DIGITAL_CLOCK_H
#define DIGITAL_CLOCK_H

class DigitalClock
{
    private:
    int hours;
    int minutes;
    int   seconds;

    public:

    //constructors
    DigitalClock();
    DigitalClock(int, int, int);

    //getters
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

    //setters
    void setHours(int);
    void setMinutes(int);
    void setSeconds(int);

};

#endif