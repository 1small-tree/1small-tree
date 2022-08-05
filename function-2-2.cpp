//Header files

#include<iostream>
#include <string>
#include<cstring>
#include <cstdio>
#include<cmath>
using namespace std;

// function to convert binary to dcimal

int binary_to_int(int binary_digits[], int number_of_digits)
{
// variables declaration

long long int decimal=0;
int n=number_of_digits,i;

int temp=n;

// finding equivalent decimal number
for(i=0;i<n;i++)
{
decimal+=binary_digits[i]*pow(2,--temp);

}
cout<<"Decimal equivalent of given binary number: "<<decimal<<endl;

}

// main function

int main()
{

int n;
int i;
// array declaration
int binary_number[31],digit=-1;

cout<<"enter Binary number to convert into decimal : ";

// char string declaration
char str[31];
cin>>str;

// finding string length
n=strlen(str);

cout<<"\nnumber of digit: "<<n<<endl;

// converting to int digit by substracting 48 from ascii value
for(i=0;i<n;i++)
{
binary_number[i]=str[i]-48;
cout<<binary_number[i]<<" ";
}
cout<<endl;

// function calling

binary_to_number(binary_number,n);

// returning from main function
return 0;

}
