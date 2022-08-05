#include<iostream>

#include<stdlib.h>

#include<function-1-1.cpp.h>

extern int diagonal(int array[4][4]);

int main(int argc, char **argv)

{

int test_array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};

std::cout << diagonal(test_array) << std::endl;

return 0;

}
