// Cho 4 số nguyên a, b, c, d. Hãy tìm số lớn nhất và nhỏ nhất trong 4 số này.

// Input Format

// 4 số a, b, c, d viết trên 1 dòng và cách nhau một dấu cách.

// Constraints

// 1<=a,b,c,d<=10^18

// Output Format

// In ra số lớn nhất và nhỏ nhất.

// Sample Input 0

// 546 272 839 508
// Sample Output 0

// 839 272

#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long max, min;
    max = a;
    min = d;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    if (max < d)
    {
        max = d;
    }
    cout << max << " ";
    if (min > c)
    {
        min = c;
    }
    if (min > b)
    {
        min = b;
    }
    if (min > a)
    {
        min = a;
    }
    cout << min << endl;
}