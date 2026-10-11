#include <iostream>
#include <vector>
using namespace std;

void MoveZero(vector<int>& nums)
{
    int n = nums.size();

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            continue;
        }
        else
        {
            nums[j] = nums[i];
            j++;
        }
    }

    for (int i = j; i < n; i++)
    {
        nums[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12};
    MoveZero(arr);

    return 0;
}