#include<iostream>
using namespace std;

int main()
{
    int n,ar[90],i,j,min;    int temp;
    cout<<"****************SELECTION SORT*******************"<<endl;
    cout<<"ENTER NUMBER OF ELEMENTS"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
     for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }cout<<endl;
    for(i=0;i<n;i++)
    {temp=0;
        min=i;
        for(j=min+1;j<n;j++)
        {
            if(ar[j]<ar[min])
            {
                min=j;
            }}
             temp=ar[i];
    ar[i]=ar[min];
    ar[min]=temp;
        }
    
   
    
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }cout<<endl;
return 0;
}