#ifndef STRNG_H_
#define STRNG_H_

#include <iostream>

using std::istream;
using std::ostream;

class String
{
private:
    char * str;
    int len;
    static int num_strings; // can only be initialized here when it's const, or enum
    static const int CINLIM = 80;
public:
    String(const char * s);     // constructor
    String(const String & st);  // copy constructor
    String();                   // default constructor
    ~String();
    int length() const {return len;}

    String & operator=(const char * s);
    String & operator=(const String & st);
    char & operator[](int i);
    const char & operator[](int i) const;

    friend bool operator<(const String & s1, const String & s2);
    friend bool operator>(const String & s1, const String & s2);
    friend bool operator==(const String & s1, const String & s2);
    friend std::istream & operator>>(std::istream & is, String & st);
    friend std::ostream & operator<<(std::ostream & os, const String & st);

    static int HowMany();
};

#endif