#include <iostream>
using namespace std;

const double QUARTER_DOLLAR = 0.25;
const double DIME_DOLLAR = 0.10;
const double NICKEL_DOLLAR = 0.05;
const double PENNY_DOLLAR = 0.01;

const double QUARTER_CENT =25;
const double DIME_CENT = 10;
const double NICKEL_CENT = 5;
const double PENNY_CENT = 1;


int main()
{
    double dollars,cents,remaining_dollar,remaining_cent;
    int quarter_dollar = 0, quarter_cent= 0;
    int dime_dollar = 0, dime_cent = 0;
    int nickel_dollar = 0,nickel_cent = 0 ;
    int penny_dollar = 0,penny_cent = 0;
    //Get the amount of money from the user to convert dimes,quarter,nickel,penny 
    cout<<"Please enter the amount of money to convert:"<<endl;
    cout<<endl;
    cout<<"# of dollars: ";
    cin>>dollars;
    cout<<endl;
    cout<<"# of cents: ";
    cin>>cents;
    cout<<endl;

    //Calculate number of quarters in dollars
    if (dollars > 0)
    { 
        quarter_dollar += (int)(dollars / QUARTER_DOLLAR);
        dollars = dollars - quarter_dollar * QUARTER_DOLLAR;
    }
    //Calculate number of quarters in cents
    if (cents > 0)
    {
         quarter_cent += (int)(cents / QUARTER_CENT);
         cents = cents - quarter_cent * QUARTER_CENT;
    }

    //Calculate number of dimes in dollar
    if (dollars > 0)
    { 
        dime_dollar += (int)(dollars / DIME_DOLLAR);
        dollars = dollars - dime_dollar * DIME_DOLLAR;
    }
    //Calculate number of dimes in cents
    if (cents > 0)
    {
         dime_cent += (int)(cents / DIME_CENT);
         cents = cents - dime_cent * DIME_CENT;
    }

    //Calculate number of nickel in dollar
    if (dollars > 0)
    { 
        nickel_dollar += (int)(dollars / NICKEL_DOLLAR);
        dollars = dollars - nickel_dollar * NICKEL_DOLLAR;
    }

    //Calculate number of nickel in cents
    if (cents > 0)
    { 
        nickel_cent += (int)(cents / NICKEL_CENT);
        cents = cents - nickel_cent * NICKEL_CENT;
    }

    //Calculate number of penny in dollar
    if (dollars > 0)
    { 
        penny_dollar += (int)(dollars / PENNY_DOLLAR);
        dollars = dollars - penny_dollar * PENNY_DOLLAR;
    }

    //Calculate number of penny in cents
    if (cents > 0)
    { 
        penny_cent += (int)(cents / PENNY_CENT);
        cents = cents - penny_cent * PENNY_CENT;
    }

    cout<<"The coins are "<<(quarter_dollar + quarter_cent)<<" quarters, "<<(dime_dollar + dime_cent)<<" dimes, "<<(nickel_dollar + nickel_cent)<<" nickels and "<<(penny_dollar + penny_cent)<<" pennies "<<endl;
    return 0;
}