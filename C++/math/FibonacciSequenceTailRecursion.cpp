#include <iostream>

using namespace std;

// Fibonacci sequence
// This will not work if you have a limit on memory
// This is a tail recursive function

int fib(int n)
{
    int a = 0;
    int b = 1;
    while (n-- > 1) {
        int t = a;
        a = b;
        b += t;
    }
    return b;
}

int main()
{
    int numberOfTimes;
    cout << "Enter the number of times you want to print the Fibonacci sequence: ";
    cin >> numberOfTimes;
    cout << endl;
    cout << "The Fibonacci sequence is: ";
    cout << endl;
    for (int i = 0; i < numberOfTimes; i++) {
        cout << fib(i) << endl;
    }
}