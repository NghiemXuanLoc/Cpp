// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm cặp 2 phần tử(không xét đến thứ tự) trong mảng có tổng bằng K cho trước.

// Input Format

// Dòng đầu tiên là N và K: số lượng phần tử trong mảng và số nguyên K; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=1000; 0<=A[i], K<=1000;

// Output Format

// In ra số lượng cặp số có tổng bằng K

// Sample Input 0

// 98 95
// 60 74 43 51 37 27 43 55 14 71 1 56 93 22 48 67 76 3 55 60 15 65 52 99 96 82 37 53 37 13 33 87 74 60 38 59 76 27 21 10 21 8 27 89 97 31 47 28 95 56 79 8 61 6 96 57 93 2 88 71 84 52 2 28 82 25 57 94 10 99 5 92 35 41 62 35 89 54 61 43 69 63 8 68 21 18 57 34 39 2 10 55 80 85 59 35 87 49
// Sample Output 0

// 58

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) == k)
            {
                dem++;
            }
        }
    }
    cout << dem << endl;
}