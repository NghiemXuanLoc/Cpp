// do phuc tap thuat toan O(n^2)
// tu tuong bai toan : co gang chen 1 phan tu vao vi tri hop li trong mang sao cho khong
// co phan tu nao lon hon dung truoc phan tu do

#include <iostream>
#include <math.h>
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
    for (int i = 1; i < n; i++)
    {
        int pos = i - 1, x = a[i];
        while (pos >= 0 && a[pos] > x)
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}