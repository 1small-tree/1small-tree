// header files

#include<iostream>
#include <string>
#include<cstring>
#include <cstdio>

// define max value as 1000000
#define max 1000000
using namespace std;

// function to find binary number

void print_binary_str(std::string decimal_number)

{

// converting string into int number

long long int number=stoi(decimal_number);

cout<<"\ndecimal number is "<<number<<endl;

// declaration
long long int temp=number;
int r;

long long int binary_str[max];
int i=-1;

// finding binary by dividing 2 and on looking remainder
while(temp!=0)
{
// remainder
r=temp%2;
// storing in binary_str
binary_str[++i]=r;
// next number after dividing by 2
temp=temp/2;
}

cout<<"\nCorresponding binary of decimal number: \n";
int j;

// printing from last
for(j=i;j>=0;j--)
cout<<binary_str[j]<<" ";
cout<<endl;
}

// main fnction

int main()
{
// declaration
string decimal_number;
int n;

cout<<"enter number to convert into binary : ";
cin>>decimal_number;

// function calling
print_as_binary(decimal_number);

// returning from main function

return 0;

}
