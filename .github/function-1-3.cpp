#include <iostream>

using namespace std;

int main() {

int m,n,i,j;

cout<<"Enter number of rows and number of columns in the matrix"<<endl;

cin>>m>>n;

int mat[m][n];

cout<<"Enter matrix elements between 0-9"<<endl;

for(i=0;i<m;i++){

for(j=0;j<n;j++){

cin>>mat[i][j];

}

}

int count[10]={0,0,0,0,0,0,0,0,0,0};

for(i=0;i<m;i++){

for(j=0;j<n;j++){

count[mat[i][j]]++;

}

}

cout<<endl;

for(i=0;i<10;i++){

cout<<i<<":"<<count[i]<<";";

}

}
