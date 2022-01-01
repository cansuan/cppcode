#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float bmimetricf(int weight, float height);
int main()
{
    float bmi_value;

    int weight = 50;

    float height = 1.58;

    // Calculate Body mass index (BMI) 
    bmi_value = bmimetricf(weight,height);

    //Print Body mass index (BMI)
    cout<<"BMI is: "<<std::setprecision(4)<<bmi_value<<endl;
}

float bmimetricf(int weight, float height)
{
    float bmi;
    // Calculate Body mass index (BMI) 
    bmi = weight / (height*height);
    return bmi;
}