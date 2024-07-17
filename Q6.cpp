#include<iostream>
#include<vector>
using namespace std;

int staircase(int n)
{
    int lo = 0;
    int hi = n-1;
    int mid;
    int rem;
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        int k=mid*(mid+1)/2;
        if(k=n)
        {
            return mid;
            break;
        }
        else if(k>n) hi=mid-1;
        else lo=mid+1;
    }
    
}

int main()
{
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    cout<<"The number of complete rows of the staircase you will build is: "<< staircase(n);
    
}
