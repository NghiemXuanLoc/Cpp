// Một số được coi là số đẹp khi nếu nó chia hết cho một số nguyên tố nào đó thì cũng phải chia hết cho bình phương của số nguyên tố đó. Viết chương trình liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a≤b≤10^6

// Output Format

// In ra các số đẹp trong đoạn từ a tới b

// Sample Input 0

// 3 49
// Sample Output 0

// 4 8 9 16 25 27 32 36 49

#include <iostream>
#include <math.h>

using namespace std;

// ham kiem tra so dep

int check(int n)
{
    int dem = 0;
    int nho = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        if (n % i == 0)
        {
            nho++;
        }

        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt >= 2)
        {
            dem++;
        }
    }
    if (n != 1)
    {
        dem = 0;
        nho = 1;
    }

    return nho == dem;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (check(i))
        {
            cout << i << " ";
        }
    }
    //cout << check(29);
}