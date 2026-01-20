#include<bits/stdc++.h>
#include<string>
using namespace std;

void solve() {
    int n,h;
    cin >> n >> h;
    vector<int> time(n + 1),l(n + 1),u(n + 1);
    for (int i = 1;i <= n;i++) {
        cin >> time[i] >> l[i] >> u[i];
    }

    string judge = "Yes\n";

    int lt = h,ut = h;
    vector<int> d(n + 1,0);
    for (int i = 1;i <= n;i++) {
        d[i] = time[i] - time[i - 1];
        lt = max(1,lt - d[i]);
        ut += d[i];

        lt = max(lt,l[i]);
        ut = min(ut,u[i]);
        if (lt > ut) judge = "No\n";
    }

    cout << judge;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    for (int i = 1;i <= t;i++) solve();
    return 0;
}
