#include <bits/stdc++.h>
using namespace std;
void print scaled matrix(int array[3][3], int scale) {
for (int i=0; i<3;i++) {
for (int j=0;j<3;j++) {
array[i][j] = scale * array[i][j]; 
  cout << array[i][j]<" ";
}
cout << endl;
}
