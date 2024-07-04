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

const LL NN = 1e18;
const LL mod = 998244353;

void ans()
{
    LL n, m = 1, c = 0;
    cin >> n;
    vector<LL> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] == 0)
        {
            cout << 0 << endl;
            return;
        }
         if(a[i] > NN / a[i])
        {
            c = 1;
        }

        if(a[i] <= NN)
        {
            m = m * a[i];
        }

        if(m > NN)
        {
            c = 1;
        }

    }

    if(c == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << m << endl;
    }
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