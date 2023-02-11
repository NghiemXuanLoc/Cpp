// Cho mảng các số nguyên. Tìm phần tử lặp đầu tiên trong mảng.

// Input Format

// Dòng đầu tiên là số lượng phần tử trong mảng n. Dòng thứ 2 là các phần tử ai trong mảng .

// Constraints

// 1≤n≤1000000; 0≤ai≤10^6

// Output Format

// In ra số bị lặp đầu tiên trong mảng, nếu không có số nào bị lặp in ra -1.

// Sample Input 0

// 5
// 1 2 2 3 1
// Sample Output 0

// 2

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    int mang[1000001] = {0};
    int n;
    cin >> n;
    int a[n];
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        mang[a[i]]++;
        if (mang[a[i]] == 2)
        {
            cout << a[i] << endl;
            dem++;
            break;
        }
    }
    if (dem == 0)
    {
        cout << "-1" << endl;
    }
}
