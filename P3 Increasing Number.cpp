#include <bits/stdc++.h>

using namespace std;

int main() {

    for(int i = 1000; i >= 1; i--) {
        if((i - 1) % 5 == 0)
            printf("%d\t\n", i);
        else
            printf("%d\t", i);
    }
    return 0;
}
