#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++) {
        int n;
        scanf("%d", &n);
        int ans = (n % 10) + (n / 10000);
        printf("Sum = %d\n", ans);
    }
    return 0;
}
