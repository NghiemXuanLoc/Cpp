// Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8. Viết chương trình liệt kê các số đẹp trong đoạn giữa 2 số nguyên cho trước, các số cách nhau một dấu cách.

// Input Format

// 2 số nguyên a, b

// Constraints

// 1≤a≤b≤10^6

// Output Format

// Liệt kê các số đẹp trong đoạn, các số viết cách nhau một khoảng trống

// Sample Input 0

// 1 400
// Sample Output 0

// 161

#include <iostream>
#include <math.h>

using namespace std;

// ham kiem tra so thuan nghich

bool check1(int n)
{
    int nho = n;
    int temp = 0;
    while (nho)
    {
        int res = nho % 10;
        temp = temp * 10 + res;
        nho /= 10;
    }
    return temp == n;
}

// ham kiem tra chu so 6

bool check2(int n)
{
    while (n)
    {
        int res = n % 10;
        if (res == 6)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

// kiem tra tong chu so cuoi cung

bool check3(int n)
{
    int sum = 0;
    while (n)
    {
        int res = n % 10;
        sum += res;
        n /= 10;
    }
    int temp = sum % 10;
    return temp == 8;
}

int main()
{   //cout << check3(161) << endl;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (check1(i) && check3(i) && check2(i))
        {
            cout << i << " ";
        }
    }
}