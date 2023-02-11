// Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự tăng dần, sau đó sắp xếp các phần tử theo thứ tự giảm dần.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^5; -10^9<=A[i]<=10^9

// Output Format

// Dòng đầu tiên in ra các phần tử trong mảng theo thứ tự tăng dần. Dòng thứ 2 in ra các phần tử trong mảng theo thứ tự giảm dần.

// Sample Input 0

// 5
// 1 4 2 5 3
// Sample Output 0

// 1 2 3 4 5
// 5 4 3 2 1

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    sort(a, a + n, greater<int>());
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}