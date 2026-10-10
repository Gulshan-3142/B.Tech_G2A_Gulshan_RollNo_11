#include <iostream>
#include <vector>
using namespace std;

// missing number find function for sorted list
int missingNumber(vector<int> arr)
{
    int n = arr.size();
    int j = 1;
    int i = 0;
    while (n != 0)
    {
        if (j != arr[i])
        {
            return j;
        }
        i++;
        j++;
        n--;
    }

    return j;
}

// Approach 1: Sum formula find missing number for unsorted array
void missNum(vector<int> arr)
{
    int n = arr.size();
    int sum = 0, i;

    i = n + 1;
    while (i != 0)
    {
        sum += i;
        i--;
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum - arr[i];
    }

    cout << "sum number: " << sum;
}

// Approach 3: XOR methode find missing number for unsorted array
void MissingNUM(vector<int> arr)
{
    int n = arr.size();
    int k = 0, xorall = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        k = k ^ i;
    }
    for (int i = 1; i <= n; i++)
    {
        xorall = arr[i - 1] ^ xorall;
    }

    xorall = xorall ^ k;

    cout << xorall;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 6};
    // cout << "missing number: " << missingNumber(arr);
    MissingNUM(arr);
    return 0;
}