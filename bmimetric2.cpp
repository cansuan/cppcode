#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

double calculate_bmi(double height,double weight);
void print_bmi_weight_status(float bmi);
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

    print_bmi_weight_status(bmi_value);
}

double calculate_bmi(double height,double weight)
{
    double bmi;
    // Calculate Body mass index (BMI) 
    bmi = weight / pow(height,2);
    return bmi;
}

void print_bmi_weight_status(float bmi)
{
    string weight_status;

    if (bmi < 18.5)
    {
        weight_status = "Underweight";
    }
    else if ((bmi < 24.9) && (bmi > 18.5))
    {
        weight_status = "Normal";
    }
    else if ((bmi < 29.9) && (bmi > 25.0))
    {
        weight_status = "Overweight";
    }
    else
    {
        weight_status = "Obese";
    }

    //Print Body mass index (BMI)
    cout<<"BMI is: "<<std::setprecision(4)<<bmi<<", Status is "<<weight_status<<endl;

}
