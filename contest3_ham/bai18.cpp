// Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau. Viết chương trình in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên cho trước

// Input Format

// 2 số a, b

// Constraints

// 1≤a≤b≤10^7

// Output Format

// In ra các số đẹp trong đoạn a, b. Trong trường hợp không tồn tại số đẹp nào thì in ra -1.

// Sample Input 0

// 1 1000
// Sample Output 0

// 66 222 252 282 414 434 444 474 494 525 555 585 595 606 616 636 646 666 696 777 828 858 868 888 969

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int check1(int n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        cnt++;
    }

    return cnt;
}

// ham kiem tra so dep

int check2(int n)
{
    int temp = 0;
    int nho = n;
    while (nho)
    {
        int res = nho % 10;
        temp = temp * 10 + res;
        nho /= 10;
    }
    return temp == n;
}

int main()
{
    int a, b, cnt = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (check2(i) == true && check1(i) >= 3)
        {
            cout << i << " ";
            cnt++;
        }
    }
    if (cnt == 0)
    {
        cout << "-1" << endl;
    }
}
