// Cho kí tự là chữ cái in hoa hoặc in thường, in ra kí tự kế tiếp sau nó trong bảng chữ cái ở dạng in thường, tức là kí tự nhập vào ở dạng in hoa hay in thường thì bạn đều in ra kí tự kế tiếp nó nhưng ở dạng in thường. Coi kí tự kế tiếp của của chữ Z là chữ A.

// Input Format

// 1 dòng chứa kí tự c

// Constraints

// c là chữ cái in hoa hoặc in thường

// Output Format

// In ra chữ cái kế tiếp ở dạng in thường

// Sample Input 0

// A
// Sample Output 0

// b
// Sample Input 1

// z
// Sample Output 1

// a

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char c;
    cin >> c;
    if (c >= 65 && c < 90)
    {
        char kq1 = c + 33;
        cout << kq1 << endl;
    }
    else if (c == 90)
    {
        char kq2 = c - 25;
        cout << kq2 << endl;
    }
    else if (c >= 97 && c < 122)
    {
        char kq3 = c + 1;
        cout << kq3 << endl;
    }
    else if (c == 122)
    {
        char kq4 ='a';
        cout << kq4 << endl;
    }
}