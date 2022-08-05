#include <iostream>
using namespace std;
int binary_to_number(int binary digitsl int number_ofdigits){ 
bool flag = true;
if (number of digits >= 1 && number of digits <= 30) {
for (int i = 0; i.s numker of digits; ++i) {
if(binary_digits[i] != 0 && binary_digits[i]!=1)flag =false; break;

if(flag){
int number =0;
for (int i = 0; i< number_of_digits; ++i) {
number *= 10:
number +=binary_digits[i];}
unsigned long result=(unsigned long)bitset<30>(s:tostring(val:number)).to_ulong(); return static cast<int>(result);
