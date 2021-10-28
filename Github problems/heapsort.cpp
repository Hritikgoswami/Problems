#include<iostream>
using namespace std;

void printarray(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

}

void heapify(int *a,int  n,int i)
{
    int c1=2*i+1, c2=2*i+2;
    int max=i;
    if(c1<n && a[max]<a[c1])
        {
            max=c1;
        }
    if(c2<n && a[max]<a[c2])
        {
            max=c2;
        }
    if(max!=i)
    {
        swap(a[i],a[max]);
        heapify(a,n,max);
    }


}


void buildheap(int *a,int n)
{
    for(int i=n/2;i>=0;i--)
    {
        heapify(a,n,i);
    }
    printarray(n,a);
}




int main()
{
    int i,n;
    int *a= new int[n];
     cout<<"enter the size ";
     cin>>n;
     cout<<"enter the elements "<<"\n";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    printarray(n,a);
    buildheap(a,n);

}
