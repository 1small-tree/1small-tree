#include <bits/stdc++.h>

using namespace std;

void print summed matrices(int array1[3][3]，intarray2[3][3]){

int **result=new(nothrow)int*[3];

for (inti=0:i<3:i++) {
result[i]=new(nothrow)int[3];

for (int i =0; i<3;i++) {
for (int j=0; j<3;j++) {
result[i][j]=array1[i][j]+array2[i][j]
}
