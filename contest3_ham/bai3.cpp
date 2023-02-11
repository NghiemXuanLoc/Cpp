// Một số được coi là thuần nguyên tố nếu nó là số nguyên tố, tất cả các chữ số là nguyên tố và tổng chữ số của nó cũng là một số nguyên tố. Bài toán đặt ra là đếm xem trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số thuần nguyên tố.

// Input Format

// Một dòng hai số nguyên dương tương ứng, cách nhau một khoảng trống.

// Constraints

// Các số đều không vượt quá 9 chữ số.

// Output Format

// Viết ra số lượng các số thuần nguyên tố tương ứng

// Sample Input 0

// 2345 6789
// Sample Output 0

// 15

/*
xay dung 3 ham
kiem tra so nguyen to
tat ca cac chu so la so nguyen to
tong cac chu so cung la mot so nguyen to
*/

#include <iostream>
#include <math.h>

using namespace std;

// ham kiem tra so nguyen to

bool check1(int n)
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

// ham kiem tra tat ca cac chu so la so nguyen to + kiem tra tong cac chu so co la so nguyen to hay khong

bool check2(int n)
{
    int sum = 0;
    while (n)
    {
        int res = n % 10;
        sum += res;
        if (res == 1 || res == 4 || res == 6 || res == 8 || res == 9 || res == 0)
        {
            return false;
        }
        n /= 10;
    }

    if (check1(sum))
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int a, b, dem = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (check2(i) && check1(i))
        {
            dem++;
        }
    }
    cout << dem << endl;
}