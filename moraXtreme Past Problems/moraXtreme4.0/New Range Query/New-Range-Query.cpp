#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, q;
    cin >> n, cin.ignore(), cin >> m, cin.ignore(), cin >> q;
    pair<int,int> nums[n+1];


    for (int i = 0; i < m; i++)
    {
        int m_i;
        cin >> m_i;
        nums[m_i].first++;
    }
    nums[n].second = m;
    for (int i = n-1; i > 0; i--)
    {
        nums[i].second = m - nums[i+1].first;
        m = m - nums[i+1].first;
    }
    for (int i = 0; i < q; i++)
    {
        int n1,n2;
        cin >> n1,cin.ignore(), cin >> n2,cin.ignore();
        cout << nums[n2].second - nums[n1-1].second  << endl;
    }
    return 0;
}
