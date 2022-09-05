#include <iostream>
using namespace std; 

int main() 
{ 
    int i,n;
	cout << "Enter the size:";
	cin >> n;
	string fruits[n];
	cout<<"Enter the Fruits: ";
	for(i=0;i<n;i++)
	    cin>>fruits[i];
    cout<<"\nThe Fruits are:\n";
	for(i=0;i<n;i++) 
		cout << fruits[i] << endl; 
	
	return 0;
} 
