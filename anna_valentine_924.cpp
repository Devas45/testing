#include <bits/stdc++.h>
#define ll int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k, ans;
        cin >> n >> k;

        int p = n * 2 - 4; 
        if (k <= 2 * p + 4)
        {
            cout << ceil(k / 2.0) << endl; 
            continue;
        }
        else if (k == 2 * p + 5)
        {
            cout << ceil(k / 2.0) << endl; 
            continue;
        }
        else if (k == 2 * p + 6)
        {
            cout << n * 2 << endl; 
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            continue;
        }
        else
        {
            cout << "-1" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            continue;
        }
    }
    return 0;
}
