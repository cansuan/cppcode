#include<iostream>
using namespace std;

void addOne(int *ptrNum);
//Passing by Reference using pointers
int main()
{
    int number;
    number = 7;
    //Passed the address of number
    addOne(&number);
    cout<<number<<endl;
    return 0;
}
//ptrNum contains address of number
//*ptrNum gives the value stored at ptrNum
void addOne(int *ptrNum)
{
    *ptrNum = *ptrNum + 1;
}