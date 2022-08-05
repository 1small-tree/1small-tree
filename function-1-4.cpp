#include <iostream>

using namespace std;

class matrix

{


void print_scaled(int array[3][3],int scale)
{

int i,j;

for(i=0;i<3;i++)

{

for(j=0;j<3;j++)

{

arr[i][j]=arr[i][j]*3;

}

}

cout<<"The resultant matrix is"<<endl;

for(i=0;i<3;i++)

{

for(j=0;j<3;j++)

{

cout<<arr[i][j]<<" ";

}

cout<<"\n";

}

}

};

int main()

{

int scale = 3 ;
int threebythree[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
print_scaled(threebythree,scale) ;

return 0;

}
