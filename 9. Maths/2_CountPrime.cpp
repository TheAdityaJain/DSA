#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int count = 0;
    vector<bool> isPrime(n + 1, true);
    
    for (int i = 2; i < n; i++)
    {
        cout << i << isPrime[i] << endl;
        if (isPrime[i])
        {
            count++;
            for (int j = i * 2; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    cout << count;
    return 0;
}
