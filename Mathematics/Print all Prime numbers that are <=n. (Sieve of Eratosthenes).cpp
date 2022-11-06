#include <bits/stdc++.h>
using namespace std;

/***********************************************/
// Seive of Erotosthenes
// Print all Prime numbers that are <= n

void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";

            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
}

// TC: O(n log (log n))
/***********************************************/

int main() {

    int n;

    cin >> n;

    sieve(n);

    return 0;
}
