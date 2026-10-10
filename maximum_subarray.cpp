#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// find maximum sum of subarray using brute-force approach
int MaxSubarray(vector<int> nums)
{
    int summax = INT_MIN;
    int cursum = 0;
    int n = nums.size();
    for (int st = 0; st < n; st++)
    {
        cursum = 0;
        for (int end = st; end < n; end++)
        {
            cursum = cursum + nums[end];
            summax = max(cursum, summax);
        }
    }

    return summax;
}

// using Kadane’s Algorithm
int maxSub(vector<int> arr)
{
    int curSum = 0;
    int maxSum = INT_MIN;

    for (int val : arr)
    {
        curSum += val;
        maxSum = max(curSum, maxSum);

        if (curSum < 0)
        {
            curSum = 0;
        }
    }

    return maxSum;
}
int main()
{
    vector<int> nums = {-1};
    // cout << MaxSubarray(nums);
    cout << maxSub(nums);

    return 0;
}