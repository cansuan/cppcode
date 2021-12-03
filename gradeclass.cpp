#include <iostream>
using namespace std;

int main()
{
    double grade1, grade2;
    //Ask user to enter two grades 
    cout<<"Please enter 2 grades, separated by a space:"<<endl;
    // Get two grades from the user
    cin>>grade1>>grade2;
    if (grade1 < 60 && grade2 < 60)
    {
        cout<<"Student Failed:("<<endl;
    }
    else if (grade1 >= 95 && grade2 >= 95)
    {
        cout<<"Student Graduated with Honors:)"<<endl;
    }
    else 
    {
        cout<<"Student Graduated!"<<endl;
    }
    return 0;
}
