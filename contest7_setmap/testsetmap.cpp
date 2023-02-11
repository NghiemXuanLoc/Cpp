#include<iostream>
#include<math.h>
#include<algorithm>
#include<set>
#include<map>

using namespace std;

// int main(){
//     // set<int> se;
//     // se.insert(10);
//     // se.insert(5);
//     // se.insert(4);
//     // se.insert(1);
//     // se.insert(11);
    
//     // for(auto x : se){
//     //     cout << x << " ";
//     // }
//     // cout << endl;

//     // for (auto i = se.begin(); i != se.end(); i++)
//     // {
//     //     cout << *i << " ";
//     // }
    
//     // if (se.count(4) == 1)
//     // {
//     //     cout << "tim thay";
//     // }else cout << "khong tim thay";
//     // se.erase(1);
//     multiset<int> se;
//     se.insert(1);
//     se.insert(1);
//     cout << se.size() << endl;
// }

int main(){
    map<int, int> mp;
    mp.insert({1, 5});
    mp.insert({2, 7});
    cout << mp[9] << endl;
}