#include<stdio.h>
int main()
{
    int input1;
    int tabaghe,otaghe,ertefae;
    float paresheavalie;
    scanf("%d%f",&input1,&paresheavalie);
    otaghe = input1%100;/*peyda kardan shomare otagh*/
    tabaghe = input1/100;/*peyda kardan shomare tabaghe*/
    if (otaghe<=4 && otaghe>=1)/*nahie 1 baray shomare otaghe 1 ta 4*/
    {
        printf("1\n");
    }
    else if (otaghe<=8 && otaghe>=5)/*nahie 2 baray shomare otaghe 5 ta 8*/
    {
        printf("2\n");
    }
    else if (otaghe<=12 && otaghe>=9)/*nahie 3 baray shomare otaghe 9 ta 12*/
    {
        printf("3\n");
    }
    else if (otaghe<=16 && otaghe>=13)/*nahie 4 baray shomare otaghe 13 ta 16*/
    {
        printf("4\n");
    }
    ertefae = (tabaghe * 2)-1+2;/*peida kardan ertefae*/
    float tedadparesh = (ertefae - paresheavalie)/(paresheavalie/2);
    int tedadparesh2 =(ertefae - paresheavalie)/(paresheavalie/2);
    if (tedadparesh > tedadparesh2)/*gerd kardan tedad paresh ro be bala*/
    {
        printf("%d" , tedadparesh2 +1);
    }
    else if (tedadparesh == tedadparesh2)
    {
        printf("%d" , tedadparesh2);
    }
}

