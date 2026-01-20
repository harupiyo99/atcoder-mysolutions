#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n + 1),b(n + 1);
    for (int i = 1;i <= n;i++) cin >> a[i] >> b[i];

    vector<int> sumb(m + 1,0),bnum(m + 1,0);

    for (int i = 1;i <= m;i++) {
        for (int j = 1;j <= n;j++) {
            if (a[j] == i) {
                sumb[i] += b[j];
                bnum[i]++;
            }
        }
        cout << (double (sumb[i])) / (double (bnum[i])) << "\n";
    }
    return 0;
}
