#include<bits/stdc++.h>
#include<string>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vvi = vector<vector<int>>; 

int main()
{
    int D,F;
    cin >> D >> F;

    int day = F;
    while (day <= D) {
        day += 7;
    }
    cout << day - D;
    return 0;
}
