#ifndef MYTIME2_H_
#define MYTIME2_H_

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h, int m);
    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(const double n) const;
    friend Time operator*(const double n, const Time & t)
        {return t * n;}
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif