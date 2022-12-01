#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cin >> m;
    while (m--)
    {
        ll x;
        cin >> x;
        auto it = upper_bound(a, a + n, x) - a;
        cout << it << '\n';
    }
}