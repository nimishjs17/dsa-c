#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

void lowerCase(string str)
{
    string s = "Am I the BuTlERsdw SW Sjse";
    for (size_t i{}; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = (s[i] - 'A') + 'a';
        }
    }
    cout << s;
}

void sizeOfPointer()
{
    int *int_ptr {nullptr} ;
    double *double_ptr {};


    int n = 100000; 
    int *int_ptr2{&n};

    cout<<left;
    cout << setw(10) << "*size_t:" << setw(5) << sizeof(size_t) << endl;
    cout << setw(10) << "int:" << setw(5) << sizeof(int) << endl;
    cout << setw(10) << "*int:" << setw(5) << sizeof(int_ptr) << endl;
    cout << setw(10) << "double:" << setw(5) << sizeof(double) << endl;
    cout << setw(10) << "*double:" << setw(5) << sizeof(double_ptr) << endl;
    cout<<setw(10)<<"address:"<<int_ptr2;
    // 0x843f3ff754

    int arr[3] = {34,546,11};
    int_ptr2 = &arr[0];
    cout<<"\naddress : "<<int_ptr2<<"\t value: "<<*int_ptr2;
    int_ptr2 ++ ;
    cout<<"\naddress : "<<int_ptr2<<"\t value: "<<*int_ptr2;
    int_ptr2 ++ ;
    cout<<"\naddress : "<<int_ptr2<<"\t value: "<<*int_ptr2;
}

void intRoundOff()
{
    int n =  7 ;
    int half = n/2;
    cout<<half;
}

void intLimitPrinter()
{
    long long n = 999999999997;
    long long b = n/2;
    cout<<n<<"\n"<<b;
}

int main()
{
    intLimitPrinter();
    return 0;
}