#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

bool cmp(string a, string b){
    if (a.size() != b.size())
    {
        return a.size() > b.size();
    }else return a > b;
    
}

int main()
{
    string s;
    cin >> s;
    s += 'a';
    vector<string> v;
    vector<long long> v1;
    string temp = "";
  
    for(char x : s){
        if (isdigit(x))
        {
            temp += x;
        }else {
          
              while ((temp.size() > 1) && (temp[0] == '0'))
           {
                temp.erase(0, 1);
           }
            if (temp != "")
            {
                v.push_back(temp);
            }
            temp = "";
        }
        
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        v1.push_back(stoll(v[i]));
    }
    
    sort(v1.begin(), v1.end(), greater<long long>());
    cout << v1[0] << endl;
}