#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    
    ll amar; cin >> amar;
    while (amar--)
    {
        ll arr[26] = { 0 }, n,flag = 0; cin >> n;
        string s; cin >> s;
        arr[s[0] - 'A'] = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                continue;
            }
            else {
                if (arr[s[i] - 'A'] > 0) {
                    flag = 1;
                }
                arr[s[i] - 'A'] = 1;
            }
        }
        if (flag == 0) {
            cout << "YES" << '\n';
        }
        else cout << "NO" << '\n';
    }
 
    return 0;
}