#include <iostream>
using namespace std;

float avgoflst(int lst[], int size);
int main()
{
    int lst[] = {19, 2, 20, 1, 0, 18};
    int arrSize = sizeof(lst)/sizeof(lst[0]);
    cout<<avgoflst(lst,arrSize);
}
float avgoflst(int lst[], int size)
{
    int sum = 0;
    float avg;
    for (int i = 0; i < size; i++)
    {
        sum += lst[i];
    }
    // Calculate average value of the elements in the list
    // For real division, cast the values into double
    avg = (double) sum / (double) size;
    return avg;
}