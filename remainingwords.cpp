#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string remainingwords(string s);
int main()
{
    cout << remainingwords("the quick brown fox");
    return 0;
}
string remainingwords(string s)
{
    string remaining_words;
    int str_len = s.length();
    for (int i = 0; i < str_len; i++)
    {
        if (s[i] == ' ')
        {
            remaining_words = s.substr(i+1,str_len);
            break;
        }
    }
    return remaining_words;
}