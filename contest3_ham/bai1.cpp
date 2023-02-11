// Cho số nguyên n không âm. Viết hàm xử lý các yêu cầu sau
// 1. Kiểm tra n là số nguyên tố, nếu đúng in 1, sai in 0.
// 2. In tổng chữ số của n.
// 3. In tổng chữ số chẵn của n.
// 4. In tổng chữ số của n là số nguyên tố.
// 5. In số lật ngược của n. Ví dụ 123 in 321.
// 6. In số lượng ước của n là số nguyên tố (làm tương tự như phân tích thừa số ng tố).
// 7. In ước nguyên tố lớn nhất của n (làm tương tự như phân tích thừa số ng tố).
// 8. Kiểm tra nếu n tồn tại ít nhất 1 số 6, nếu đúng in 1, sai in 0.
// 9. Kiểm tra nếu tổng chữ số của n chia hết cho 8, nếu đúng in 1, sai in 0.
// 10. Tính tổng giai thừa các chữ số của n và in ra. Ví dụ n = 123, tổng = 1! + 2! +3!
// 11. Kiểm tra n có phải chỉ được tạo bởi 1 số hay không? Ví dụ 222, 333, 99999. Đúng in ra 1, sai in ra 0.
// 12. Kiểm tra n có phải có chữ số tận cùng là lớn nhất hay không, tức là không có chữ số nào của n lớn hơn chữ số hàng đơn vị của nó. nếu đúng in 1, sai in 0.
// 13. In tổng lũy thừa chữ số của n với cơ số là số chữ số. ví dụ 123 thì tính 1^3+2^3+3^3.

// Input Format

// Số duy nhất n

// Constraints

// 0<=n<=1000;

// Output Format

// In ra 13 dòng tương ứng với các yêu cầu ở trên.

// Sample Input 0

// 36
// Sample Output 0

// 0
// 9
// 6
// 3
// 63
// 2
// 3
// 1
// 0
// 726
// 0
// 1
// 45

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// check 1
bool check1(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

// check 2

int check2(int n)
{
    int sum = 0;
    while (n)
    {
        int res = n % 10;
        sum += res;
        n /= 10;
    }
    return sum;
}

// check 3

int check3(int n)
{
    int sum = 0;
    while (n)
    {
        int res = n % 10;
        if (res % 2 == 0)
        {
            sum += res;
        }
        n /= 10;
    }
    return sum;
}

// check 4

int check4(int n)
{
    int sum = 0;
    while (n)
    {
        int res = n % 10;
        if (res == 2 || res == 3 || res == 5 || res == 7)
        {
            sum += res;
        }
        n /= 10;
    }
    return sum;
}

// check 5

int check5(int n)
{
    int lat = 0;
    while (n)
    {
        int res = n % 10;
        lat = lat * 10 + res;
        n /= 10;
    }
    return lat;
}

// check 6

int check6(int n)
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (check1(i))
            {
                dem++;
            }
        }
    }
    return dem;
}

// check 7

int check7(int n)
{
    int nho = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (check1(i))
            {
                nho = i;
            }
        }
    }
    return nho;
}

// check 8

bool check8(int n)
{
    while (n)
    {
        int res = n % 10;
        if (res == 6)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

// check 9

bool check9(int n)
{
    int sum = 0;
    while (n)
    {
        int res = n % 10;
        sum += res;
        n /= 10;
    }
    if (sum % 8 == 0)
    {
        return true;
    }
    else
        return false;
}

// check 10

int check10(int n)
{
    int sum = 0;
    while (n)
    {
        int sum1 = 1;
        int res = n % 10;
        for (int i = 1; i <= res; i++)
        {
            sum1 *= i;
        }
        sum += sum1;
        n /= 10;
    }
    return sum;
}

// check 11

bool check11(int n)
{
    int temp = n % 10;
    if (n < 10)
    {
        return true;
    }
    else
    {
        while (n >= 10)
        {
            n /= 10;
            int res = n % 10;
            if (res != temp)
            {
                return false;
            }
        }
    }

    return true;
}

// check 12

bool check12(int n)
{
    int temp = n % 10;
    while (n)
    {
        n /= 10;
        int res = n % 10;
        if (res > temp)
        {
            return false;
        }
    }
    return true;
}

// check 13

int check13(int n)
{
    int dem = 0;
    int tam = n;
    while (tam)
    {
        dem++;
        tam /= 10;
    }

    ll sum = 0;
    while (n)
    {
        int res = n % 10;
        int a = pow(res, dem);
        sum += a;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
     cin >> n;

    if (check1(n)) // check 1
    {
        cout << "1" << endl;
    }
    else
        cout << "0" << endl;

    cout << check2(n) << endl; // check 2

    cout << check3(n) << endl; // check 3

    cout << check4(n) << endl; // check 4

    cout << check5(n) << endl; // check 5

    cout << check6(n) << endl; // check 6

    cout << check7(n) << endl; // check 7

    if (check8(n))
    {
        cout << "1" << endl;
    }
    else
        cout << "0" << endl;

    if (check9(n))
    {
        cout << "1" << endl;
    }
    else
        cout << "0" << endl;

    cout << check10(n) << endl;

    if (check11(n))
    {
        cout << "1" << endl;
    }
    else
        cout << "0" << endl;

    if (check12(n))
    {
        cout << "1" << endl;
    }
    else
        cout << "0" << endl;

    cout << check13(n) << endl;
}