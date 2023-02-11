// Bạn có số lượng xu không giới hạn với các giá trị 1,2,3,……n (từ 1 tới n). Bạn muốn chọn một số bộ tiền có tổng giá trị S. Nó được phép có nhiều đồng tiền có cùng giá trị trong tập hợp. Số lượng đồng xu tối thiểu cần thiết để có được tổng S là bao nhiêu?

// Input Format

// Dòng duy nhất của đầu vào chứa hai số nguyên n và S

// Constraints

// 1<=n<=10^6; 1<=S<=10^12

// Output Format

// In chính xác một số nguyên - số lượng xu tối thiểu cần thiết để có được tổng S.

// Sample Input 0

// 5 11
// Sample Output 0

// 3

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    int count = 0;
    for (int i = n; i >= 1; i--)
    {
        while (s - i >= 0)
        {
            s -= i;
            count++;
        }
    }
    cout << count << endl;
}