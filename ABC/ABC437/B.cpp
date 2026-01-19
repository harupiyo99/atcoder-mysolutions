#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int h,w,n;
    cin >> h >> w >> n;
    int a[h + 1][w + 1],b[n + 1];
    for (int i = 1;i <= h;i++) {
        for (int j = 1;j <= w;j++) cin >> a[i][j]; 
    }
    for (int i = 1;i <= n;i++) cin >> b[i];

    int count[h + 1] = {};
    for (int i = 1;i <= h;i++) {
        for (int j = 1;j <= w;j++) {
            for (int k = 1;k <= n;k++) {
                if (b[k] == a[i][j]) count[i]++;
            }
        }
    }
    cout << *max_element(count + 1,count + h + 1) << "\n";
    return 0;
}
