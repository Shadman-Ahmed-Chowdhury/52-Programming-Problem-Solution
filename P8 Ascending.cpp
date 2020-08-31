#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++) {

        int arr[3];
        scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
        sort(arr, arr + 3);
        printf("Case %d: %d %d %d\n", t, arr[0], arr[1], arr[2]);
    }
    return 0;
}
