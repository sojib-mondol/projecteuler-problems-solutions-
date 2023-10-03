#include <bits/stdc++.h>

using namespace std;

int sum(int n)
{
    int sum = 0;
    for (int i = 3; i < n; i += 3)
    {
        sum += i;
    }
    for (int i = 5; i < n; i += 5)
    {
        if (i % 3 != 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int fsum = sum(1000);
    cout << fsum << endl;

    return 0;
}
