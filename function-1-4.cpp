#include <iostream>

using namespace std;
void print_scaled_matrix(int array[3][3],int scale)
{
    for(int i=0;i<3;i++) { //loop to rows 
        for(int j=0;j<3;j++){ //loop to columns 
        
            cout<<array[i][j]*scale<<" ";
        }
        cout<<endl; //print new line 
    }
}
int main()
{
    int scale=3;
    int threebythree[3][3]={{0,1,2},{3,4,5},{6,7,8}};
    print_scaled_matrix(threebythree,scale); //call 

    return 0;
}
