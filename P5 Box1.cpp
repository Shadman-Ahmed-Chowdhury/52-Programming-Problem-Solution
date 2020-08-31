#include <bits/stdc++.h>

using namespace std;

int main() {

    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++) {
        int n;
        scanf("%d", &n);
        for(int i = 0; i <n; i++) {
            for(int j = 0; j < n; j++) {
                printf("*");
            }
            printf("\n");
        }
        if(t != T)
            printf("\n");
    }

    return 0;
}
