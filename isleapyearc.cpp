#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int userYearInput;
    if (argc == 2)
    {
        userYearInput = atoi(argv[1]);
    }
    else
    {
        cout<<" Error: More than two arguments was passed. Example: isleapyearc 1897"<<endl;
        return 1;
    }

    if (userYearInput % 4 == 0)
    {
        if (userYearInput % 100 == 0)
        {
            if (userYearInput % 400 == 0)
                cout<<userYearInput<<" was a leap year"<<endl;
            else
                cout<<userYearInput<<" was not a leap year"<<endl;
        }
        else
        {
            cout<<userYearInput<<" was a leap year"<<endl;
        }
    }
    else
    {
        cout<<userYearInput<<" was not a leap year"<<endl;
    }
    return 0;
}