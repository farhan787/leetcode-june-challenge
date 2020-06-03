// Problem Link => https://leetcode.com/problems/two-city-scheduling/

#include <iostream>
#include <vector>

using namespace std;

// Time complexity = O(N * log(N))
// Space complexity = O(N)  for sorting
int twoCitySchedCost(vector<vector<int>>& costs) {
    int cost = 0;
    const int N = (int)costs.size();

    sort(costs.begin(), costs.end(), [](vector<int>& cost1, vector<int>& cost2) {
        return cost1[1] - cost1[0] < cost2[1] - cost2[0];
    });

    for (int i = 0; i < N; i++) {
        if (i >= N / 2) cost += costs[i][0];
        else cost += costs[i][1];
    }
    return cost;
}

int main() {
}
