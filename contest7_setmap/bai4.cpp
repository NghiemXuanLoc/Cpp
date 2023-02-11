// Cho dãy số A[] gồm có N phần tử, có 2 thao tác như sau : Thao tác 1 : Thêm 1 phần tử X vào mảng. Thao tác 2 : Xóa 1 phần tử X khỏi mảng. Trong trường hợp phần tử X không xuất hiện trong mảng, sẽ không thực hiện xóa, nếu trong mảng có nhiều phần tử X thì chỉ xóa đi 1 phần tử X trong mảng. Thao tác 3 : Truy vấn xem phần tử X có xuất hiện trong mảng hay không? Ban đầu mảng A có N phần tử, với các truy vấn phần tử X trong mảng, in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng thứ 2 gồm N số nguyên A[i]. Dòng thứ 3 là số lượng thao tác Q. Q dòng tiếp theo mỗi dòng là thông tin của một thao tác, gồm 2 số, số đầu tiên là loại thao tác, số tiếp theo là phần tử X trong thao tác.

// Constraints

// 1≤ N ≤ 10^4; 0 ≤ A[i], X ≤ 10^9; 1≤ Q ≤ 1000; 0 ≤ X ≤ 10^9;

// Output Format

// Đối với mỗi thao tác loại 3, in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.

// Sample Input 0

// 6
// 1 2 3 4 5 6
// 4
// 1 1
// 2 6
// 3 1
// 3 6
// Sample Output 0

// YES
// NO

#include <iostream>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    multiset<int> se;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        se.insert(y);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, x;
        cin >> a >> x;
        if (a == 1)
        {
            se.insert(x);
        }
        else if (a == 2)
        {
            auto it = se.find(x);
            if (it != se.find(x))
            {
                se.erase(it);
            }
        }
        else
        {
            if (se.find(x) == se.end())
            {
                cout << "NO";
            }
            else
                cout << "YES";
            cout << endl;
        }
    }
}
