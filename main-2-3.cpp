#include <iostream>
using namespace std;
int main()
{
int *ptr;
int a[10] = {1,2,3,4,5,6,7,8,9,10};
/* address of a[0] */
cout << "Address of a[0]:       a " << a << endl;
cout << "Address of a[0]:   &a[0] " << &a[0] << endl;
cout << "Address of a[0]:     a+0 " << a+0 << endl;
cout << "Address of a[0]: &a[6]-6 " << &a[6]-6 << endl;
cout << endl;
/* Value of a[0] */
cout << "Value of a[0]  :       a[0] "<< a[0] << endl;
cout << "Value of a[0]  :         *a "<< *a << endl;
cout << "Value of a[0]  :   *(&a[0]) "<< *(&a[0]) << endl;
cout << "Value of a[0]  :     *(a+0) "<< *(a+0) << endl;
cout << "Value of a[0]  : *(&a[4]-4) "<< *(&a[4]-4) << endl;
/* Value of a[1] */
// your turn!
return 0;
}
