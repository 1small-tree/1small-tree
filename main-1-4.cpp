#include <iostream>
using namespace std;
int main()
{

int a[3] = {43,477,999};
int *ptr;
ptr = &(*(a+1));
cout << "*ptr = " << *ptr << endl;
cout << "a[2] = " << *(a+2) << endl;
cout << "a[2] = " << a[2] << endl;

return 0;
}
