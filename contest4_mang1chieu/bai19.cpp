// Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn tìm ra độ dài của dãy con liên tiếp các phần tử sao cho các phần tử liền kề nhau trong dãy con đều khác nhau. Nếu có nhiều dãy con thỏa mãn, hay in ra dãy con có tổng lớn nhất.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i], các phần tử trong mảng được sắp xếp theo thứ tự không giảm.

// Constraints

// 1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^6

// Output Format

// In ra đáp án của bài toán trên 2 dòng. Dòng đầu tiên là độ dài của dãy con dài nhất. Dòng thứ 2 là các phần tử trong dãy con đó.

// Sample Input 0

// 8
// 1 2 3 4 4 5 6 7
// Sample Output 0

// 4
// 4 5 6 7

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// ham tim so luong phan tu khac nhau trong mang

int check(int a[], int n, int &k)
{

    int min_val = INT_MAX;
    int dem = 0;

    for (int i = k; i < n; i++)
    {
        if (min_val != a[i])
        {
            min_val = a[i];
            dem++;
            k = i;
            // cout << a[i] << " ";
        }
        else
            break;
    }
    // cout << dem << endl;
    return dem++;
}

// ham tinh tong cac so trong day con tang lien tiep

int check2(int a[], int n)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int max_val = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int abc = check(a, n, i);
        if (max_val < abc)
        {
            max_val = abc;
        }
    }
    int c;
    for (int i = 0; i < n; i++)
    {
        int temp = i;
        if (check(a, n, temp) == max_val)
        {
            c = i;
        }
    }
    // cout << c << endl;
    cout << max_val << endl;
    for (int i = c; i < c + max_val; i++)
    {
        cout << a[i] << " ";
    }
}