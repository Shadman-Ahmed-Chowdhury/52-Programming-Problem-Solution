#include <bits/stdc++.h>

using namespace std;
long long arr[16];

void fact() {
    arr[0] = 0;
    arr[1] = 1;
    long long product = 1;
    for(long long i = 1; i <= 15; i++) {
        product *= i;
        arr[i] = product;
    }
}

int main()
{
    fact();
    int T;
    scanf("%d", &T);
    while(T--) {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", arr[n]);
    }
    return 0;
}
