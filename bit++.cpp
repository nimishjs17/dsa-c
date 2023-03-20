#include <iostream>
using namespace std; 


int main()
{
   int x = 0 ;
   int n = 0;
   cin>>n;
   string s;

   while(n--)
   {
    cin>>s;
    if(s[1] == '-')
    {
        x--;
    }
    else
    {
        x++;
    }
   }
   cout << x;
}