#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Frequency count without using map
void freqCount(vector<int> arr)
{
    vector<int> visited;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        bool visite = false;

        for (int j = 0; j < visited.size(); j++)
        {
            if (arr[i] == visited[j])
            {
                visite = true;
                break;
            }
        }

        if (visite)
        {
            continue;
        }

        int count = 0; // count frequency
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        visited.push_back(arr[i]);
        cout << arr[i] << " is present: " << count << endl;
    }
}

// using map
void mapFuntion(vector<int> arr)
{
    map<int, int> mp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto x : mp)
    {
        cout << x.first << " -> " << x.second << endl;
    }
}
int main()
{
    vector<int> arr = {4, 2, 7, 2, 4, 2, 7, 9};
    // freqCount(arr);
    mapFuntion(arr);

    return 0;
}