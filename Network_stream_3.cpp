#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <functional>

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

int main()
{
    int t;
    cin >> t;
    int temp = t;
    for(int i = 1; i < temp; ++i)
    {
        cout << "-1";
        for(int j = 1; j < temp; ++j)
        {
            cout << " ";
        }
        cout << "-1" << endl;
    }
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int x,y,a,b;
        if(t == 0)
        {
            x = 1;
            y = 2;
            a = n;
            b = m;
            while(x != a)
            {
                cout << x;
                for(int i = 0; i < (temp - 1) * 2; ++i)
                {
                    cout << " ";
                }
                cout << y << endl;
                ++x;
                ++y;
            }
            cout << n;
            for(int i = 0; i < (temp - 1) * 2; ++i)
            {
                cout << " ";
            }
            cout << 1;
        }
    }
    return 0;
}
