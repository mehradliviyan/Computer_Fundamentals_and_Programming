#include<stdio.h>
#include"tavabeh.h"
void pakhshe_card(int shakhs[4][11] , int cards[44])
{
for (int i = 0; i < 5; i++)
    {
        shakhs[1][i] = cards[i + 5];
    }
    for (int i = 0; i < 5; i++)
    {
        shakhs[2][i] = cards[i+10];
    }
    for (int i = 0; i < 5; i++)
    {
        shakhs[3][i] = cards[i+15];
    }
    for (int i = 0 ; i < 4 ; i++)
    {
        shakhs[0][i + 5] = cards[i + 20];
    }
    for (int i = 0; i < 4 ; i++)
    {
        shakhs[1][i + 5] = cards[i + 24];
    }
    for (int i = 0; i < 4; i++)
    {
        shakhs[2][i+5] = cards[i+28];
    }
    for (int i = 0; i < 4; i++)
    {
        shakhs[3][i+5] = cards[i+32];
    }
    for (int i = 0; i < 2; i++)
    {
        shakhs[0][i+9] = cards[i+36];
    }
    for (int i = 0; i < 2; i++)
    {
        shakhs[1][i+9] = cards[i+38];
    }
    for (int i = 0; i < 2; i++)
    {
        shakhs[2][i+9] = cards[i+40];
    }
    for (int i = 0; i < 2; i++)
    {
        shakhs[3][i+9] = cards[i+42];
    }
}
void moghayese(int harkat , int harkat2 , int harkat3 , int harkat4 , int* nobat , int bakhshname2 , int* point2 , int*point1)
{
    int remain1,remain2,remain3,remain4;
    remain1 = (harkat %11);
    remain2 = harkat2%11;
    remain3 = harkat3 %11;
    remain4 = harkat4 % 11;
    if ((harkat/11) == bakhshname2)
    {
        if (harkat2 /11 == bakhshname2 && harkat3/11 == bakhshname2 && harkat4/11 == bakhshname2)
        {
        if (remain1 > remain3 && remain1 > remain4 && remain1 > remain2)
        {
            *nobat = 1;
            *point1 = *point1 + 1;
        }
        if (remain2 > remain3 && remain2 > remain4 && remain2 > remain1)
        {
            *nobat = 2;
            *point2 = *point2 +1;
        }
        if (remain3 > remain2 && remain3 > remain4 && remain3 > remain1)
        {
            *nobat = 3;
            *point1 = *point1 +1;
        }
        if (remain4 > remain3 && remain4 > remain2 && remain4 > remain1)
        {
            *nobat = 4;
            *point2 = *point2 +1;
        }
        }
        if (harkat2 /11 != bakhshname2 && harkat3/11 != bakhshname2 && harkat4/11 != bakhshname2)
        {
            *nobat = 1;
            *point1 = *point1 + 1;
        }
        if (harkat2 /11 == bakhshname2 && harkat3/11 != bakhshname2 && harkat4/11 != bakhshname2)
        {
            if (remain1 > remain2)
            {
                *nobat = 1;
                *point1 = *point1 + 1;
            }
            if (remain2 > remain1)
            {
                *nobat = 2;
                *point2 = *point2 +1;
            }
        }
        if (harkat2 /11 != bakhshname2 && harkat3/11 == bakhshname2 && harkat4/11 != bakhshname2)
        {
            if (remain1 > remain3)
            {
                *nobat = 1;
                *point1 = *point1 + 1;
            }
            if (remain3 > remain1)
            {
                *nobat = 3;
                *point1 = *point1 +1;
            }
        }
        if (harkat2 /11 != bakhshname2 && harkat3/11 != bakhshname2 && harkat4/11 == bakhshname2)
        {
            if (remain1 > remain4)
            {
                *nobat = 1;
                *point1 = *point1 + 1;
            }
            if (remain4 > remain1)
            {
                *nobat = 4;
                *point2 = *point2 +1;
            }
        }
        if (harkat2 /11 == bakhshname2 && harkat3/11 == bakhshname2 && harkat4/11 != bakhshname2)
        {
            if (remain1 > remain2 && remain1 > remain3)
            {
                *nobat = 1;
                *point1 = *point1 + 1;
            }
            if (remain2 > remain1 && remain2 > remain3)
            {
                *nobat = 2;
                *point2 = *point2 + 1;
            }
            if (remain3 > remain2 && remain3 > remain1)
            {
                *nobat = 3;
                *point1 = *point1 + 1;
            }
        }
        if (harkat2 /11 == bakhshname2 && harkat3/11 != bakhshname2 && harkat4/11 == bakhshname2)
        {
            if (remain1 > remain2 && remain1 > remain4)
            {
                *nobat = 1;
                *point1 = *point1 + 1;
            }
            if (remain2 > remain1 && remain2 > remain4)
            {
                *nobat = 2;
                *point2 = *point2 + 1;
            }
            if (remain4 > remain2 && remain4 > remain1)
            {
                *nobat = 4;
                *point2 = *point2 + 1;
            }
        }
        if (harkat2 /11 != bakhshname2 && harkat3/11 == bakhshname2 && harkat4/11 == bakhshname2)
        {
            if (harkat2 / 11 == harkat / 11 && harkat3/11 == harkat/11 && harkat4/11 == harkat/11)
            {
                if (remain1 > remain3 && remain1 > remain4 && remain1 > remain2)
                {
                    *nobat = 1;
                    *point1 = *point1 +1;
                }
                if (remain2 > remain3 && remain2 > remain4 && remain2 > remain1)
                {
                    *nobat = 2;
                    *point2 = *point2 +1;
                }
                if (remain3 > remain2 && remain3 > remain4 && remain3 > remain1)
                {
                    *nobat = 3;
                    *point1 = *point1 +1;
                }
                if (remain4 > remain3 && remain4 > remain2 && remain4 > remain1)
                {
                    *nobat = 4;
                    *point2 = *point2 +1;
                }
             }
             if (harkat2 / 11 == harkat / 11 && harkat3/11 != harkat/11 && harkat4/11 == harkat/11)
            {
                if ( remain1 > remain4 && remain1 > remain2)
                {
                    *nobat = 1;
                    *point1 = *point1 +1;
                }
                if ( remain2 > remain4 && remain2 > remain1)
                {
                    *nobat = 2;
                    *point2 = *point2 +1;
                }
                if ( remain4 > remain2 && remain4 > remain1)
                {
                    *nobat = 4;
                    *point2 = *point2 +1;
                }
             }
             if (harkat2 / 11 == harkat / 11 && harkat3/11 == harkat/11 && harkat4/11 != harkat/11)
            {
                if (remain1 > remain3 && remain1 > remain2 )
                {
                    *nobat = 1;
                    *point1 = *point1 +1;
                }
                if (remain2 > remain3 && remain2 > remain1)
                {
                    *nobat = 2;
                    *point2 = *point2 +1;
                }
                if (remain3 > remain2  && remain3 > remain1)
                {
                    *nobat = 3;
                    *point1 = *point1 +1;
                }
             }
             if (harkat2 / 11 != harkat / 11 && harkat3/11 == harkat/11 && harkat4/11 == harkat/11)
            {
                if (remain1 > remain3 && remain1 > remain4 )
                {
                    *nobat = 1;
                    *point1 = *point1 +1;
                }
                if ( remain3 > remain4 && remain3 > remain1)
                {
                    *nobat = 3;
                    *point1 = *point1 +1;
                }
                if (remain4 > remain3  && remain4 > remain1)
                {
                    *nobat = 4;
                    *point2 = *point2 +1;
                }
             }
              if (harkat2 / 11 == harkat / 11 && harkat3/11 != harkat/11 && harkat4/11 != harkat/11)
            {
                if ( remain1 > remain2)
                {
                    *nobat = 1;
                    *point1 = *point1 +1;
                }
                if ( remain2 > remain1)
                {
                    *nobat = 2;
                    *point2 = *point2 +1;
                }
             }
             if (harkat2 / 11 != harkat / 11 && harkat3/11 == harkat/11 && harkat4/11 != harkat/11)
            {
                if ( remain1 > remain3)
                {
                    *nobat = 1;
                    *point1 = *point1 +1;
                }
                if ( remain3 > remain1)
                {
                    *nobat = 3;
                    *point1 = *point1 +1;
                }
             }
             if (harkat2 / 11 != harkat / 11 && harkat3/11 != harkat/11 && harkat4/11 == harkat/11)
            {
                if ( remain1 > remain4)
                {
                    *nobat = 1;
                    *point1 = *point1 +1;
                }
                if ( remain4 > remain1)
                {
                    *nobat = 4;
                    *point2 = *point2 +1;
                }
             }
        }
    }
    if ((harkat/11) != bakhshname2)
    {
        if ((harkat2/11) == bakhshname2 && harkat3/11 != bakhshname2 && harkat4/11 != bakhshname2)
        {
            *nobat = 2;
            *point2 = *point2 + 1;
        }
        if ((harkat3/11) == bakhshname2 && harkat2/11 != bakhshname2 && harkat4/11 != bakhshname2)
        {
            *nobat = 3;
            *point1 = *point1 +1;
        }
        if ((harkat4/11) == bakhshname2 && harkat3/11 != bakhshname2 && harkat2/11 != bakhshname2)
        {
            *nobat = 4;
            *point2 = *point2 +1;
        }
        if ((harkat2/11) == bakhshname2 && harkat3/11 == bakhshname2 && harkat4/11 != bakhshname2)
        {
            if (remain2 > remain3)
            {
                *nobat = 2;
                *point2 = *point2 +1;
            }
            if (remain3 > remain2)
            {
                *nobat = 3;
                *point1 = *point1 + 1 ;
            }
        }
        if ((harkat2/11) == bakhshname2 && harkat3/11 != bakhshname2 && harkat4/11 == bakhshname2)
        {
            if (remain2 > remain4)
            {
                *nobat = 2;
                *point2 = *point2 +1;
            }
            if (remain4 > remain2)
            {
                *nobat = 4;
                *point2 = *point2 +1;
            }
        }
        if ((harkat2/11) != bakhshname2 && harkat3/11 == bakhshname2 && harkat4/11 == bakhshname2)
        {
            if (remain4 > remain3)
            {
                *nobat = 4;
                *point2 = *point2 + 1;
            }
            if (remain3 > remain4)
            {
                *nobat = 3;
                *point1 = *point1 +1;
            }
        }
        if ((harkat2/11) == bakhshname2 && harkat3/11 == bakhshname2 && harkat4/11 == bakhshname2)
        {
            if (remain2 > remain3 && remain2 > remain4)
            {
                *nobat = 2;
                *point2 = *point2 + 1;
            }
            if (remain3 > remain2 && remain3 > remain4 )
            {
                *nobat = 3;
                *point1 = *point1 +1;
            }
            if (remain4 > remain3 && remain4 > remain2)
            {
                *nobat = 4;
                *point2 = *point2 + 1 ;
            }
        }
        if (harkat2/11 != bakhshname2 && harkat3/11 != bakhshname2 && harkat4/11 != bakhshname2 && harkat/11 != bakhshname2)
        {
            if (remain1 > remain3 && remain1 > remain4 && remain1 > remain2)
        {
            *nobat = 1;
            *point1 = *point1 +1;
        }
        if (remain2 > remain3 && remain2 > remain4 && remain2 > remain1)
        {
            *nobat = 2;
            *point2 = *point2 +1;
        }
        if (remain3 > remain2 && remain3 > remain4 && remain3 > remain1)
        {
            *nobat = 3;
            *point1 = *point1 +1;
        }
        if (remain4 > remain3 && remain4 > remain2 && remain4 > remain1)
        {
            *nobat = 4;
            *point2 = *point2 +1;
        }
        }
        
    }
    
}
void round4(int shakhs[4][11] , int * harkat4 , int harkat  , int bakhshname2)
{
    int remain =0 ;
    for (int i = 0; i < 11 ; i++)
    {
        if ((shakhs[3][i]/11) == (harkat/11) && (shakhs[3][i] % 11) >= remain && shakhs[3][i] != 44)
        {
            remain = shakhs[3][i] % 11;
            *harkat4 = shakhs[3][i];
        }
    }
    remain = 0;
    if (*harkat4 == 0)
    {
        for (int i = 0; i < 11; i++)
        {
            if ((shakhs[3][i] / 11) == bakhshname2 && shakhs[3][i]%11 >= remain && shakhs[3][i] != 44)
            {
                remain = shakhs[3][i]%11;
                *harkat4 = shakhs[3][i];
            }
        }        
    }
    remain = 11;
    if (*harkat4 == 0)
    {
        for (int i = 0; i < 11; i++)
        {
            if ((shakhs[3][i]%11) <= remain && shakhs[3][i] != 44)
            {
                remain = shakhs[3][i] % 11;
                *harkat4 = shakhs[3][i];
            }
        }
    }
    for (int i = 0; i < 11; i++)
    {
        if (*harkat4 == shakhs[3][i])
        {
            shakhs[3][i] = 44;
        }
    }
    printf("\n It is not your turn");
    printf("\nplease press enter button");
    getchar();
}
void round3(int shakhs[4][11] , int * harkat3 , int harkat , int bakhshname2 )
{
    int remain =0 ;
    for (int i = 0; i < 11 ; i++)
    {
        if ((shakhs[2][i]/11) == (harkat/11) && (shakhs[2][i] % 11) >= remain && shakhs[2][i] != 44)
        {
            remain = shakhs[2][i] % 11;
            *harkat3 = shakhs[2][i];
        }
    }
    remain = 0;
    if (*harkat3 == 0)
    {
        for (int i = 0; i < 11; i++)
        {
            if ((shakhs[2][i] / 11) == bakhshname2 && shakhs[2][i]%11 >= remain && shakhs[2][i] !=44)
            {
                remain = shakhs[2][i]%11;
                *harkat3 = shakhs[2][i];
            }
        }        
    }
    remain = 11;
    if (*harkat3 == 0)
    {
        for (int i = 0; i < 11; i++)
        {
            if ((shakhs[2][i]%11) <= remain && shakhs[2][i] != 44)
            {
                remain = shakhs[2][i] % 11;
                *harkat3 = shakhs[2][i];
            }
        }
    }
    for (int i = 0; i < 11; i++)
    {
        if (*harkat3 == shakhs[2][i])
        {
            shakhs[2][i] = 44;
        }
    }
    printf("\n It is not your turn");
    printf("\nplease press enter button");
    getchar();
}
void round2(int shakhs[4][11] , int * harkat2 , int harkat, int bakhshname2 )
{
    int remain =0 ;
    for (int i = 0; i < 11 ; i++)
    {
        if ((shakhs[1][i]/11) == (harkat/11) && (shakhs[1][i] % 11) >= remain && shakhs[1][i] != 44)
        {
            remain = shakhs[1][i] % 11;
            *harkat2 = shakhs[1][i];
        }
    }
    remain = 0;
    if (*harkat2 == 0)
    {
        for (int i = 0; i < 11; i++)
        {
            if ((shakhs[1][i] / 11) == bakhshname2 && shakhs[1][i]%11 >= remain && shakhs[1][i] != 44)
            {
                remain = shakhs[1][i]%11;
                *harkat2 = shakhs[1][i];
            }
        }        
    }
    remain = 11;
    if (*harkat2 == 0)
    {
        for (int i = 0; i < 11; i++)
        {
            if ((shakhs[1][i]%11) <= remain && shakhs[1][i] != 44)
            {
                remain = shakhs[1][i] % 11;
                *harkat2 = shakhs[1][i];
            }
        }
    }
    for (int i = 0; i < 11; i++)
    {
        if (*harkat2 == shakhs[1][i])
        {
            shakhs[1][i] = 44;
        }
    }
    printf("\n It is not your turn");
    printf("\nplease press enter button");
    getchar();
}
void round1(int shakhs[4][11] , int* index , int * harkat , int harkat2,int harkat3 , int harkat4 , int flag , int nobat)
{
    for (int i = 0; i < 11; i++)
    {
        if (shakhs[0][i]/11 == harkat2/11 && nobat==2)
        {
            flag = 1;
            break;
        }
        if (shakhs[0][i]/11 == harkat3/11 && nobat==3)
        {
            flag = 1;
            break;
        }
        if (shakhs[0][i]/11 == harkat4/11 && nobat==4)
        {
            flag = 1;
            break;
        }
    }
    printf("\nwhich card do you want to play : ");
    scanf("%d" , index);
    if (flag == 0)
    {
        while (1)
    {
        if (*index > 10 || *index< 0 || shakhs[0][*index] == 44)
        {
            printf("please choose correctly !!\n");
        }
        else
        {
            int remain = shakhs[0][*index] % 11 ;
            remain = remain +1 ;
            int submultiple = (shakhs[0][*index] / 11) ;
            *harkat = shakhs[0][*index];
            shakhs[0][*index] = 44;
            if (submultiple == 0)
            {
                printf("\n you choose A%d" , remain);
            }
            if (submultiple == 1)
            {
                printf("\n you choose B%d" , remain);
            }
            if (submultiple == 2)
            {
                printf("\n you choose C%d" , remain);
            }
            if (submultiple == 3)
            {
                printf("\n you choose D%d" , remain);
            }
            break; 
        }
        printf("which card do you want to play : ");
        getchar();
        scanf("%d" , index);
    }
    printf("\nplease press enter button");
    getchar();
    }
    if (flag == 1)
    {
        if (nobat == 2)
        {
            while (1)
            {
            if (*index > 10 || *index <0 || shakhs[0][*index] == 44 || (shakhs[0][*index] / 11) != harkat2/11 )
            {
                printf("please choose correctly !!");
            }
            else
            {
            int remain = shakhs[0][*index] % 11 ;
            remain = remain +1 ;
            int submultiple = (shakhs[0][*index] / 11) ;
            *harkat = shakhs[0][*index];
            shakhs[0][*index] = 44;
            if (submultiple == 0)
            {
                printf("\n you choose A%d" , remain);
            }
            if (submultiple == 1)
            {
                printf("\n you choose B%d" , remain);
            }
            if (submultiple == 2)
            {
                printf("\n you choose C%d" , remain);
            }
            if (submultiple == 3)
            {
                printf("\n you choose D%d" , remain);
            }
            break; 
            }
            printf("\nwhich card do you want to play : ");
            getchar();
            scanf("%d" , index);
            }
        }
        if (nobat == 3)
        {
            while (1)
            {
            if (*index > 10 || *index <0 || shakhs[0][*index] == 44 || (shakhs[0][*index] / 11) != harkat3/11 )
            {
                printf("please choose correctly !!");
            }
            else
            {
            int remain = shakhs[0][*index] % 11 ;
            remain = remain +1 ;
            int submultiple = (shakhs[0][*index] / 11) ;
            *harkat = shakhs[0][*index];
            shakhs[0][*index] = 44;
            if (submultiple == 0)
            {
                printf("\n you choose A%d" , remain);
            }
            if (submultiple == 1)
            {
                printf("\n you choose B%d" , remain);
            }
            if (submultiple == 2)
            {
                printf("\n you choose C%d" , remain);
            }
            if (submultiple == 3)
            {
                printf("\n you choose D%d" , remain);
            }
            break; 
            }
            printf("\nwhich card do you want to play : ");
            getchar();
            scanf("%d" , index);
            }
        }
        if (nobat == 4)
        {
            while (1)
            {
            if (*index > 10 || *index <0 || shakhs[0][*index] == 44 || (shakhs[0][*index] / 11) != harkat4/11 )
            {
                printf("please choose correctly !!");
            }
            else
            {
            int remain = shakhs[0][*index] % 11 ;
            remain = remain +1 ;
            int submultiple = (shakhs[0][*index] / 11) ;
            *harkat = shakhs[0][*index];
            shakhs[0][*index] = 44;
            if (submultiple == 0)
            {
                printf("\n you choose A%d" , remain);
            }
            if (submultiple == 1)
            {
                printf("\n you choose B%d" , remain);
            }
            if (submultiple == 2)
            {
                printf("\n you choose C%d" , remain);
            }
            if (submultiple == 3)
            {
                printf("\n you choose D%d" , remain);
            }
            break; 
            }
            printf("\nwhich card do you want to play : ");
            getchar();
            scanf("%d" , index);
            }
        }   
    }
}
void round0( char* bakhshname , int * bakhshname2 )
{
    printf("\nchoose a type (A or B or C or D) as bakhshname : ");
    scanf("%c" , bakhshname);
    while (1)
    {
    if ( (*bakhshname != 'A') &&  (*bakhshname != 'B') && (*bakhshname != 'C') && (*bakhshname !='D'))
    {
        printf("please choose correctly !!\n");
        
    }
    else
    {
    printf("you choose %c" , *bakhshname);
    break;
    }  
    printf("choose a type (A or B or C or D) as bakhshname : ");
    getchar();
    scanf("%c" , bakhshname);
    }
    if (*bakhshname == 'A')
    {
        *bakhshname2 = 0;
    }
    if (*bakhshname == 'B')
    {
        *bakhshname2 = 1;
    }
    if (*bakhshname == 'C')
    {
        *bakhshname2 = 2;
    }
    if (*bakhshname == 'D')
    {
        *bakhshname2 = 3;
    }
}
void safhe(int point1 , int point2 , int cards[4][11] , int harkat , int harkat2 , int harkat3 , int harkat4 , int set1 , int set2)
    {
    printf("\n");
    for (int i = 1 ; i <= 58; i++)
    {
        if (i == 28 )
        {
           printf("p");
           continue;
        }
        if (i == 29)
        {
            printf("3");
            continue;
        }
        printf(" ");
    }
    printf("\n");
    for (int i = 1 ; i <= 58; i++)
    {
        if (i >= 4 && i<= 54)
        {
            printf("-");
            continue;
        }
        if (i == 58)
        {
            printf("Team 1: %d" , point1);
            continue;
        }
        printf(" ");
    }
    printf("\n");
    for (int i = 1 ; i < 19 ; i++)
    {
        for (int j = 1 ; j <= 57; j++)
        {
            if (i == 7 && j == 24)
            {
                printf("H");
                continue;
            }
            if (i == 7 && j == 25)
            {
                printf("O");
                continue;
            }
            if (i == 7 && j == 26)
            {
                printf("M");
                continue;
            }
            if (i == 7 && j == 27)
            {
                printf("E");
                continue;
            }
            if (i == 7 && j == 29)
            {
                printf(":");
                continue;
            }
            if (i == 7 && j == 31)
            {
                printf("%d" , set1);
                continue;
            }
            if (i == 14 && j == 24)
            {
                printf("A");
                continue;
            }
            if (i == 14 && j == 25)
            {
                printf("W");
                continue;
            }
            if (i == 14 && j == 26)
            {
                printf("A");
                continue;
            }
            if (i == 14 && j == 27)
            {
                printf("Y");
                continue;
            }
            if (i == 14 && j == 29)
            {
                printf(":");
                continue;
            }
            if (i == 14 && j == 31)
            {
                printf("%d" , set2);
                continue;
            }
            if ((i == 10) && ((j == 2)||(j==55)||(j == 56) || (j == 3))) 
            {
                if (j == 2 || j == 55)
                {
                    printf("p");
                }
                if (j == 3 )
                {
                    printf("2");
                }
                if (j == 56)
                {
                    printf("4");
                }
                continue;
            }
            if (j == 4 || j == 54)
            {
                printf("|");
                continue;
            }
            if ( i == 18 && j == 28 && harkat != 0)
            {
                int submultiple = harkat / 11;
                if (submultiple == 0)
                {
                    printf("A");
                }
                if (submultiple == 1)
                {
                    printf("B");
                }
                if (submultiple == 2)
                {
                    printf("C");
                }
                if (submultiple == 3)
                {
                    printf("D");
                }
                continue;
            }
            if ( i == 18 && j == 29 && harkat != 0)
            {
                int count = 0;
                int remain = harkat % 11 ;
                printf("%d" , remain+1);
                remain = remain + 1;
                while (remain != 0)
                {
                    remain  = remain / 10;
                    count++;
                }
                if (count == 2)
                {
                    j++;
                }
                continue;
            }
            if ( i == 10 && j == 5 && harkat2 != 0)
            {
                int submultiple = harkat2 / 11;
                if (submultiple == 0)
                {
                    printf("A");
                }
                if (submultiple == 1)
                {
                    printf("B");
                }
                if (submultiple == 2)
                {
                    printf("C");
                }
                if (submultiple == 3)
                {
                    printf("D");
                }
                continue;
            }
            if ( i == 10 && j == 6 && harkat2 != 0)
            {
                int count = 0;
                int remain = harkat2 % 11 ;
                printf("%d" , remain+1);
                remain = remain + 1;
                while (remain != 0)
                {
                    remain  = remain / 10;
                    count++;
                }
                if (count == 2)
                {
                    j++;
                }
                continue;
            }
            if ( i == 1 && j == 28 && harkat3 != 0)
            {
                int submultiple = harkat3 / 11;
                if (submultiple == 0)
                {
                    printf("A");
                }
                if (submultiple == 1)
                {
                    printf("B");
                }
                if (submultiple == 2)
                {
                    printf("C");
                }
                if (submultiple == 3)
                {
                    printf("D");
                }
                continue;
            }
            if ( i == 1 && j == 29 && harkat3 != 0)
            {
                int count = 0;
                int remain = harkat3 % 11 ;
                printf("%d" , remain+1);
                remain = remain + 1;
                while (remain != 0)
                {
                    remain  = remain / 10;
                    count++;
                }
                if (count == 2)
                {
                    j++;
                }
                continue;
            }
            if ( i == 10 && j ==51  && harkat4 != 0)
            {
                int submultiple = harkat4 / 11;
                if (submultiple == 0)
                {
                    printf("A");
                }
                if (submultiple == 1)
                {
                    printf("B");
                }
                if (submultiple == 2)
                {
                    printf("C");
                }
                if (submultiple == 3)
                {
                    printf("D");
                }
                continue;
            }
            if ( i == 10 && j == 52 && harkat4 != 0)
            {
                int count =0 ;
                int remain = harkat4 % 11 ;
                printf("%d" , remain+1);
                remain = remain + 1;
                while (remain != 0)
                {
                    remain  = remain / 10;
                    count++;
                }
                if (count == 2)
                {
                    j++;
                }
                continue;
            }
            printf(" ");
        }
        printf("\n");
    }
    for (int i = 1 ; i <= 58; i++)
    {
        if (i >= 4 && i<= 54)
        {
            printf("-");
            continue;
        }
        if (i == 58)
        {
            printf("Team 2: %d" , point2);
            continue;
        }
        printf(" ");
    }
    printf("\n");
    for (int i = 1 ; i <= 58; i++)
    {
        if (i == 28 )
        {
           printf("p");
           continue;
        }
        if (i == 29)
        {
            printf("1");
            continue;
        }
        printf(" ");
    }
    printf("\n");
    printf("\n");
    for (int i = 1; i <= 57; i++)
    {
        if (i <= 52 && i>= 8)
        {
            printf("-");
            continue;
        }
        printf(" ");
    }
    printf("\n");
    printf("symbol ");
    for (int i = 0 ; i < 11; i++)
    {
        int submultiple = cards[0][i] / 11;
        if (submultiple == 0)
        {
            printf("| A ");
        }
        if (submultiple == 1)
        {
            printf("| B ");
        }
        if (submultiple == 2)
        {
            printf("| C ");
        }
        if (submultiple == 3)
        {
            printf("| D ");
        }
        if (submultiple == 4)
        {
            printf("| - ");
        }
    }
    printf("|\n");
    for (int i = 1; i <= 57; i++)
    {
        if (i <= 52 && i>= 8)
        {
            printf("-");
            continue;
        }
        printf(" ");
    }
    printf("\nnumber ");
    for (int i = 0 ; i < 11; i++)
    {
        if (cards[0][i] == 44)
        {
            printf("| 0 ");
            continue;
        }
        int remain = cards[0][i] % 11 ;
        remain = remain + 1;
        int count = 0 ;
        int remain2 = remain;
        while (remain2 > 0)
        {
            remain2  = remain2 / 10;
            count++;
        }
        if (count == 1)
        {
             printf("| %d " , remain);
        }
        else if (count == 2)
        {
            printf("| %d" , remain);
        }
    }
    printf("|\n");
    for (int i = 1; i <= 57; i++)
    {
        if (i <= 52 && i>= 8)
        {
            printf("-");
            continue;
        }
        printf(" ");
    }
    printf("\n         0   1   2   3   4   5   6   7   8   9   10");
    }