#include <iostream>

#define pb push_back
#define pf push_front
#define F first
#define INF 10e9 + 7
#define S second
#define endl "\n"
#define loop(i, l, n) for (ll i = l; i < ll(n); i++)
#define bloop(i, n, l) for (ll i = n; i > ll(l); i--)
#define cin(x)        \
    for (auto &o : x) \
    cin >> o
#define cout(x)           \
    for (auto o : x)      \
        cout << o << ' '; \
    cout << '\n'
#define eps 1e-12
#define sqr(a) ((a) * (a))
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define END        \
    {              \
        cout << 0; \
        return 0   \
    }

using namespace std;
typedef long long ll;
typedef long double ld;

int main()
{
    ll n, a[102], b;
    cin >> n >> a[1];
    a[0] = 0;
    if (n < 2)
    {
        cout << a[1];
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        cin >> b;
        a[i] = max(a[i - 1], a[i - 2]) + b;
    }
    cout << a[n];
    return 0;
}