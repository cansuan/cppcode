#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string firstword(string s);
int main()
{
    cout << firstword("the quick brown fox");
    return 0;
}
string firstword(string s)
{
    string first_word;
    int str_len = s.length();
    for (int i = 0; i < str_len; i++)
    {
        if (s[i] == ' ')
        {
            first_word = s.substr(0,i);
            break;
        }
    }
    return first_word;
}