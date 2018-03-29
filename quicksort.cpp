#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
   int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int ar[],int low,int high)
{int pivot=ar[high];
   int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(ar[j]<=pivot)
        {i++;
            swap(&ar[i],&ar[j]);
        }
    }
    swap(&ar[i+1],&ar[high]);
return (i+1);
}
void quicksort(int arr[],int lo,int hi)
{if(lo<hi)
{
    int p=partition(arr,lo,hi);
    quicksort(arr,lo,p-1);
     quicksort(arr,p+1,hi);
}

}
int main()
{
    int ar[90],n,l,h,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    l=0;h=n-1;
    quicksort(ar,l,h);
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}