#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float R[25] = {
        0.08, 0.12, 0.95, 0.34, 0.11,
        0.56, 0.77, 0.21, 0.04, 0.66,
        0.43, 0.19, 0.82, 0.55, 0.27,
        0.03, 0.99, 0.41, 0.15, 0.60,
        0.88, 0.32, 0.14, 0.71, 0.22
    };

    int m = 5;
    int n = 25;

    int M = n - m;          // number of pairs
    float sum = 0;

    for(int k = 0; k < M; k++)
        sum += R[k] * R[k + m];

    float E = M / 4.0;
    float Var = M / 48.0;
    float sigma = sqrt(Var);

    float Z = (sum - E) / sigma;

    cout << "Sum = " << sum << endl;
    cout << "Z = " << Z << endl;

    if(fabs(Z) > 1.96)
        cout << "Autocorrelated (Not random)" << endl;
    else
        cout << "Independent (Random)" << endl;

    return 0;
}
