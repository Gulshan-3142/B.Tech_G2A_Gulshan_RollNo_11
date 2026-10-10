#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int bestPrice(vector<int> arr)
{
    int n = arr.size();
    int maxPric = 0;
    int minPric = INT_MAX;
    int profit = 0;

    for (int i = 0; i < n; i++)
    {
        if (minPric > arr[i])
        {
            minPric = arr[i];
            continue;
        }

        maxPric = arr[i] - minPric;
        if (maxPric > profit)
        {
            profit = maxPric;
        }
    }

    return profit;
}

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << bestPrice(arr);

    return 0;
}