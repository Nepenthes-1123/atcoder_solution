#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
    vector<vector<char>> table(N, vector<char>(N, '-'));

    for (int i = 0; i < M; i++) {
        table.at(A.at(i) - 1).at(B.at(i) - 1) = 'o';
        table.at(B.at(i) - 1).at(A.at(i) - 1) = 'x';
    }

    for (vector<char> col : table) {
        for (int i = 0; i < N; i++) {
            cout << col.at(i);
            if (i != N - 1) cout << " ";
        }
        cout << endl;
    }
}
