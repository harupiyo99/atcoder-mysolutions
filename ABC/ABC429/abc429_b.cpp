#include<bits/stdc++.h>
#include<string>
using namespace std;

int n,m,sum = 0;
bool judge = false;

int main()
{
    cin >> n >> m;
    int a[n + 1];
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        sum += a[i];
    }

    for (int i = 1;i <= n;i++) {
        if (sum - a[i] == m) {
            judge = true;
            break;
        }
    }

    if (judge) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
