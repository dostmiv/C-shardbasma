#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int displayshard8(int shard6,int shard7,int shard8)
{
    printf("you have %d shard6\nyou have %d shard7.\nyou have %d shard8\n",shard6,shard7,shard8);
}
int ShowShards(int shard6,int shard7)
{
    printf("you have %d shard6\nyou have %d shard7.\n",shard6,shard7);
}


int main ()
{
    int n;
    int shard6 = 6 ;
    int shard7 = 0 ;
    int shard8 = 0 ;
    int counter = 1;

    while (n != 3)
    {
        if (shard6 == 0 && shard7 == 0 && shard8 == 0)
            {
            printf("no more shards left.. what a bad day...");
            break;
            }
        if (shard7 == 0)
            {
        printf("-----------------\nenter a number :\n1 to try upgrade a shard6 to shard 7;\n2 to check that how many shard do you have;\n3 to exit anvil.\n-----------------\n\n");
            }
        else
            printf("-----------------\nenter a number :\n1 to try upgrade a shard6 to shard 7;\n2 to check that how many shard do you have;\n3 to exit anvil.\n4 to Go shard8 !!\n-----------------\n\n");
        scanf("%d",&n);

        int x = time(NULL);
        srand(x);
        if (n == 1)
        {
            if ((rand() % 99) % 10 == 0)
            {
                printf("succesfull !\n");
                shard6--;
                shard7++;
            }
            else
            {
                printf("sorry, it failed ...");
                shard6--;
            }
        }
        else if (n == 2)
        {
            if (shard8 != 0)
                {
                displayshard8(shard6,shard7,shard8);
                }
            else
            ShowShards(shard6,shard7);
        }
        else if(n == 3)
        {
            printf("\nDon't need more risk then,,\n");
            shard8 != 0 ? displayshard8(shard6,shard7,shard8):ShowShards(shard6,shard7);
            break;
        }
         else if(n == 4 && shard7 != 0)
        {

            if ((rand()%99 ) == 8 || (rand()%99 ) == 68)
                {
                printf ("HoLy sh*t! You got it man ! !\n");
                shard7--;
                shard8++;
                }
            else
                {
                    printf("Ofc you failed ,gg.\n");
                    shard7--;
                }
        }
        else
            {
            printf("you got wrong number\n");
            scanf("%d",&n);
            }

    }
}
