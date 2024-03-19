#include <bits/stdc++.h>
using namespace std;

void s()
{
    vector<int> ans;
    int q,tmp=1;
    cin >> q;
    while (q)
    {
        if (q%10 != 0)
        {
            ans.push_back(q%10*tmp);
        }
        q/=10;
        tmp*=10;
    }
    cout << ans.size() << endl;
    for (int w: ans)
        cout << w << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--) s();
}
