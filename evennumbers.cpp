#include <iostream>
using namespace std;

int main()
{
    int nofeven,currEvenNum;
    cout<<"Please enter a positive integer: ";
    cin>>nofeven;
    currEvenNum = 2;
    for (int i = 0; i < nofeven; i++)
    {
        cout<<currEvenNum<<endl;
        currEvenNum += 2;
    }
    return 0;
}