// Cho hai dãy số nguyên dương A và B. Hãy trộn hai dãy với nhau sao cho dãy A được đưa vào các vị trí có chỉ số chẵn, dãy B được đưa vào các vị trí có chỉ số lẻ. Đồng thời, dãy A được sắp xếp tăng dần, còn dãy B được sắp xếp giảm dần. (Chú ý: chỉ số tính từ 0)

// Input Format

// Dòng đầu tiên ghi số n là số lượng phần tử của 2 dãy. Dòng tiếp theo ghi n số nguyên dương của dãy A. Dòng tiếp theo ghi n số nguyên dương của dãy B.

// Constraints

// 1≤n≤10^5; 1≤ai,bi≤10^9

// Output Format

// In ra kết quả theo yêu cầu của bài toán

// Sample Input 0

// 4
// 4 2 7 1
// 5 6 2 8
// Sample Output 0

// 1 8 2 6 4 5 7 2

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n + n], k = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    for (int i = 0; i < n + n; i++)
    {
        if (i % 2 == 0)
        {
            c[i] = a[k++];
        }
        else
            c[i] = b[j++];
    }
    for (int i = 0; i < n + n; i++)
    {
        cout << c[i] << " ";
    }
}