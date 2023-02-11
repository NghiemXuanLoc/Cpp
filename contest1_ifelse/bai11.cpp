// Cho 3 cạnh a, b, c của một tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1, tam giác cân thì in ra 2, tam giác vuông thì in ra 3, tam giác thường in ra 4, trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID".

// Input Format

// 1 dòng chứa 3 số a, b, c.

// Constraints

// 0<=a,b,c<=10^3

// Output Format

// In ra kết quả tương ứng.

// Sample Input 0

// 8 8 8
// Sample Output 0

// 1
// Sample Input 1

// 8 8 6
// Sample Output 1

// 2

#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double A = pow(a, 2), B = pow(b, 2), C = pow(c, 2);

    if (a + b > c && a + c > b && b + c > a)
    {
        if ((a == b) && (b == c))
        {
            cout << "1";
        }
        else
        {
            if (a == b || a == c || b == c)
            {
                cout << "2";
            }
            else
            {
                if (A == B + C || B == A + C || C == A + B)
                {
                    cout << "3";
                }
                else
                    cout << "4";
            }
        }
    }
    else
        cout << "INVALID";
        return 0;
}
