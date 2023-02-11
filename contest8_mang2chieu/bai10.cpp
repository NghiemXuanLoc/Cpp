// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số nguyên tố trên đường chéo chính và đường chéo phụ, mỗi giá trị là số nguyên tố thỏa mãn chỉ đếm 1 lần.

// Input Format

// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Constraints

// 1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9;

// Output Format

// In ra số lượng số nguyên tố trên đường chéo chính và phụ.

// Sample Input 0

// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output 0

// 3

#include <iostream>
#include <math.h>
#include <set>

using namespace std;

// viet ham so nguyen to

bool nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

int main()
{
    set<int> se;

    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && nt(a[i][j])) // so nguyen to tren duong cheo chinh
            {
                se.insert(a[i][j]);
            }
            if ((j == n - i - 1) && nt(a[i][j])) // so nguyen to tren duong cheo phu
            {
                se.insert(a[i][j]);
            }
        }
    }
    cout << se.size() << endl;
}