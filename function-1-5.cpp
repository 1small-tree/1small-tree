#include <iostream>

using namespace std;

class matrix

{

public:

//print summed matrix function

void print_summed_matrices(int array1[3][3],int array2[3][3])

{

int i,j; //variable declaration

int mat[3][3];

for(i=0; i<3; i++)

{

for(j=0; j<3; j++)

{

//summation of two matrix

mat[i][j]=array1[i][j]+array2[i][j];

}

}

//displaying the result

cout<<"The new matrix will be :\n";

for(i=0; i<3; i++)

{

for(j=0; j<3; j++)

{

cout<<mat[i][j]<<" ";

}

cout<<"\n";

}

}

};

int main()

{

matrix obj;//objct of the class

//variable declaration

int matrix1[3][3]={{0,1,2},{3,4,5},{6,7,8}};

int matrix2[3][3]={{0,0,0},{2,2,2},{-5,-4,8}};

//calling the print_summed_matrices function

obj.print_summed_matrices(matrix1,matrix2);

return 0;

}
