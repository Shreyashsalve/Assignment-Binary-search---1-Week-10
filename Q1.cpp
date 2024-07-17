#include<iostream>
using namespace std;
int main()
{
    int n=8;
    int arr[n]={1,2,3,3,4,4,4,5};
    int target=3; 
    int hi=n-1;
    int lo=0;
    bool flag=false;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target)
        {
            if (arr[mid+1]!=target)
            {
                cout<<mid;
                flag=true;
                break;
            }
            else
            {
                lo=mid+1;   
            }
        }
        else if (arr[mid]>target) hi=mid-1;
        else lo=mid+1;    
    }
    if (flag=false)
    {
        cout<<-1;
    }
}