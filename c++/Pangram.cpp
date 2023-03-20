#include <iostream>
#include <set>
using namespace std;

int main()
{
    int len {};
    cin>>len;
    string inp {};
    cin>>inp;
    set<char> uniqueChars {};
    if (len>=26)
    {
        for (size_t i {}; i< len; i++)
        {
            if(inp[i] >= 'A' && inp[i] <= 'Z')
            {
                inp[i] += 'a' - 'A';
            }
            uniqueChars.insert(inp[i]);
        }
    }
    if(uniqueChars.size() == 26)
    {
        cout<<"YES";
    }
    else
    {   
        cout<<"NO";
    }
    return 0;
}   