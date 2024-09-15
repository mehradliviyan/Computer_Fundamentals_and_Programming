#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"tavabeh.h"
void shuffle_card(int* card);
int main()
{
    int set1 = 0,set2=0 , flag = 0;
    while (set1 < 5 && set2 <5)
    {
    int round =0 , point1 =0 , point2 =0 ,index = 11;
    int harkat = 0 , harkat2 = 0 , harkat3 =0 , harkat4 = 0 , bakhshname2 =0 , nobat=0; 
    char bakhshname;
    int cards[44];
    int shakhs[4][11];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            shakhs[i][j] = 44;
        }   
    }
    shuffle_card(cards);
    for (int i = 0; i < 5; i++)
    {
        shakhs[0][i] = cards[i];
    }
    safhe(point1 , point2 , shakhs , harkat , harkat2 ,harkat3 , harkat4 , set1 , set2);
    round0( &bakhshname , &bakhshname2 );
    pakhshe_card(shakhs , cards);
    safhe(point1 , point2 , shakhs , harkat , harkat2 , harkat3 ,harkat4 , set1 , set2);
    round1(shakhs , &index , &harkat , harkat2 , harkat3 , harkat4 , flag , nobat);
    getchar();
    safhe(point1 , point2 , shakhs , harkat ,harkat2  , harkat3 , harkat4 , set1 , set2);
    round2(shakhs , &harkat2 , harkat , bakhshname2 );
    safhe(point1 , point2 , shakhs , harkat , harkat2 ,harkat3 , harkat4 , set1 , set2);
    round3( shakhs , &harkat3 , harkat , bakhshname2 );
    safhe(point1 , point2 , shakhs , harkat ,harkat2 , harkat3 , harkat4 , set1 , set2);
    round4(shakhs , &harkat4 , harkat , bakhshname2);
    moghayese(harkat , harkat2 , harkat3 , harkat4 , &nobat , bakhshname2 , &point2 , &point1);
    safhe(point1 , point2 , shakhs , harkat , harkat2 , harkat3 , harkat4 , set1 , set2);
    if (nobat == 1 || nobat == 3)
    {
        printf("\nTeam 1 won!");
        printf("\nplease press enter button");
        getchar();
    }
    if (nobat == 2 || nobat == 4)
    {
        printf("\nTeam 2 won!");
        printf("\nplease press enter button");
        getchar();
    }
    harkat = 0;
    harkat2 = 0;
    harkat3 = 0;
    harkat4 = 0;
    while (point1 < 6 && point2< 6)
    {
    if (nobat == 1)
    {
    flag = 0;
    safhe(point1 , point2 , shakhs , harkat , harkat2 , harkat3 ,harkat4 , set1 , set2);
    round1(shakhs , &index , &harkat , harkat2 , harkat3 , harkat4 , flag , nobat);
    safhe(point1 , point2 , shakhs , harkat , harkat2 , harkat3 ,harkat4 , set1 , set2);
    round2(shakhs , &harkat2 , harkat , bakhshname2 );
    safhe(point1 , point2 , shakhs , harkat , harkat2 , harkat3 ,harkat4 , set1 , set2);
    round3( shakhs , &harkat3 , harkat , bakhshname2 );
    safhe(point1 , point2 , shakhs , harkat , harkat2 , harkat3 ,harkat4 , set1 , set2);
    round4(shakhs , &harkat4 , harkat , bakhshname2);
    safhe(point1 , point2 , shakhs , harkat , harkat2 , harkat3 ,harkat4 , set1 , set2);
    moghayese(harkat , harkat2 , harkat3 , harkat4 , &nobat , bakhshname2 , &point2 , &point1);
    }
    else if (nobat == 2)
    {
        int remain =0 ;
        for (int i = 0; i < 11; i++)
        {
            if (shakhs[1][i]/11 != bakhshname2 && shakhs[1][i] != 44 && shakhs[1][i] %11 > remain)
            {
                remain = shakhs[1][i] %11;
                harkat = shakhs[1][i];
            }
        }
        if (harkat == 0)
        {
            for (int i = 0; i < 11; i++)
            {
                if (shakhs[1][i] != 44 && shakhs[1][i] % 11 > remain)
                {
                    remain = shakhs[1][i] % 11;
                    harkat = shakhs[1][i];
                }   
            }
        }
        for (int i = 0; i < 11; i++)
        {
            if (shakhs[1][i] == harkat)
            {
                shakhs[1][i] = 44;
            }   
        }
            safhe(point1 , point2 , shakhs , harkat2 , harkat , harkat3 ,harkat4 , set1 , set2);
            round3(shakhs, &harkat3 , harkat , bakhshname2 );
            safhe(point1 , point2 , shakhs , harkat2 , harkat , harkat3 ,harkat4 , set1 , set2);
            round4(shakhs, &harkat4 , harkat , bakhshname2);
            safhe(point1 , point2 , shakhs , harkat2 , harkat , harkat3 ,harkat4 , set1 , set2);
            round1(shakhs, &index , &harkat2 , harkat , harkat3 , harkat4 , flag , nobat);
            safhe(point1 , point2 , shakhs , harkat2 , harkat , harkat3 ,harkat4 , set1 , set2);
            moghayese(harkat2 , harkat , harkat3 , harkat4 , &nobat , bakhshname2 , &point2 , &point1);
    }
    else if (nobat == 3)
    {
        int remain =0 ;
        for (int i = 0; i < 11; i++)
        {
            if (shakhs[2][i]/11 != bakhshname2 && shakhs[2][i] != 44 && shakhs[2][i] %11 > remain)
            {
                remain = shakhs[2][i] %11;
                harkat = shakhs[2][i];
            }
        }
        if (harkat == 0)
        {
            for (int i = 0; i < 11; i++)
            {
                if (shakhs[2][i] != 44 && shakhs[2][i] % 11 > remain)
                {
                    remain = shakhs[2][i] % 11;
                    harkat = shakhs[2][i];
                }   
            }
        }
        for (int i = 0; i < 11; i++)
        {
            if (shakhs[2][i] == harkat)
            {
                shakhs[2][i] = 44;
            }   
        }
            safhe(point1 , point2 , shakhs , harkat3 , harkat2 , harkat ,harkat4 , set1 , set2);
            round4(shakhs, &harkat4 , harkat , bakhshname2);
            safhe(point1 , point2 , shakhs , harkat3 , harkat2 , harkat ,harkat4 , set1 , set2);
            round1(shakhs , &index , &harkat3 , harkat2 , harkat , harkat4 , flag , nobat);
            safhe(point1 , point2 , shakhs , harkat3 , harkat2 , harkat ,harkat4 , set1 , set2);
            round2(shakhs , &harkat2 , harkat  , bakhshname2 );
            safhe(point1 , point2 , shakhs , harkat3 , harkat2 , harkat ,harkat4 , set1 , set2);
            moghayese(harkat3 , harkat2 , harkat , harkat4 , &nobat , bakhshname2 , &point2 , &point1);
    }
    else if (nobat == 4)
    {
        int remain =0 ;
        for (int i = 0; i < 11; i++)
        {
            if (shakhs[3][i]/11 != bakhshname2 && shakhs[3][i] != 44 && shakhs[3][i] %11 > remain)
            {
                remain = shakhs[3][i] %11;
                harkat = shakhs[3][i];
            }
        }
            if (harkat == 0)
            {
                for (int i = 0; i < 11; i++)
                {
                    if (shakhs[3][i] != 44 && shakhs[3][i] % 11 > remain)
                    {
                        remain = shakhs[3][i] % 11;
                        harkat = shakhs[3][i];
                    }   
                }
            }
        for (int i = 0; i < 11; i++)
        {
            if (shakhs[3][i] == harkat)
            {
                shakhs[3][i] = 44;
            }   
        }
            safhe(point1 , point2 , shakhs , harkat4 , harkat2 , harkat3 ,harkat , set1 , set2 );
            round1(shakhs , &index , &harkat4 , harkat2 , harkat3 , harkat , flag , nobat);
            safhe(point1 , point2 , shakhs , harkat4 , harkat2 , harkat3 ,harkat , set1 , set2);
            round2(shakhs , &harkat2 , harkat , bakhshname2 );
            safhe(point1 , point2 , shakhs , harkat4 , harkat2 , harkat3 ,harkat , set1 , set2);
            round3(shakhs , &harkat3 , harkat , bakhshname2 );
            safhe(point1 , point2 , shakhs , harkat4 , harkat2 , harkat3 ,harkat , set1 , set2);
            moghayese(harkat4 , harkat2 , harkat3 , harkat , &nobat , bakhshname2 , &point2 , &point1);
        }
    if (nobat == 1 || nobat == 3)
    {
        printf("\nTeam 1 won!");
        printf("\nplease press enter button");
        getchar();
    }
    if (nobat == 2 || nobat == 4)
    {
        printf("\nTeam 2 won!");
        printf("\nplease press enter button");
        getchar();
    }
    harkat = 0;
    harkat2 = 0 ;
    harkat3 = 0;
    harkat4 = 0;
    }
    if (point1 == 6 )
    {
        if (point2 == 0)
        {
            set1 = set1 + 2;
        }
        else
        {
        set1++;
        }
    }
    if (point2 == 6)
    {
        if (point1 == 0)
        {
            set2 = set2 + 2;
        }
        else
        {
        set2++;
        }
    }
    }
    if (set1 == 5)
    {
        printf("HOME WON !!!!!!!!!!!!!!!!!!!!!");
    }
    if (set2 == 5)
    {
        printf("AWAY WON !!!!!!!!!!!!!!!!!!!!!");
    }
}
void shuffle_card(int* card) {
    int i, r, temp;
    for (temp = 0, i = 0; temp < 44; i++, temp++)
        card[temp] = i;
    srand(time(NULL));
    for (i = 43; i > 0; i--) {
        r = rand() % i;
        temp = card[i];
        card[i] = card[r];
        card[r] = temp;
    }
}
