#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> price(n);
    for(int i = 0; i < n; i++)
        cin >> price[i];

    int q;
    cin >> q;

    while(q--)
    {
        int A, k;
        cin >> A >> k;

        int countTypes = 0;

        for(int i = 0; i < n; i++)
        {
            if(A % price[i] == 0)
                countTypes++;
        }

        if(countTypes >= k)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}