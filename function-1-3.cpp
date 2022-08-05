#include <iostream>

using namespace std;
void count_digits(int array[4][4])

{

int i=0,j=0;


int count_digits[10]={0};


for(i=0;i<4;i++)

{

for(j=0;j<4;j++)

{


count_digits[array[i][j]] = count_digits[array[i][j]] + 1 ;

}

}


for(i=0;i<10;i++)

{

cout<<i<<":"<<count_digits[i]<<";";
  
}
 cout<<endl; 
}
