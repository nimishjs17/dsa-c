#include <iostream>
using namespace std;

int main()
{
    int x {};
    int y {};
    int z {};

    int n {};
    cin>>n;
    
    int xPlane{};
    int yPlane{};
    int zPlane{};
    while(n--)
    {
        cin>>x>>y>>z;
        xPlane += x;
        yPlane += y;
        zPlane += z;
    }

   if(xPlane == 0 && yPlane == 0 && zPlane == 0)
   {
        cout<<"YES";
   }
   else
   {
        cout<<"NO";
   }
    return 0;
}