#include<iostream>
#include <fstream>
#include<string>

using namespace std;

int main(){
    ofstream out;
    out.open("0.loc");
    for (int i = 0; i < 100; i++)
    {
        out << i << " ";
    }
    
    out.close();
}