//function to count the number occurances

void count_digits(int array[4][4])

{

int i=0,j=0;

//count array to store values

int count_array[10]={0};

//loop to count occurances

for(i=0;i<4;i++)

{

for(j=0;j<4;j++)

{

//updating the count values

count_array[array[i][j]] = count_array[array[i][j]] + 1 ;

}

}

//printing the count values

for(i=0;i<10;i++)

{

cout<<i<<":"<<count_array[i]<<";";

}

//end of function

}
