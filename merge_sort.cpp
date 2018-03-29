#include<iostream>
using namespace std;
void merge_sort(int* ar[],int l,int r,int* c[])
{int mid,R[90],L[90];
    if(r-l==0)
    c[0]=ar[l];
    if(r-l>0)
    {
        mid=(l+r)/2;
        merge_sort(ar,l,mid,L);
        merge_sort(ar,mid,r,R);
        merge(L,mid-l,R,r-mid,c);
    }
}
void merge(int a[],int m,int b,int n,int r[])
{int k=0,i=0,j=0;
    while(k<m+n)
    {
        if(a[i]<b[i])
        {
            r[k]=a[i];
            k++;i++;
        }
        else
       { r[k]=b[j];
        k++;j++;}
    }
}
int main()
{ int ar[90],n,r,l,int c[90],i;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>ar[i];
}
r=n;
l=0;
merge_sort(ar,l,r,c);
   
for(i=0;i<n;i++)
{
    cout<<c[i];
}
     
    return 0;
}