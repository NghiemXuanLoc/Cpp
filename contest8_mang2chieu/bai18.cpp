// Cho ma trận A các số nguyên có N hàng và M cột. Điểm được coi là cực đại trong ma trận nếu nó lớn hơn tất các số ở các số ở ô xung quanh mà chung đỉnh với nó. Hãy đếm xem trong ma trận có bao nhiêu điểm cực đại.

// Input Format

// Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

// Constraints

// 1≤N,M≤100; 1≤A[i][j]≤10^9

// Output Format

// In ra số lượng các điểm cực đại của ma trận.

// Sample Input 0

// 5 3
// 1 1 2
// 1 1 1
// 1 1 2
// 2 2 1
// 2 1 2
// Sample Output 0

// 1
// Explanation 0

// Có 1 điểm cực đại là điểm (1, 3)

// Sample Input 1

// 3 3
// 1 2 1
// 1 5 1
// 1 0 3
// Sample Output 1

// 1
// Explanation 1

// Có 1 điểm cực đại là (2, 2)

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ok = 1;
            for (int k = 0; k < 8; k++)
            {
                int i1 = i + dx[k];
                int j1 = j + dy[k];
                if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] >= a[i][j])
                {
                    ok = 0;
                    break;
                }
            }
            if (ok == 1)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}