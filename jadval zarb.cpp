#include <iostream>

using namespace std;

int main()
{
    int n, m;
    for (n = 1; n <= 10; n++)
    {
        for (m = 1; m <= 10; m++) 
            cout << n * m << endl;

        cout << endl;
    }
}