// Cho kí tự c, nếu kí tự c là chữ cái in thường thì chuyển nó thành chữ cái in hoa tương ứng và ngược lại nếu c là chữ cái in hoa thì chuyển nó thành chữ cái in thường tương ứng. Trường hợp kí tự nhập vào không phải là chữ cái thì không thay đổi nó.

// Input Format

// 1 dòng chứa kí tự c

// Constraints

// c có thể là chữ in hoa, in thường, chữ số hoặc kí tự đặc biệt.

// Output Format

// In ra kết quả theo yêu cầu

// Sample Input 0

// e
// Sample Output 0

// E
// Sample Input 1

// $
// Sample Output 1

// $

#include<math.h>
#include<iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
    if (c >= 65 && c <= 90)
    {
        char kq = c + 32;
        cout << kq << endl;
    }else if (c >= 97 && c <= 122)
    {
        char kq1 = c - 32;
        cout << kq1 << endl;
    }else cout << c << endl;
}