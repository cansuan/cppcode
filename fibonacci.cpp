#include<iostream>
using namespace std;

int main()
{
    //This program prints first n Fibonacci Numbers
    int nofFibonacciNum;
    // Get the number of fibonnacci to be printed from the user
    cout<<"Please enter a positive integer greater than 1: ";
    cin>>nofFibonacciNum;
    int *fibonacciArr = new int(nofFibonacciNum);
    //The first two numbers in the series are the number 1.
    fibonacciArr[0] = 1;
    fibonacciArr[1] = 1;
    // Print first and second numbers in Fibonacci series
    cout<<fibonacciArr[0]<<endl;
    cout<<fibonacciArr[1]<<endl;
    
    //Print  the rest of the series in which each number is the sum of two preceding numbers
    for (int i = 2 ; i < nofFibonacciNum; i++)
    {
        fibonacciArr[i] = fibonacciArr[i-1] + fibonacciArr[i-2];
        cout<<fibonacciArr[i]<<endl;
    }
    delete [] fibonacciArr;
    return 0;

}