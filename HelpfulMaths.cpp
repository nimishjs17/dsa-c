#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inp;
    cin >> inp;
    string counterOne{};
    string counterTwo{};
    string counterThree{};

    for (size_t i{}; i < inp.length(); i++)
    {
        if (inp[i] != '+')
        {
            if (inp[i] == '1')
            {
                counterOne += "1+";
            }
            else if (inp[i] == '2')
            {
                counterTwo += "2+";
            }
            else
            {
                counterThree += "3+";
            }
        }
    }
    string finalString = counterOne + counterTwo + counterThree;
    finalString.pop_back();
    cout<< finalString;
    return 0;
}