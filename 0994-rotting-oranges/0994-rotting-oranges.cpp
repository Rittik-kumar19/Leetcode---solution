class Solution {
public:
    int orangesRotting(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        queue <int> q;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) 
                if (a[i][j] == 2) 
                    q.push(i * m + j); // add rotten to the queue
        int l = -1 + q.empty(); // init level/time
        int d[5] = {0, 1, 0, -1, 0};
        for ( ; !q.empty(); l++) { // standard bfs
            int p = q.size();
            for (int j = 0; j < p; j++) {
                int zz = q.front(); q.pop();
                int xx = zz / m, yy = zz % m;
                for (int k = 0; k < 4; k++) {
                    int x = xx + d[k], y = yy + d[k + 1];
                    if (x < 0 || y < 0 || x == n || y == m) continue;
                    if (a[x][y] == 1) {
                        a[x][y] = 2;
                        q.push(x * m + y);
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (a[i][j] == 1) // check if any remain
                    return -1;
        return l; 
    }
};