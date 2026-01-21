#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    for (int i = 0;i < n;i++) {
        if (i <= m-1) cout << "OK\n";
        else cout << "Too Many Requests\n";
    }
    return 0;
}
