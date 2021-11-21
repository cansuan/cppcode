#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double calculate_bmi(double height,double weight);
int main()
{
    double height_in_meter,weight_in_kg,bmi_value;

    //Get user's height and weight information
    cout<<"Please enter weight in kilograms:";
    cin>>weight_in_kg;
    cout<<"Please enter height in meters:";
    cin>>height_in_meter;
    cout<<endl;

    // Calculate Body mass index (BMI) 
    bmi_value = calculate_bmi(height_in_meter,weight_in_kg);

    //Print Body mass index (BMI)
    cout<<"BMI is: "<<std::setprecision(4)<<bmi_value<<endl;
}

double calculate_bmi(double height,double weight)
{
    double bmi;
    // Calculate Body mass index (BMI) 
    bmi = weight / pow(height,2);
    return bmi;
}