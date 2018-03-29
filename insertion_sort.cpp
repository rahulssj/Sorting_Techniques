#include<iostream>
using namespace std;
int main()
{
    int n,i,j,min,ar[90],next,temp;
    cout<<"Insertion Sort"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=1;i<n;i++)
    {temp=0;
        next=i;
        while(next>0 && ar[next]<ar[next-1])
        {
            temp=ar[next-1];
            ar[next-1]=ar[next];
            ar[next]=temp;
            next=next-1;
           
        }
    
    }
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }cout<<endl;
}