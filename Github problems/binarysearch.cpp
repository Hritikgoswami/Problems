#include<iostream>
using namespace std;


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
