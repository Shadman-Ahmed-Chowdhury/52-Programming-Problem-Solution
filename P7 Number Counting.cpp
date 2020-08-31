#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    scanf("%d\n", &T);
    for(int t = 1; t <= T; t++) {
        string str;
        getline(cin, str);
        int cnt = 0;
        stringstream ss(str);
        string word;
        while(ss >> word)
            cnt++;
        cout << cnt << endl;
    }
    return 0;
}
