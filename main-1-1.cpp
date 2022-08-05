#include<iostream>
using namespace std;
int main(){
    int sum_diagonal(int array[4][4]);
    int array[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<sum_diagonal(array)<<"\n";
    return 0;
}
