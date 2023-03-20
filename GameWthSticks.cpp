#include <iostream>
using namespace std;

int main()
{
    int m {};
    int n {};
    
    cin>>m>>n;
    if ((m != 1 || n != 1))
    {
        int interSectionPts {} ;
        interSectionPts = m * n;
        int chances = m > n ? n : m ;
        if (chances % 2 == 0)
        {
            cout << "Malvika";
        }
        else
        {
            cout << "Akshat";
        }
    }
    else
    {
        cout << "Akshat";
    }
    return 0;
}