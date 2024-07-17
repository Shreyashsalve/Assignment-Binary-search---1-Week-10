#include<iostream>
#include<vector>
using namespace std;

int repeatednumber(vector<int>arr, int n)
{
    int lo = 1;
    int hi = n - 1;
    int mid;
    int count;
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= mid)
            {
                count++;
            }
        }
        if (count <= mid)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return lo;
}

int main() {
    vector<int> arr;
    arr={1,2,2,3,4,5};
    // int arr[] = {1, 2, 3, 3, 4};
    int n=arr.size();
    cout << "The repeated number is: ";
    cout << repeatednumber(arr, n);
    return 0;
}
