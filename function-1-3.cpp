#include <iostream>
#include<iomanip>
#include<fstream>
#include <stdint.h>
#include <string>
#include <cmath>
using namespace std;

void count_digits(int array[4][4]){
  
int flag = 0, i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            if ((array[i][j] != 1) && (array[j][i] != 0))
            {
                flag = 1;
                break;
            }
        }
    if (flag == 0)
        return 1;
    else
        return 0;
}
