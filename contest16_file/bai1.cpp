#include <fstream>
#include <math.h>

using namespace std;

bool snt(int n)
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

int main()
{
    ifstream in;
    ofstream out;
    out.open("28tech_prime.txt");
    in.open("28tech_number.txt");
    int x;
    while (in >> x)
    {
        if(snt(x))
        out << x << " ";
    }
    
    in.close();
    out.close();
}