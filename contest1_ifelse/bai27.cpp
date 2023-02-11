// Cho một số thực a, hãy tìm số nguyên gần a nhất. Trong trường hợp phần thực của a = 0.5 thì làm trong xuống

// Input Format

// Số thực a

// Constraints

// 0<=a<=10^6

// Output Format

// Số nguyên gần với a nhất

// Sample Input 0

// 15.2
// Sample Output 0

// 15

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    float a;
    cin >> a;
    float b;
    double x = ceil(a);
    double l = floor(a);
    b = (a - (int)a)*10;
    if (b <= 5)
    {
        cout << l << endl;
    }else cout << x << endl;
    
    return 0;
}