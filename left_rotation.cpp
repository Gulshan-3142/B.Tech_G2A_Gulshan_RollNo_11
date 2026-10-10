#include <iostream>
#include <vector>
using namespace std;

// Left Rotation by K function
void leftRotate(vector<int> &arr, int k)
{
    int n = arr.size();
    if (arr.empty())
    {
        return;
    }

    k = k % n;
    int i = 0;
    int j = k - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    j = n - 1;
    while (k < j)
    {
        swap(arr[k], arr[j]);
        k++;
        j--;
    }

    i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

// right Rotation by K function
void rightRotate(vector<int> &arr, int k)
{
    int n = arr.size();
    if (arr.empty())
    {
        return;
    }

    k = k % n;
    int i = 0;
    int j = n-k-1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    i = n-k;
    j = n-1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    leftRotate(arr, 0);
    rightRotate(arr, 3);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}