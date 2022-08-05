#include <iostream>
using namespace std;
int main()
{
int *ptr, i;
i = 11;  
// /* address of i is assigned to ptr */
ptr = &i;   
// /* show the value of ptr */
cout << "Value of ptr: "  << ptr << endl; 
// /* show i's value using ptr variable */      
cout << "Value of i: "  << *ptr << endl;
*ptr = 100;
    
cout << "Value of i: "  << i << endl;
return 0;
}
