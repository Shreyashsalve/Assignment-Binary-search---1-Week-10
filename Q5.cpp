#include<iostream>
#include<vector>
using namespace std;

int perfectsquare(int n)
{
    int lo = 0;
    int hi = n;
    int mid;
    int ans;
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if(mid*mid==n) return ans;
        if (mid*mid<n)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return -1;
    
}

int main()
{
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    if(perfectsquare(n)==-1) cout<<"This number is not a perfect square.";
    else{ 
    cout << "Yes this is the perfect sqaure of:  ";
    cout << perfectsquare(n);
    }
}
