// Ở bài tập này yêu cầu bạn kiểm tra số nguyên tố với nhiều trường hợp khác nhau.

// Input Format

// Dòng đầu tiên là số lượng test case T Mỗi test case là một số nguyên n

// Constraints

// 1≤T≤1000 0≤n≤10^6

// Output Format

// In ra kết quả mỗi test case trên một dòng. In YES nếu n là số nguyên tố, ngược lại in NO.

// Sample Input 0

// 20
// 364
// 12401
// 4152
// 4624
// 12783
// 1868
// 14521
// 24213
// 4740
// 19037
// 6992
// 9390
// 8929
// 27797
// 18685
// 13291
// 11424
// 10292
// 3534
// 30641
// Sample Output 0

// NO
// YES
// NO
// NO
// NO
// NO
// NO
// NO
// NO
// YES
// NO
// NO
// YES
// NO
// NO
// YES
// NO
// NO
// NO
// NO

#include <iostream>
#include <math.h>

using namespace std;

// sang so nguyen to

int mang[1000001];

void check()
{
    for (int i = 0; i <= 1000000; i++)
    {
        mang[i] = 1;
    }
    mang[0] = mang[1] = 0;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        for (int j = i * i; j <= 1000000; j += i)
        {
            mang[j] = 0;
        }
    }
}

int main()
{
    check();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (mang[n] == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}