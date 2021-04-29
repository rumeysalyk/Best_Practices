#include<iostream>
using namespace std;

#define minuteConstant 6    // The minute hand turns 6 degrees in 1 minute.
#define hourConstant 0.5  //   The hour hand turns 0.5 degrees in 1 minute.
#define hourAngleConstant 30 // The hour hand turns 30 degrees in 1 hour

int main()
{
    
    int minuteHand,hourHand;
    float minuteAngle,hourAngle; //think the reference point as 0
    float difference;

    cout<<"*** This program is to find the angle between hour and minute hand for a digital clock***"<<endl;


    while(1)
    {
        cout<<"Enter the hour : ";
        cin>>hourHand;

        cout<<"Enter the minute : ";
        cin>>minuteHand;

        if(hourHand<24 && minuteHand<60)
            break;
        else
            cout<<"Please enter a valid time"<<endl;
    }

    if(hourHand >= 12)
    {
        hourHand = hourHand - 12;
    }

    minuteAngle = minuteHand*minuteConstant;
    hourAngle = hourAngleConstant*hourHand + hourConstant*minuteHand;

    if(minuteAngle>hourAngle)
        difference = minuteAngle - hourAngle;
    else
        difference = hourAngle-minuteAngle;
    

    cout<<"The angle between the minute and hour hand is "<<difference;
    
    
    return 0;
}
