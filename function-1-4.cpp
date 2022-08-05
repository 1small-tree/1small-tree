void print_scaled_matrix(int array[3][3], int scale)

{

for(int i=0; i<3; i++)

{

for(int j=0; j<3; j++)

{

cout << array[i][j]*scale << " ";

}

cout << endl;

}

}

void print_summed_matrices(int array1[3][3],int array2[3][3])

{

for(int i=0; i<3; i++)

{

for(int j=0; j<3; j++)

{

cout << array1[i][j]+array2[i][j] << " ";

}

cout << endl;

}

}

int main()

{
