// Tìm ước số nguyên tố lớn nhất của một số nguyên dương.

// Input Format

// Dòng đầu tiên là số lượng test case T T dòng tiếp theo mỗi dòng là một số nguyên dương N

// Constraints

// 1≤T≤500; 2≤N≤10000000

// Output Format

// Ước số nguyên tố lớn nhất của n in ra mỗi test case trên 1 dòng

// Sample Input 0

// 2
// 10
// 17
// Sample Output 0

// 5
// 17

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// tim thua so nguyen to cuoi cung cua 1 so
int check1(int n)
{
    int nho = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            nho = i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        nho = n;
    }
    return nho;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << check1(n) << endl;
    }
}