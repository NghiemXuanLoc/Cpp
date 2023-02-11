// Cho mảng các số nguyên không âm gồm n phần tử, thực hiện đếm tần suất xuất hiện của các phần tử và in theo mẫu.

// Input Format

// Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

// Constraints

// 2≤n≤10^6; 0≤ai≤10^7

// Output Format

// In ra tần suất xuất hiện của các phần tử theo thứ tự từ nhỏ tới lớn sau đó bỏ trống 1 dòng và in ra tần suất xuất hiện của các phần tử theo thứ tự xuất hiện trong mảng(mỗi giá trị chỉ liệt kê 1 lần).

// Sample Input 0

// 8
// 2 1 2 3 4 8 2 3
// Sample Output 0

// 1 1
// 2 3
// 3 2
// 4 1
// 8 1

// 2 3
// 1 1
// 3 2
// 4 1
// 8 1

#include <iostream>

using namespace std;
 int dem[10000001] = {0};
int main()
{
    int n;
    cin >> n;
    int a[n];
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (max_val < a[i])
        {
            max_val = a[i];
        }
    }
    for (int i = 0; i <= max_val; i++)
    {
        if (dem[i] != 0)
        {
            cout << i << " " << dem[i] << endl;
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (dem[a[i]] != 0)
        {
            cout << a[i] << " " << dem[a[i]] << endl;
            dem[a[i]] = 0;
        }
    }
}