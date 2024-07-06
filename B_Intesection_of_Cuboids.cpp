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

#include <iostream>
using namespace std;

bool overlap(int a1, int a2, int b1, int b2) {
    return max(a1, b1) < min(a2, b2);
}

void ans() 
{
    int a, b, c, x, y, z;
    int n, m, k, f, u, v;
    cin >> a >> b >> c >> x >> y >> z;
    cin >> n >> m >> k >> f >> u >> v;

    bool x_overlap = overlap(a, x, n, f);
    bool y_overlap = overlap(b, y, m, u);
    bool z_overlap = overlap(c, z, k, v);

    if (x_overlap && y_overlap && z_overlap) 
    {
        cout << "Yes" << endl;
    } 
    else 
    {
        cout << "No" << endl;
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