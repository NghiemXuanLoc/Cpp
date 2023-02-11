// Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chọn.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^3; 0<=A[i]<=10^9

// Output Format

// In ra các bước của thuật toán sắp xếp chọn

// Sample Input 0

// 4
// 5 7 3 2
// Sample Output 0

// Buoc 1: 2 7 3 5
// Buoc 2: 2 3 7 5
// Buoc 3: 2 3 5 7

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         int min_pos = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[min_pos] > a[j])
//             {
//                 min_pos = j;
//             }
//         }
//         swap(a[i], a[min_pos]);
//         cout << "Buoc " << i + 1 << ": ";
//         for (int i = 0; i < n; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
// }

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

    // cai dat thuat toan sap xep chon

    for (int i = 0; i < n - 1; i++)
    {
        int minpos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[minpos] > a[j])
            {
                minpos = j;
            }
        }
        swap(a[minpos], a[i]);

        cout << "Buoc " << i + 1 << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}