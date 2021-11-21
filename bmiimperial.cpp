#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
const double POUND = 0.453592;
const double INCH =  0.0254;

double calculate_bmi(double height,double weight);
int main()
{
    double height_in_meter,weight_in_kg,bmi_value,weight_in_pounds,height_in_inches;

    //Get user's height and weight information
    cout<<"Please enter weight in pounds:";
    cin>>weight_in_pounds;
    cout<<"Please enter height in inches:";
    cin>>height_in_inches;
    //Convert Pound to kilogram
    weight_in_kg = weight_in_pounds * POUND;

    //Convert inch to meter
    height_in_meter = height_in_inches * INCH;

    // Calculate Body mass index (BMI) 
    bmi_value = calculate_bmi(height_in_meter,weight_in_kg);

    //Print Body mass index (BMI)  with setting precision decimal 2
    cout<<"BMI is: " << fixed<<setprecision(2)<<bmi_value<<endl;
}

double calculate_bmi(double height,double weight)
{
    double bmi;
    // Calculate Body mass index (BMI) 
    bmi = weight / pow(height,2);
    return bmi;
}