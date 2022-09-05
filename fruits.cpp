#include <iostream>
using namespace std; 

int main() 
{ 
    int i;
	string fruits[5];
	cout<<"Enter the Fruits: ";
	for(i=0;i<5;i++)
	    cin>>fruits[i];
    cout<<"\nThe Fruits are:\n";
	for(i=0;i<5;i++) 
		cout << fruits[i] << endl; 
	
	return 0;
} 