#include <iostream>
#include <vector>
using namespace std;


vector<int> newArray(vector<int> nums)
{
    int n = nums.size();
    vector<int> arr(n, 1);
    int prod = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        arr[i] = prod;
        prod *= nums[i];
    }

    prod = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        arr[i] *= prod;
        prod = prod * nums[i];
    }

    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 0, 4};

    vector<int> arr1 = newArray(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}
