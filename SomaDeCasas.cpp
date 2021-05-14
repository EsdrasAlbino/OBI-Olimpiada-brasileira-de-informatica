#include <bits/stdc++.h>

using namespace std;

int a[100000];
int main() {

    int n, k, i;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;

    for (i = 0; i < n; i++)
    {
        if ( binary_search(a + i, a + n, k - a[i]) )
        {
            cout << a[i] << " " << k - a[i] << "\n";
            break;
        }
    }

    return 0;
}