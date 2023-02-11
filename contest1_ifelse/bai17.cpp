// Yêu cầu: Cho biết điểm kiểm tra Tin học của 1 em học sinh (2 con điểm hệ số 1, 1 con điểm hệ số 2, 1 con điểm hệ số 3). In ra Kết quả học tập môn Tin học của em đó. Nếu điểm tổng kết >=8 đạt kết quả Giỏi, <8 và >=6,5 đạt kết quả Khá, <6,5 và >=5 đạt kết quả Trung Bình, <5 đạt kết quả Yếu.

// Input Format

// Một dòng chứa 4 số điểm của học sinh.

// Constraints

// Điểm là số thực từ 0 tới 10.

// Output Format

// Kết quả học tập môn Tin học của em học sinh ở dạng in hoa không dấu

// Sample Input 0

// 9 8 7 8.5
// Sample Output 0

// GIOI
// Sample Input 1

// 5 7 6.5 5
// Sample Output 1

// TRUNG BINH

#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double hs3, hs2, hs1, hs12;
    cin >> hs1 >> hs12 >> hs2 >> hs3;
    double kq = (hs1 + hs12 + hs2 * 2 + hs3 * 3) / (double)7;
    if (kq >= 8)
    {
        cout << "GIOI" << endl;
    }
    else if (kq < 8 && kq >= 6.5)
    {
        cout << "KHA" << endl;
    }
    else if (kq >= 5 && kq < 6.5)
    {
        cout << "TRUNG BINH" << endl;
    }
    else
        cout << "YEU" << endl;
}