#include <iostream>

using namespace std;

const int N = 10005;
int par[N];
int group_size[N];

void dsu_initialize(int n) {
    for (int i = 0; i < n; i++) {
        par[i] = -1;
        group_size[i] = 1;
    }
}

int find(int node) {
    if (par[node] == -1) return node;

    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void union_by_size(int node1, int node2) {
    int leaderA = find(node1);
    int leaderB = find(node2);

    if (group_size[leaderA] > group_size[leaderB]) {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    } else {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main() {
    int n;
    cin >> n;

    int totalDayNeeds = 0;
    pair<int, int> oldExtraEdge;
    dsu_initialize(n);

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;

        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB) {
            totalDayNeeds++;
            oldExtraEdge = make_pair(a, b);
        } else {
            union_by_size(a, b);
        }
    }

    vector<int> leaders;
    for (int i = 0; i < n; i++)
    {
        leaders.push_back(find(i));
    }

    sort(leaders.begin(), leaders.end());
    leaders.erase(unique(leaders.begin(), leaders.end()), leaders.end());

    for(int el: leaders) cout<<el<<" ";
    cout<<oldExtraEdge.first<< " "<<oldExtraEdge.second;
    

    return 0;
}