#include <iostream>
#include<string>
#include <iomanip>

using namespace std;

int main()
{
    char input_char;
    cout<<"Enter a character: ";
    cin>>input_char;

    if (islower(input_char))
    {
        cout<<input_char<<" is  a lower case  letter."<<endl;
    }
    else if(isupper(input_char))
    {
        cout<<input_char<<" is  an upper case  letter."<<endl;
    }
    else if(isdigit(input_char))
    {
        cout<<input_char<<" is  a digit."<<endl;
    }
    else
    {
        cout<<input_char<<" is  a non-alphanumeric  character.";
    }

    return 0;
}