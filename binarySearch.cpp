/*
write a program of BinarySearch
*/
#include <iostream>
#include <map>
#include <vector>
#include <cstdlib> //for absolute value
#define NeedForSpeed                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define clean fflush(stdin)
using namespace std;
int BinarySearch(int arr[], int x, int size) // Binary Function Implementation through Iteration method
{
    int l = 0;        // lower iterator
    int e = size - 1; // higher iterator
    while (l <= e)
    {

        int mid = (l + e) / 2; // assign value to mid
        if (x == arr[mid])
        {
            return mid; // given number get so return index
        }
        else if (x < arr[mid])
        {
            e = mid - 1; // given number is less than number of mid index in array so assign new value to higher
        }
        else
        {
            l = mid + 1; // given number is greater than number of mid index in array so assign new value to lower
        }
    }
    return -1; // not present in array
}

int main()
{
    int x;                                                     // this is number you want to find in the
    cin >> x;                                                  // take number form user
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 23};                     // array
    cout << "In array Index at : " << BinarySearch(arr, x, 8); // call binaryFunction 8 is size of array
    return 0;
}