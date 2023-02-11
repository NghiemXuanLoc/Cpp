// Cho 2 số nguyên dương N và K. Hãy tính tổ hợp chập K của N. Tiện thể các bạn ôn lại một vài tính chất của tổ hợp chập K của N nhé.

// image

// Input Format

// 2 số nguyên dương N và K.

// Constraints

// 0≤k≤n≤10.

// Output Format

// Kết quả của tổ hợp chập K của N.

// Sample Input 0

// 10 2
// Sample Output 0

// 45

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// viet ham de quy tinh to hop chap k cua n

int check(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    else
        return check(n - 1, k - 1) + check(n - 1, k);
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << check(n, k) << endl;
}