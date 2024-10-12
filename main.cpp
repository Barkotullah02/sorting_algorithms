#include <iostream>
#include <__filesystem/path.h>
#include "sorting_algorithms.h";
using namespace std;


int main()
{
    int array[] = {1, 2, 3, 4, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(int);
    bubble_sort(array, size);
    for(int x : array) {
        cout << x << " ";
    }
    return 0;
}
