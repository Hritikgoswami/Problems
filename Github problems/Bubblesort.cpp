#include<iostream>
using namespace std;


int selectionsort(int arr[],int n)
{
    int i,temp=0;
    int miv;
    for(i=0;i<n;i++)
    {
        miv=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[miv]>arr[j])
                {
                    temp=arr[miv];
                    arr[miv]=arr[j];
                    arr[j]=temp;
                }

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
        s=selectionsort(arr,n);
            return 0;
   }
