#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<vector<int>> &matrix, int k) {
    priority_queue<int> pq;
    int N = matrix.size();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N and k > 0; j++) {
            pq.push(matrix[i][j]);
            if (matrix[i][j] > pq.top())
                k--;
        }
    }
    while (pq.size() != k) {
        pq.pop();
    }
    return pq.top();
}

int main(int argc, char const *argv[]) {
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};
    cout << kthSmallest(matrix,10);
    return 0;
}
