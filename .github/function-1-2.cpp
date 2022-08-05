#include <iostream>
#include<iomanip>
#include<fstream>
#include <stdint.h>
#include <string>
#include <cmath>
using namespace std;

int identity(int a[10][10])
{
    int flag = 0, i, j;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
        {
            if ((a[i][j] != 1) && (a[j][i] != 0))
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
int main()
{
    int i, j, a[10][10], identityFlag;
    
    cout << "Enter array elements : ";
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            cin >> a[i][j];

    identityFlag = identity(a);
    
    if (identityFlag == 1)
    {
        cout << "Identity Matrix";
    }
    else
    {
        cout << "Not an Identity Matrix";
    }
    return 0;
}
