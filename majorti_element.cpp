#include <iostream>
#include <vector>
#include <map>
using namespace std;

// mapping method use to find majority element in give vector
int findMajorty(vector<int> nums)
{
    int maj = nums.size() / 2;
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    for (auto x : mp)
    {
        if (x.second > maj)
        {
            return x.first;
        }
    }

    return -1;
}

int findMaj(vector<int> nums)
{
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
        }

        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return candidate;
}
int main()
{
    vector<int> arr = {1, 2, 3, 2, 3, 3, 3, 3};
    cout << findMajorty(arr);

    return 0;
}
