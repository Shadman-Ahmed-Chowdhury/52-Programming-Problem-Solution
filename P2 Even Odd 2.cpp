#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    string num;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> num;
        int n = num[num.size() - 1] - 48;
        if(n & 1)
            printf("odd\n");
        else
            printf("even\n");
    }
    return 0;
}
