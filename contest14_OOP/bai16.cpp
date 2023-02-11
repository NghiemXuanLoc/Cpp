#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

bool cpm(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cpm);
    int cnt = 1;
    int res = a[0].second;
    for (int i = 1; i < n; i++)
    {
        if (res < a[i].first)
        {
            cnt++;
            res = a[i].second;
        }
    }
    cout << cnt << endl;
}