// Trong lớp có n sinh viên, muốn chọn ra 2 bạn sinh viên để tham gia cuộc thi khiêu vũ, hỏi có bao nhiêu cách?

// Input Format

// Số lượng sinh viên trong lớp N.

// Constraints

// 1<=N<=10^6

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 4
// Sample Output 0

// 6

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long x = 1ll*n*(n-1)/2;
    cout << x;
}