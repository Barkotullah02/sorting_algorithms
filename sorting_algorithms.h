#pragma once
#include <iostream>
#include <vector>
using namespace std;

bool compare(int a, int b) {
    return a < b;
}

int bubble_sort(int array[], int size) {
    for (int times = 0; times < size; times++) {
        for (int j = 0; j < size - times - 1; j++) {
            if (compare(array[j], array[j + 1])) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int insertion_sort(int array[], int size) {
    for(int i = 1; i <= size; i++) {
        int current = array[i];
        int prev = i-1;
        while (prev >= 0 and compare(array[prev], current)) {
            array[prev+1] = array[prev];
            prev--;
        }
        array[prev+1] = current;
    }
}



void selection_sort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        int min = i;
        for (int j = i; j < size; j++) {
            if (compare(array[j], array[min])) {
                min = j;
            }
        }
        swap(array[min], array[i]);
    }
}

void counting_sort(int array[], int size) {
    int largest;
    for (int i = 1; i < size; i++) {
        largest = max(largest, array[i]);
    }
    vector<int> freq(largest+1, 0);

    for(int i = 0; i < size; i++) {
        freq[array[i]]++;
    }

    int j = 0;
    for(int i = 0; i < largest; i++) {
        while(freq[i] > 0) {
            array[j] = i;
            freq[i]--;
            j++;
        }
    }
}