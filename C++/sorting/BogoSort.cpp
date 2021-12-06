// C++ implementation of Bogo Sort
#include <iostream>
using namespace std;
 
// To check if array is sorted or not
bool isSorted(int a[], int n)
{
    while (--n > 1)
        if (a[n] < a[n - 1])
            return false;
    return true;
}
 
// To generate permutation of the array
void shuffle(int a[], int n)
{
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
}
 
// Sorts array a[0..n-1] using Bogo sort
void bogosort(int a[], int n)
{
    // if array is not sorted then shuffle
    // the array again
    while (!isSorted(a, n))
        shuffle(a, n);
}
 
// prints the array
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
 
// Driver code
int main()
{
    int amountOfElements;
    cout << "Enter amount of elements: ";
    cin >> amountOfElements;   
    int arr[amountOfElements];
    // max 100 elements
    for (int i = 0; i < amountOfElements; i++) {
   // Reading User Input sales value Based on index
        cin >> arr[i]; //i is index 
    }
    int n = sizeof arr / sizeof arr[0];
    bogosort(arr, n);
    printf("Sorted array :\n");
    printArray(arr, n);
    return 0;
}