#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3,n4;
    int count_odd = 0;
    int count_even = 0;

    //Ask user to enter 4 integers
    cout<<"Please enter 4 positive integers, separated by a space: "<<endl;

    //Get 4 integers from the user
    cin>>n1>>n2>>n3>>n4;

    //Check each number is either even or odd, if so increase relevant counter value
    if (n1 % 2 == 0)
    {
        count_even++;
    }
    else
    {
        count_odd++;
    }

    if (n2 % 2 == 0)
    {
        count_even++;
    }
    else
    {
        count_odd++;
    }

    if (n3 % 2 == 0)
    {
        count_even++;
    }
    else
    {
        count_odd++;
    }
    
    if (n4 % 2 == 0)
    {
        count_even++;
    }
    else
    {
        count_odd++;
    }
    
    //Check which counter is greater than the other, and print the result
    if (count_even > count_odd)
    {
        cout<<"more evens"<<endl;
    }
    else if (count_odd > count_even)
    {
        cout<<"more odds"<<endl;
    }
    else
    {
        cout<<"same number of evens and odds"<<endl;
    }

    return 0;
}