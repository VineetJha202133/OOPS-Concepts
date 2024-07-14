#include <iostream>

using namespace std;

class Time
{
private:
    int minutes = 0;
    int hours = 0;
    int days = 0;

public:
    Time(int mint = 0, int hrs = 0, int dys = 0)
    {
        setTime(mint, hrs, dys);
    }
    int getMinutes() 
    { 
        return minutes;
    }
    int getHours() 
    { 
        return hours;
    }
    int getDays() 
    { 
        return days; 
        
    }
    
    void setTime(int, int, int);
    void display() 
    { 
        cout << days << " days: " <<hours << " hours: " << minutes << " minutes\n"; 
        
    }
    friend Time add(Time &tm1, Time &tm2); // declaring add as a friend function
};

// function to add two time objects
Time add(Time &tm1, Time &tm2)
{
    int newMinutes = tm1.minutes + tm2.minutes;
    int newHours = newMinutes / 60;
    newMinutes = newMinutes % 60;
    newHours = newHours + tm1.hours + tm2.hours;
    int newDays = newHours / 24;
    newHours = newHours % 24;
    newDays = newDays + tm1.days + tm2.days;

    return Time(newMinutes, newHours, newDays);
}

void Time::setTime(int mint = 0, int hrs = 0, int dys = 0)
{
    if (mint < 0 || mint >= 60)
        cout << "Enter valid minutes\n";
    else if (hrs < 0 || hrs >= 24)
        cout << "Enter valid hours\n";
    else
    {
        minutes = mint;
        hours = hrs;
        days = dys;
    }
}

int main()
{
    Time t1;
    t1.setTime(28, 13, 2);
    Time t2 = {41, 12};
    Time t3 = add(t1, t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}
