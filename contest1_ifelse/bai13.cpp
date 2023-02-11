// Cho trước N ngày, hãy đổi N thành số năm, số tuần và số ngày. Biết rằng một năm có 365 ngày.

// Input Format

// Số nguyên không âm N

// Constraints

// 0<=N<=1000000

// Output Format

// In ra số năm, tuần, ngày tương ứng với N ngày

// Sample Input 0

// 373
// Sample Output 0

// 1 1 1

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x = n / 365;
    int x1 = n % 365;
    int y = x1 / 7;
    int y1 = x1 % 7;
    cout << x << " " << y << " " << y1 << endl;
}