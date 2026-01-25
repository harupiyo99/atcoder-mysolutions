// https://atcoder.jp/contests/abc057/tasks/abc057_b

#include <iostream>   
#include <vector>    
#include <string>    
#include <algorithm>
#include <utility> 
#include <map>       
#include<queue>
#include<cmath>
#include<iomanip>

using namespace std;
using ll = long long int;
using vi = vector<int>;
using vvi = vector<vector<int>>; 
using msi = map<string, int>;

int main()
{
    int N,M;
    cin >> N >> M;
    vector<pair<ll,ll>> student = {{0,0}};
    vector<pair<ll,ll>> checkpoints = {{0,0}};
    for (int i = 1;i <= N;i++) {
        ll a,b;
        cin >> a >> b;
        student.push_back(make_pair(a,b));
    }
    for (int i = 1;i <= M;i++) {
        ll c,d;
        cin >> c >> d;
        checkpoints.push_back(make_pair(c,d));
    }

    for (int i = 1;i <= N;i++) {
        ll min = 1000000000;
        int minlog;
        for (int j = M;j >= 1;j--) {
            ll man = abs(student[i].first - checkpoints[j].first) + abs(student[i].second - checkpoints[j].second);
            if (man <= min) {
                min = man;
                minlog = j;
            }
        }
        cout << minlog << "\n";
    }
    return 0;
}
