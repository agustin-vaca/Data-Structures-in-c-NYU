#include<iostream>
#include <vector>

using namespace std;

double* getDoubles(int numDoubles) {
    double *ptr = new double[numDoubles];
    for (double i = 0; i <= numDoubles; i++) {
        ptr[int(i)] = (i+1)/3;
    }
    return ptr;
}