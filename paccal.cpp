
#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "please enter a number of line "<<endl;
    cin >> x;
    for (int line = 1; line <= x; line++)
    {
        int n = 1;
        for (int i = 1; i <= line; i++)
        {
            cout << n << " ";
            n = n * (line - i) / i;
        }
        cout << endl;
    }
    return 0;
}