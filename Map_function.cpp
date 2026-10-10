#include <iostream>
#include<vector>
#include <map>
using namespace std;

int main()
{
    map<int, int> mp;
    vector<int> arr = {4, 2, 7, 2, 4, 2, 7, 9};
    
    for(int i=0; i<arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    for (auto x : mp)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}