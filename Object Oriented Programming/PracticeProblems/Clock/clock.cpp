#include <iostream>
using namespace std;

class clockType
{
public:
    void setTime(int, int, int);
    void getTime(int &, int &, int &) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType &) const;

private:
    int hr;
    int min;
    int sec;
};

int main()
{
    clockType myClock;
    clockType yourClock;

    int hours;
    int minutes;
    int seconds;

    // set time for myClock
    myClock.setTime(5,4,30);
    // print time for myClock

    // set time for yourClock
    yourClock.setTime(5, 4, 30);
    // print time for yourClock
    cout << "yourClock Time: " << yourClock.printTime() << endl;

    // check if the clock times are equal
    if(myClock.equalTime(yourClock))
        cout << "Both times are equal" << endl;
    else
        cout << "Both times are not equal" << endl;

    cout << "Enter the hours, minutes, seconds: " >> endl;
    cin >> hours >> minutes >> seconds;


    myClock.setTime(hours, minutes, seconds);
    //print new time
    cout << "The new time is:\n" << myClock.printTime() << endl;

    // increment seconds
    myClock.incrementSeconds;
}

void clockType : setTime(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;
    if (0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;
    if (0 <= seconds && seconds < 60)
        min = seconds;
    else
        min = 0;

}