// #include <iostream>
// using namespace std;

// bool isleapyear(int inyear);
// int main()
// {
//     int mybirthyear = 2000;

//     if (isleapyear(mybirthyear))
//     {
//         cout<<"Year "<<mybirthyear<<" was a leap year"<<endl;
//     }
// }

bool isleapyear(int inputyear)
{   
    if (inputyear % 4 == 0)
    {
        if (inputyear % 100 == 0)
        {
            if (inputyear % 400 == 0)
                return true;
            else
                return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}