/*............Bismillahir Rahmanir Raheem...............*/

#include <bits/stdc++.h>
using namespace std;

#define Tahmid ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define LL long long int
#define ULL unsigned long long 
#define endl '\n'

#define mem(v, x) memset(v, x, sizeof(v))
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define HA " "

const LL NN = 1e9 + 6 + 9;
const LL mod = 998244353;

LL binpow(LL a, LL b) 
{
    if (b == 0)
    {
        return 1;
    }
    LL r = binpow(a, b / 2);
    if (b % 2)
    {
        return r * r * a;
    }
    else
    {
        return r * r;
    }
}

void ans()
{
    LL n;
    cin >> n;

    for (LL i = 1; i < 16; i++)
    {
        if (binpow(i, i) == n)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() 
{
    Tahmid;

    int t = 1;
    //cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}