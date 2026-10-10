#include <iostream>
using namespace std;

    int main()
{
    // declration
    int arr[100], n;

    // take size of element
    cout << "Enter size of array: ";
    cin >> n;

    // take input value
    cout << "Enter value: " << endl;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    // find unquie value
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
               count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
