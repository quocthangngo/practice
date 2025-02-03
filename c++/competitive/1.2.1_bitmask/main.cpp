#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;

/* Forming Quiz Teams, the solution for UVa 10911 above*/
// Using global variable is a bad software engineering practice.
int N, target;
double dist[20][20], memo[1 << 16]; // 1 << 16 = 2*16, note that max N = 0

double matching(int bitmask) { // DP state = bitmask
    // we initialize 'memo' with -1 in the main function
    if (memo[bitmask] > -0.5) // this state has been computed before
        return memo[bitmask]; // simply lookup the memo table
    if (bitmask == target) // all student are already matched
        return memo[bitmask] = 0; // the cost is 0

    double ans = 2000000000.0; // initialize with a large value
    int p1, p2;
    for (p1 = 0; p1 < 2*N; p1++) {
        if (!(bitmask & (1 << p1)))
            break; // find the first bit that is off
    }
    for (p2 = p1 + 1;p2 < 2*N;p2++) { // then try to match p1
        if (!(bitmask & (1 << p2))) // with another bit p2 that is also off
            // pick the minimum
            ans = min(ans, dist[p1][p2] + matching(bitmask | (1 << p1) | (1 << p2)));
    }
    // store result in a memo table and return
    return memo[bitmask] = ans;
}

int main() {
    int i, j, caseNo = 1, x[20], y[20];
    // freopen("10911.txt", "r", stdin); // redirect intput file to stdin
    while (scanf("%d", &N), N) // yes, we can do this :)
    {
        for(i = 0; i < 2*N; i++)
        {
            scanf("%*s %d %d", &x[i], &y[i]); // '%s' skips names
        }
        for (i = 0; i<2*N - 1; i++) // build pairwise distance table
        {
            for(j = i+1; j < 2 * N; j++) // have you used 'hypot' before?
                dist[i][j] = dist[j][i] = hypot(x[i] - x[j], y[i] - y[j]);
        }
        // use DP to solve min weighted perfect matching on small general graph
        for(i = 0; i< (1 << 16); i++)
        {
            memo[i] = -1.0; //set -1 to all cells
            target = (1 << (2*N)) -1;
            printf("Case %d: %.21f\n", caseNo++, matching(0));
        }
    }
    return 0;
}
