#include <iostream>
using namespace std;

const double QUARTER = 0.25;
const double DIME = 0.10;
const double NICKEL = 0.05;
const double PENNY = 0.01;

int main()
{
    int quarters,dimes,nickels,pennies;
    double monetary_value,fractional_value;
    //Get the number of coins from the user
    cout<<"Please enter the number of coins:"<<endl;
    cout<<endl;
    cout<<"# of quarters: ";//0.25 dollar
    cin>>quarters;
    cout<<endl;
    cout<<"# of dimes: ";//0.10 dollar
    cin>>dimes;
    cout<<endl;
    cout<<"# of nickels: ";//0.05 dollar
    cin>>nickels;
    cout<<endl;
    cout<<"# of pennies: ";//0.01 dollar
    cin>>pennies;
    cout<<endl;

    //calculate monetary value of the coins in the format of dollars and remaining cents
    monetary_value = (quarters * QUARTER) + (dimes * DIME) + (nickels * NICKEL) + (pennies * PENNY);
    ////Calculate the fractional part
    fractional_value = abs(monetary_value - (int)monetary_value);
    //convert fractional_value to a string
    string cent_text = to_string(fractional_value);

    //Get only the part of the string after decimal point
    std::size_t found_dot = cent_text.find('.');
    if (found_dot!=std::string::npos)
        cent_text = cent_text.substr(found_dot+1);

    //Remove trailing zeros at the end of the new string
    std::size_t found_zero = cent_text.find_last_not_of('0');
    if (found_zero!=std::string::npos)
    {
        cent_text.erase(found_zero+2);
    }
    else
    {
        cent_text.clear();
    }

    //Remove zeros after precision 2
    std::size_t found_zero_second = cent_text.find_last_not_of('0');
    if (found_zero_second!=std::string::npos)
    {
        if(cent_text.length() != 2)
            cent_text.erase(found_zero_second+1);
    }
    //Print the coins in the format of dollars and cents
    cout<<"The total is "<<(int)monetary_value<<" dollars and ";
    cout<<cent_text<<" cents"<<endl;

    return 0;
}
