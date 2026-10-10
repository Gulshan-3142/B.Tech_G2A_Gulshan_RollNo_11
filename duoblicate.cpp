#include <iostream>
#include <vector>
using namespace std;

// find duobulicate method 1
void findDuplicate(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cout << arr[i];
                break;
            }
        }
    }
}

// method 2
int findDupl(vector<int> arr)
{
    int n = arr.size();
    int slow = 0;
    int fast = 0;

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];

    } while (slow != fast);

    slow = arr[0];

    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}
int main()
{
    vector<int> arr = {5, 3, 4, 2, 1, 5};
    // findDuplicate(arr);
    cout << findDupl(arr);

    return 0;
}