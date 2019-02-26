
  
#include  <stdio.h>
#include  <cs50.h>
#include <math.h>


int main(void)
{
    int height;
    do
    {
    height = get_int("height:\n");
    }
    while (height > 23 || height < 0);

    for(int rows = 0; rows < height; rows++)
    {
        printf("\n");
         for (int spaces = 0; spaces < height - rows -1; spaces++)
        {
         printf(" ");
        }
        for (int hash = 0; hash < rows + 1; hash++)
        {
            printf("#");
        }
        for(int middlespace = 0; middlespace < 2;middlespace++)
        {
            printf(" ");
        }
        for(int hash2 = 0; hash2 < rows +1; hash2++)
        {
            printf("#");
        }

    }
    printf("\n");
return 0;
}
