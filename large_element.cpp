#include <iostream>
using namespace std;

int main()
{
    int i,j,n,high;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the elements: ";
    for(i=0;i<n;i++) 
          cin>>a[i];
      
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
        { 
            if(a[i]>a[j])
              {
                int temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
            }
        }
    }
    high=a[n-1];
    cout << "The highest element is " << high << endl; 
    return 0;
}