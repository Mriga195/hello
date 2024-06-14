#include <bits/stdc++.h>
using namespace std;
vector<int> sortRev(vector<int>& arr);

int main()
{
    vector<int> arr = {31, 41, 59, 26, 42, 58, 1, 12, 63};
    vector<int> sorted = sortRev(arr);

    for (int num: sorted)
        cout << num << " ";

    cout << endl;
}

vector<int> sortRev(vector<int>& arr)
{
    int length = arr.size();
    for (int i = 1; i < length; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && key > arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    return arr;
}
