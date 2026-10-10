#include <iostream>
#include <vector>
#include <limits>
using namespace std;

vector<int> leader(vector<int> arr)
{
    vector<int> leadValue;
    int n = arr.size();
    int maxRight = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (maxRight< arr[i])
        {
            maxRight = arr[i];
            leadValue.push_back(maxRight);
        }
    }
    return leadValue;
}

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> ans = leader(arr);
    int n = ans.size();
    for (int i = n - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }

    return 0;
}