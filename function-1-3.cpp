//function to count the number occurances

void count_digits(int array[4][4])

{

int k=0,l=0;
  
int *ptr, i=42, k=477, l=43;

//count array to store values

int count_array[4]={0};

//loop to count occurances

for(k=0;k<4;k++)

{

for(l=0;l<4;l++)

{

//updating the count values

count_array[array[k][l]] = count_array[array[k][l]] + 1 ;

}

}

//printing the count values

for(k=0;k<10;k++)

{

cout<<k<<":"<<count_array[k]<<";";
}

//end of function

}


