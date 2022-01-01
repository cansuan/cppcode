#include <iostream>
#include<string>
#include <iomanip>

using namespace std;
const float OUT_WORKING_HOURS = 0.25;
const float IN_WORKING_HOURS = 0.40;
const float WEEKEND_HOURS = 0.15;

float calculate_call_cost(string  c_time, string c_day,int c_duration);
int main()
{
    string call_time,call_day;
    int call_duration_min;
    float call_cost;
    cout<<"Enter the day the call started at:";
    cin>>call_day;

    cout<<"Enter the time the call started at (hhmm):";
    cin>>call_time;

    cout<<"Enter the duration of the call (in minutes):";
    cin>>call_duration_min;
    call_cost = calculate_call_cost(call_time,call_day,call_duration_min);
    cout<<"This call will cost $"<<std::setprecision(2)<<fixed<<call_cost<<endl;
    return 0;
}

float calculate_call_cost(string  c_time, string c_day,int c_duration)
{
    int c_time_int;
    float c_cost;
    c_time_int = stoi(c_time.substr(0,2));
    if (c_day == "Sat" || c_day == "Sun" )
    {
        c_cost = c_duration * WEEKEND_HOURS;
    }
    else
    {
        if ( c_time_int > 18 || c_time_int < 8 )
        {
            c_cost = c_duration * OUT_WORKING_HOURS;
        }
        else
        {
            c_cost = c_duration * IN_WORKING_HOURS;
        }
    }
    return c_cost;
}