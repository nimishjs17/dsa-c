#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long range {} ;
    long long pointer {};

    cin >> range >> pointer;

    // 7 7 // 6
    // 1, 3, 5, 7  - odd
    // 2, 4, 6   - even

    //8 5
    //1, 3, 5, 7
    //2, 4, 6, 8

    long long parityValue{};

    //cout<<left;

    //cout << setw(10) << "range/2" << setw(10) << (range / 2) << endl;

    //parityValue = range/2 <= pointer ? 1 : 2 ; //(pointer < range / 2) || (range % 2) == 1 ||  ? 1 : 2; //(range % 2) - (range % 2) + 1;
    // cout << setw(10) << "parityValue" << setw(10) << parityValue << endl;

    //pointer = parityValue == 2 ?  pointer - (range / 2) - (range % 2) : pointer;
    //cout << setw(10) << "n"<< n << endl;

    if (range % 2 == 0)
    {
        parityValue = pointer > range/2 ? 2 : 1 ;
       
    }
    else
    {
        parityValue = pointer >= (range / 2) + 2 ? 2 : 1;
    }

    pointer = parityValue == 2 ? pointer - (range / 2) - (range % 2) : pointer;

    if(parityValue == 1)
    {
        parityValue = 2*((range/2) - 1) + 1;
    }
    else
    {
        parityValue = 2*pointer;
    }

    //cout << setw(10) << "a" << setw(10) << a << endl;
    cout << parityValue;

    return 0;
}

// 10 3 //5
// 1, 3, 5, 7, 9  - odd
// 2, 4, 6, 9, 10 - even

// 7 7 // 6
//1, 3, 5, 7  - odd 
//2, 4, 6   - even

// if inp is even - equal partition
    // if pointer > inp / 2
        //calculate even numners
    //else
        //caluclate odd numbers
// if inp is odd - inp/2 + 1 odd values,  inp/2 - 1 even values
    // if pointer > (inp / 2) + 1
        //calculate even numners
    //else
        //caluclate odd numbers

