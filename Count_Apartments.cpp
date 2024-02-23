#include <bits/stdc++.h>

using namespace std;

int n, m;
char a[20][20];
bool visited[20][20];

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void dfs(int x, int y) {
  visited[x][y] = true;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (0 <= nx && nx < n && 0 <= ny && ny < m && a[nx][ny] == '.' && !visited[nx][ny]) {
      dfs(nx, ny);
    }
  }
}

int main() {
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  int apartmentCount = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == '.' && !visited[i][j]) {
        dfs(i, j);
        apartmentCount++;
      }
    }
  }

  cout << apartmentCount << endl;

  return 0;
}
