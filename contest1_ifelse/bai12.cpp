// Cho biết tháng và năm, hãy in ra số ngày tương ứng có trong tháng đó. Chú ý tháng 2 của năm nhuận có 29 ngày.

// Input Format

// 2 số nguyên t và n tương ứng với tháng và năm.

// Constraints

// 0<=t<=100; 0<=n<=5000;

// Output Format

// Nếu tháng là hợp lệ(tháng 1 tới 12) và năm là hợp lệ (lớn hơn 0) thì in ra số ngày tương ứng của năm đó, ngược lại in ra "INVALID".

// Sample Input 0

// 11 2021
// Sample Output 0

// 30
// nam nhuan la nam chia het cho 400 hoac chia het cho 4 nhung khong chia het cho 100

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t >> n;
    if (t >= 1 && t <= 12 && n > 0)
    {
        if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12)
        {
            cout << "31" << endl;
        }
        else if (t == 4 || t == 6 || t == 9 || t == 11)
        {
            cout << "30" << endl;
        }
        else if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
        {
            cout << "29" << endl;
        }
        else
            cout << "28" << endl;
    }
    else
        cout << "INVALID" << endl;
}