#include<stdio.h>
int main()
{
    int ghaza[10];
    int numberofdays, calrydariafti = 0 , calrisookhte;
    scanf("%d",&numberofdays);
    for (int i = 0 ; i < numberofdays ; i++)
    {
        scanf("%d" , &ghaza[i]);
    }
    for (int  i = 0; i < numberofdays ; i++)
    {
        if (ghaza[i] == 1)
        {
            calrydariafti = calrydariafti + 329;
        }
        else if (ghaza[i] == 2)
        {
            calrydariafti = calrydariafti + 127;
        }
        else if (ghaza[i] == 3)
        {
            calrydariafti = calrydariafti + 61 ;
        }
        else if (ghaza[i] == 4)
        {
            calrydariafti = calrydariafti + 83;
        }
        else if (ghaza[i] == 5)
        {
            calrydariafti = calrydariafti + 156;
        }
        else if (ghaza[i] == 6)
        {
            calrydariafti = calrydariafti + 296;
        }
        else if (ghaza[i] == 7)
        {
            calrydariafti = calrydariafti + 496;
        }
        else if (ghaza[i] == 8)
        {
            calrydariafti = calrisookhte + 73;
        }
        else if (ghaza[i] == 9)
        {
            calrydariafti = calrydariafti + 34 ;
        }
        else if (ghaza[i] == 10)
        {
            calrydariafti = calrydariafti + 16;
        }
    }
        calrisookhte = numberofdays * 100 ;
      if (calrisookhte == calrydariafti)
      {
        printf("bedoone taghir");
      }
      else if (calrisookhte > calrydariafti)
      {
        printf("laghar");
      }
      else if (calrisookhte < calrydariafti )
      {
        printf("chagh");
      }
         
}