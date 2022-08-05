#include <iostream>
using namespace std;
void print_summed_matrices(int array1[3][3],int array2[3][3])
{
    for(int i=0;i<3;i++) //loop to rows 
    {
        for(int j=0;j<3;j++) //loop to column
        {
            cout<<array1[i][j]+array2[i][j]<<" "; //add together 
        }
        cout<<endl; //newline 
    }
    
    
}
int main()
{
    
    int matrix1[3][3]={{0,1,2},{3,4,5},{6,7,8}};
    int matrix2[3][3]={{0,0,0},{2,2,2},{-5,-4,8}};
    print_summed_matrices(matrix1,matrix2); //call 

    return 0;
}
