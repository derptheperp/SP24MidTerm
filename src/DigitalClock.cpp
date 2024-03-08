#include "DigitalClock.h"


    DigitalClock::DigitalClock()
    {
        setHours(0);
        setMinutes(0);
        setSeconds(0);
    }

    DigitalClock::DigitalClock(int aHours, int aMinutes, int aSeconds)
    {
        setHours(aHours);
        setMinutes(aMinutes);
        setSeconds(aSeconds);
    }

    //getters
    int DigitalClock::getHours() const
    {
        return hours;
    }

    int DigitalClock::getMinutes() const
    {
        return minutes;
    }

    int DigitalClock::getSeconds() const
    {
        return seconds;
    }

    //setters
    void DigitalClock::setHours(int aHours)
    {
        hours = aHours;
    }

    void DigitalClock::setMinutes(int aMinutes)
    {
        minutes = aMinutes;
    }

    void DigitalClock::setSeconds(int aSeconds)
    {
        seconds = aSeconds;

    }