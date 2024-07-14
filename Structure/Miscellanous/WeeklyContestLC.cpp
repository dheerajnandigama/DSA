typedef long long ll;

#define pb push_back
#define sz(x) (int)x.size()
#define all(x) begin(x),end(x)
#define lb(x,y) lower_bound(all(x),y)-begin(x)
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < sz(nums); i++) {
            int d = 1;
            for (int j = i + 1; j < sz(nums); j++) {
                if (nums[j] > nums[j - 1] && nums[i + 1] > nums[i] || nums[j] < nums[j - 1] && nums[i + 1] < nums[i]) d++;
                else break;
            }
            res = max(res, d);
        }
        return res;
    }
};

--------------

typedef long long ll;

#define pb push_back
#define sz(x) (int)x.size()
#define all(x) begin(x),end(x)
#define lb(x,y) lower_bound(all(x),y)-begin(x)
class Solution {
public:
    string getSmallestString(string s, int k) {
        for (int i = 0; i < sz(s); i++) {
            for (int j = 0; j < 26; j++) {
                int d = min(abs(j + 26 - (s[i] - 'a')), abs(s[i] - 'a' - j));
                if (d <= k) {
                    k -= d;
                    s[i] = (char)('a' + j);
                    break;
                }
            }
        }
        return s;
    }
};

--------------

typedef long long ll;

#define pb push_back
#define sz(x) (int)x.size()
#define all(x) begin(x),end(x)
#define lb(x,y) lower_bound(all(x),y)-begin(x)
class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(all(nums));
        int m = sz(nums) / 2;
        ll res = 0;
        for (int i = 0; i <= m; i++) {
            if (nums[i] > k) res += nums[i] - k;
        }
        for (int i = m ; i < sz(nums); i++) {
            if (nums[i] < k) res += k - nums[i];
        }
        return res;
    }
};

--------------

typedef long long ll;

#define pb push_back
#define sz(x) (int)x.size()
#define all(x) begin(x),end(x)
#define lb(x,y) lower_bound(all(x),y)-begin(x)
class Solution {
public:
    vector<int> minimumCost(int N, vector<vector<int>>& edges, vector<vector<int>>& queries) {
        vector<vector<int>> adj(N);
        vector<int> c(N, (1 << 30) - 1);
        for (vector<int> edge : edges) {
            int u = edge[0], v = edge[1], k = edge[2];
            adj[u].pb(v);
            adj[v].pb(u);
            c[u] = c[u] & k;
            c[v] = c[v] & k;
        }
        queue<int> q;
        vector<int> group(N, -1);
        for (int i = 0; i < N; i++) {
            if (group[i] == -1) {
                group[i] = i;
                q.push(i);
                while (!q.empty()) {
                    int u = q.front(); q.pop();
                    c[i] = c[i] & c[u];
                    for (int v : adj[u]) {
                        if (group[v] == -1) {
                            group[v] = i;
                            q.push(v);
                        }
                    }
                }
            }
        }
        vector<int> res;
        for (vector<int> query : queries) {
            int s = query[0], t = query[1];
            if (s == t) {
                res.pb(0);
            } else {
                if (group[s] == group[t]) {
                    res.pb(c[group[s]]);
                } else {
                    res.pb(-1);
                }
            }
        }
        return res;
    }
};
