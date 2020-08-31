#include <bits/stdc++.h>

using namespace std;

int main() {

    int T;
    scanf("%d", &T);
    int n;
    for(int t = 1; t <= T; t++) {
        scanf("%d", &n);
        set <int> s;
        for(int i = 1; i <= sqrt(n); i++) {
            if(n % i == 0) {
                if(n / i != i) {
                    s.insert(i);
                    s.insert(n / i);
                }
                else
                    s.insert(i);
            }
        }
        printf("Case %d:", t);
        set <int> :: iterator it;
        for(it = s.begin(); it != s.end(); it++) {
            cout << " " << *it;
        }
        cout << endl;
    }
    return 0;
}
