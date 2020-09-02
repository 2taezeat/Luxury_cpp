#include <iostream>
#include <string>
using namespace std;

void half(double& m)
{
    double* result;
    result = &m;
    *result = *result / 2;

}

int main() {
    double n = 20;
    half(n);
    cout << n;
}