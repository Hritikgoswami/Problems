#include<iostream>
using namespace std;

int binarysearch(int arr[],int k,int n)
{
    int mid ,high,low;
    low=0;
    high=arr[n-1];
    while(low<=high)
    {
        mid=(low+high)/2;

            if(arr[mid]==k)
            {
                return mid;
            }
            if(arr[mid]<k)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
    }
    return -1;
}
int sort(int arr[],int n)
{
    int temp,i,c,k;
    for( i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Sorted array ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<"Enter the element you want to find ";
    cin>>k;
    c = binarysearch(arr,k,n);
        if(c==-1)
        {
            cout<<"Element not found";
        }
        else
        {
            cout<<k<<" at index "<<c;
        }



}

int main()
{
    int n,i,s;
    cout<<"Enter the number of Elements ";
    cin>>n;
    int arr[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Unsorted array ";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        s=sort(arr,n);
            return 0;
   }
