#include<bits/stdc++.h>
#include<string>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vvi = vector<vector<int>>; 

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    int len = S.size();
    string o;
    for (int i = 0;i < N - len;i++) o.push_back('o');

    cout << o + S << "\n";
    return 0;
}
