// Cho một dãy số nguyên chưa biết trước số lượng phần tử, hãy đếm tần xuất hiện của các số nguyên tố trong dãy và in ra theo thứ tự xuất hiện trong dãy

// Input Format

// Gồm nhiều dòng chưa các số nguyên trong dãy

// Constraints

// Dãy không quá 10000 số nguyên không âm. Các số trong dãy là số nguyên không âm không quá 10^9

// Output Format

// In ra các số nguyên tố trong dãy kèm theo tần suất của nó.

// Sample Input 0

// 2 3 5 3 2 5 1
// Sample Output 0

// 2 2
// 3 2
// 5 2

#include<iostream>
#include<math.h>

using namespace std;

long long a[100001];

long long snt(long long n){
    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0)return 0;
    }
    return n > 1;
}
int main(){
    int n = 0;
    long long x;
    while(cin >> x){
        if(snt(x)){
            a[n++] = x;
        }
    }
    for(int i = 0;i < n;i++){
        int check = 0;
        for(int j = 0;j < i;j++){
            if(a[i] == a[j])check = 1;
        }
        if(check == 0){
            int dem = 1;
            for(int j = i+1;j < n;j++){
                if(a[i] == a[j])dem++;
            }
            cout << a[i] << " " << dem << endl;
        }
    }
}