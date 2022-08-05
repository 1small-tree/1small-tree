int diagonal(int array[4][4])

{

int diagTotal = 0;

for (int i = 0; i < 4; ++i)

{

diagTotal = diagTotal + array[i][i];

}

return diagTotal;

}
