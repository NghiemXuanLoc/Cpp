// Cho một dãy số nguyên dương có n phần tử. Hãy liệt kê số các phần tử trong dãy lớn hơn tất cả các số đứng trước nó (Phần tử đầu tiên được coi là một phần tử thỏa mãn).

// Input Format

// Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

// Constraints

// 2≤n≤10^6; 1≤ai≤10^9

// Output Format

// Liệt kê các số thỏa mãn

// Sample Input 0

// 6
// 2 6 1 3 9 9
// Sample Output 0

// 2 6 9
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d ", a[0]);
    int max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            printf("%d ", a[i]);
            max = a[i];
        }
    }

    return 0;
}