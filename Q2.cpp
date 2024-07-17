// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2

#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int arr[n]={0,0,1,1,1,1,1}; 
    int hi=n-1;
    int lo=0;
    int count=0;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==0) lo=mid+1;
        else if (arr[mid]==1 && arr[mid-1]==1) hi=mid-1;
        else
        {
            count=n-mid;
            break;
        }
    }
    cout<<"The total no. of 1's are: "<<count;
}