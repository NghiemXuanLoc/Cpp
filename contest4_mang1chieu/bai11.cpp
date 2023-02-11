// Cho mảng số nguyên A[] gồm N phần tử, hãy thực hiện các yêu cầu :

// Liệt kê các giá trị xuất hiện trong mảng và tần suất tương ứng theo thứ tự xuất hiện.
// Liệt kê các giá trị xuất hiện trong mảng và tần suất tương ứng theo thứ tự từ nhỏ tới lớn.
// Tìm số có số lần xuất hiện nhiều nhất, nếu có nhiều số có cùng số lần xuất hiện thì chọn số lớn hơn.
// Tìm số có số lần xuất hiện ít nhất trong mảng, nếu có nhiều số có cùng số lần xuất hiện thì chọn số nhỏ hơn.
// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^3; 0<=A[i]<=1000;

// Output Format

// Những dòng đầu in ra yêu cầu 1 sau đó bỏ cách 1 dòng. Những dòng tiếp theo in ra yêu cầu 2 sau đó bỏ cách 1 dòng. 2 dòng cuối cùng in ra kết quả yêu cầu 3, 4. Xem ví dụ để rõ hơn về output

// Sample Input 0

// 13
// 660 133 177 168 602 422 716 595 614 626 576 53 550
// Sample Output 0

// 660 1
// 133 1
// 177 1
// 168 1
// 602 1
// 422 1
// 716 1
// 595 1
// 614 1
// 626 1
// 576 1
// 53 1
// 550 1

// 53 1
// 133 1
// 168 1
// 177 1
// 422 1
// 550 1
// 576 1
// 595 1
// 602 1
// 614 1
// 626 1
// 660 1
// 716 1

// 716
// 53

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int dem[10001] = {0};
    int dem2[10001] = {0};
    int dem3[10001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
        dem2[a[i]]++;
        dem3[a[i]]++;
    }

    // Liệt kê các giá trị xuất hiện trong mảng và tần suất tương ứng theo thứ tự xuất hiện.

    for (int i = 0; i < n; i++)
    {

        if (dem[a[i]] != 0)
        {
            cout << a[i] << " " << dem[a[i]] << endl;
            dem[a[i]] = 0;
        }
    }
    cout << endl;

    // Liệt kê các giá trị xuất hiện trong mảng và tần suất tương ứng theo thứ tự từ nhỏ tới lớn.

    for (int i = 0; i < 1000; i++)
    {
        if (dem2[i] != 0)
        {
            cout << i << " " << dem2[i] << endl;
        }
    }

    // Tìm số có số lần xuất hiện nhiều nhất, nếu có nhiều số có cùng số lần xuất hiện thì chọn số lớn hơn.
    int min_val = INT_MAX, max_val = INT_MIN, index_min, index_max;

    cout << endl;
    for (int i = 0; i < 1000; i++)
    {
        if (dem2[i] != 0)
        {
            if (dem2[i] >= max_val)
            {
                max_val = dem2[i];
               index_max = i;
            }
            if (dem2[i] < min_val)
            {
                min_val = dem2[i];
                index_min = i;
            }
        }
    }
    cout << index_max << endl
         << index_min << endl;
}