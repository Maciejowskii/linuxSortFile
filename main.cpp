#include <iostream>
#include <fstream>
using namespace std;

void bubble(int *t, int sizeT)
{
    bool swapped = false;
    for (int i = 0; i < sizeT - 1; i++) {
        if (t[i] > t[i + 1]) {
            swap(t[i], t[i + 1]);
            swapped = true;
        }
    }
}

void bubblesort(int *t, int sizeT) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < sizeT - 1; i++) {
            if (t[i] > t[i + 1]) {
                swap(t[i], t[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}


void printT(int *t, int sizeT){
    for (int i = 0; i < sizeT; i++) {
        cout << t[i] << " ";
    }
}

#define MAX_T 10000
