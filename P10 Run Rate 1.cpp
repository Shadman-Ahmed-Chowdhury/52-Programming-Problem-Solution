#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--) {
        int runs, runs_scored, balls_left;
        cin >> runs >> runs_scored >> balls_left;
        int balls_played = 300 - balls_left;
        double overs_left = balls_left / 6.00;
        double overs_played = balls_played / 6.00;
        int runs_left = (runs + 1) - runs_scored;
        double cr = runs_scored / overs_played;
        double rr;
        if(runs_scored > runs)
            rr = 0.0;
        else
            rr = runs_left / overs_left;
        printf("%.2lf %.2lf\n", cr, rr);
    }

    return 0;
}
