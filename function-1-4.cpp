#include <iostream>

using namespace std;

class matrix

{


void print_scaled_matrix(int arr[3][3],int scale)

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

matrix obj;
int scale=3; 

int threebythree[3][3]={{0,1,2},{3,4,5},{6,7,8}};

obj.print_scaled_matrix(threebythree,scale);

return 0;

}
