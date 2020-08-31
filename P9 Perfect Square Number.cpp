#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++) {
        int n;
        scanf("%d", &n);
        int sq = sqrt(n);
        if(sq * sq == n)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
