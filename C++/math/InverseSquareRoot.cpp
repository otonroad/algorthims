#include <iostream>

using namespace std;

// Function: InverseSquareRoot
float invSqrt( float number ){
    union {
        float f;
        uint32_t i;
    } conv;

    float x2;
    const float threehalfs = 1.5F;

    // idk how this works
    x2 = number * 0.5F;
    conv.f  = number;
    conv.i  = 0x5f3759df - ( conv.i >> 1 );
    conv.f  = conv.f * ( threehalfs - ( x2 * conv.f * conv.f ) );
    return conv.f;
}

int main()
{
    float number;
    // input number
    cout << "Enter a number: ";
    cin >> number;
    cout << endl;
    // output inverse square root
    cout << "Inverse Square Root of " << number << " is " << invSqrt(number) << endl;
    return 0;
}