// Cho số tự nhiên N. Nhiệm vụ của bạn là in ra ước số nguyên tố nhỏ nhất của các số từ 1 đến N. Ước số nguyên tố nhỏ nhất của 1 là 1. Ước số nguyên tố nhỏ nhất của các số chẵn là 2. Ước số nguyên tố nhỏ nhất của các số nguyên tố là chính nó.

// Input Format

// Một số N được ghi trên một dòng.

// Constraints

// 1≤N≤100000

// Output Format

// Đưa ra kết quả theo từng dòng

// Sample Input 0

// 6
// Sample Output 0

// 1
// 2
// 3
// 2
// 5
// 2

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

// phan tich thua so nguyen to voi so kh phai la so chan
int check2(int n)
{
    for (int i = 3; i <= sqrt(n) && (n % 2 != 0); i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return 0;
}

void check3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << "1" << endl;
        }
        else if (i % 2 == 0)
        {
            cout << "2" << endl;
        }
        else if (check1(i))
        {
            cout << i << endl;
        }
        else
            cout << check2(i) << endl;
    }
}

int main(){
    int n;
    cin >> n;
    check3(n);
}