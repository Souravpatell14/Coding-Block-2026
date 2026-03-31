#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int money;
        cin >> money;

        sort(arr.begin(), arr.end());

        int left = 0, right = n - 1;
        int ans1 = 0, ans2 = 0;
        int minDiff = INT_MAX;

        while(left < right)
        {
            int sum = arr[left] + arr[right];

            if(sum == money)
            {
                if(arr[right] - arr[left] < minDiff)
                {
                    minDiff = arr[right] - arr[left];
                    ans1 = arr[left];
                    ans2 = arr[right];
                }
                left++;
                right--;
            }
            else if(sum < money)
                left++;
            else
                right--;
        }

        cout << "Deepak should buy roses whose prices are "
             << ans1 << " and " << ans2 << "." << endl;

        if(t)
            cout << endl;
    }

    return 0;
}