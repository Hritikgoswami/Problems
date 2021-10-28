#include<iostream>
using namespace std;


int insertionsort(int arr[],int n)
{
   int i,j,temp;
   for(i=1;i<n;i++)
   {
       temp=arr[i];
       j=i-1;
       while(arr[j]>arr[i] && j>=0)
       {
           arr[i]=arr[j];
           arr[j]=temp;
           j=j-1;
           i=i-1;
        }

   }
    cout<<"Sorted array ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;


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
        s=insertionsort(arr,n);
            return 0;
   }
