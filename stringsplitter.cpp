#include <iostream>
#include<string>
#include <iomanip>

using namespace std;

int main()
{
    string odd_len_string, first_half,second_half;
    int str_len,mid_indx;

    cout<<"Enter an odd length string:";
    getline(cin,odd_len_string);
    str_len = odd_len_string.length();
    mid_indx = str_len / 2;
    first_half = odd_len_string.substr(0,mid_indx);
    second_half = odd_len_string.substr(mid_indx + 1,str_len);
    cout<<"Middle character: "<<odd_len_string[mid_indx]<<endl;
    cout<<"First half: "  <<first_half<<endl;
    cout<<"Second half: " <<second_half<<endl;
    return 0;
}