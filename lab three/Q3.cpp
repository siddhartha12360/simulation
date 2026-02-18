#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int O[5] = {1010, 860, 90, 35, 5};
    float P[5] = {0.504, 0.432, 0.027, 0.036, 0.001};

    int N = 2000;
    float chi = 0;

    for(int i = 0; i < 5; i++)
    {
        float E = N * P[i];
        chi += (O[i] - E) * (O[i] - E) / E;
    }

    cout << "Chi-square = " << chi << endl;

    if(chi > 9.49)
        cout << "Not independent (Reject H0)";
    else
        cout << "Independent (Accept H0)";

    return 0;
}


