//Compute the total and average of four numbers :

#include <iostream>
using namespace std;

    int main()
    {
    	float n1,n2,n3,n4,tot,avrg;

        cout<<" Input 1st two numbers (separated by space) : ";
    	cin>> n1 >> n2;
        cout<<" Input last two numbers (separated by space) : ";
    	cin>> n3 >> n4;
    	tot=n1+n2+n3+n4;
		avrg=tot/4;
        cout<<" The total of four numbers is : "<< tot << "\n";
        cout<<" The average of four numbers is : "<< avrg << "\n";
        cout <<  "\n ";
        return 0;
    }