#include <iostream>
using namespace std;

int maxinlst(int lst[], int size);
int main()
{
    int lst[] = {-19, -3, 20, -1, 5, -25};
    int arrSize = sizeof(lst)/sizeof(lst[0]);
    cout<<maxinlst(lst,arrSize);
}
int maxinlst(int lst[], int size)
{
    int max = lst[0];
    for (int i = 0; i < size; i++)
    {
        if (lst[i] > max)
        {
            max = lst[i];
        }
    }
    return max;
}
