#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%d", &n);
        if(n & 1)
            printf("odd\n");
        else
            printf("even\n");
    }
    return 0;
}
