#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> findtarget(vector<int> arr, int target)
{
    int first, find;
    for (int i = 0; i < arr.size(); i++)
    {
        first = arr[i];
        find = target - first;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (find == arr[j])
            {
                return {i, j};
            }
        }
    }
    return {};
}

// using mapping methode
vector<int> findTarget(vector<int> arr, int target)
{
    unordered_map<int, int> mp;
    int needed;
    for (int i = 0; i < arr.size(); i++)
    {
        needed = target - arr[i];
        if (mp.find(needed) != mp.end())
        {
            return {mp[needed], i};
        }
        else
        {
            mp[arr[i]] = i;
        }
    }
    return {};
}

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    vector<int> result = findTarget(arr, 9);
    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}