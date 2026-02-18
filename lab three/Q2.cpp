#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float R[20] = {
        0.50, 0.11, 0.23, 0.76, 0.44,
        0.82, 0.19, 0.55, 0.33, 0.91,
        0.02, 0.67, 0.48, 0.12, 0.59,
        0.31, 0.88, 0.05, 0.74, 0.26
    };

    int i = 3;      // start index (4th number)
    int m = 2;
    int n = 20;

    float sum = 0;
    int M = 0;

    for(int k = i; k + m < n; k += m)
    {
        sum += R[k] * R[k + m];
        M++;
    }

    float Z = (sum - M/4.0) / sqrt(M/48.0);

    cout << "Sum = " << sum << endl;
    cout << "Z = " << Z << endl;

    if(fabs(Z) > 1.96)
        cout << "Autocorrelated\n";
    else
        cout << "Independent (Random)\n";

    return 0;
}
