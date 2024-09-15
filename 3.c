#include<stdio.h>
int main()
{
    int a =0 , b =0, c=0 , max =0 , count = 0;
    float y = 0 , rishe=0 , khata , x =0 , rishe2 =0;
    scanf("%d%d%d" , &a , &b , &c );/*daryaft zarib hai moadele daraje 3 bejoz x3 */
    scanf("%f" , &khata);/*daryaft meghdar khatai mojaz*/
    if (a>b && a>c)/*peida kardan balatarin zarib*/
    {
        max = a;
    }
    else if (b>a  && b>c)
    {
        max = b;
    }
    else if (c>a && c>b)
    {
        max = c;
    }
    else
    {
        max = a ;
    }
    max = max * max ;/*morabaee balatarin zarib*/
    rishe2 = + max*max*max;
    for (float x =  max ;   -max < x ; x = x - 0.0001)/*gharar dadan x hai mokhtalef*/
    {
        y = (x*x*x) + (a*x*x) + (b*x) + c;/*mohasebe meghdar khata*/
        if (y < khata && y>0)
        {
            rishe = x;
            if (rishe2 - rishe > 0.01)/*chap nakardan javab haii ke kamtar az 0.01 az ham fasle darand*/
            {
                printf("%0.4f\n" , x);/*chap kardan x monaseb ta 3 ragham ashar*/
                count = count+1;/*shmaresh tedad rishe chap shode*/
            }
            rishe2 = x;
        }
        else if ((-y) < khata && y<0)
        {
            rishe = x;
            if (rishe2 - rishe > 0.01)/*chap nakardan javab haii ke kamtar az 0.01 az ham fasle darand*/
            {
                printf("%0.4f\n" , x);/*chap kardan x monaseb ta 3 ragham ashar*/
                count = count + 1;/*shmaresh tedad rishe chap shode*/
            }
            rishe2 = x;
        }
        
    }
    for ( count ; count < 3 ; count++)/*chap kardan ebarat bedoon rishe ta 3 rishe kamel shavad*/
    {
        printf("bedoon rishe\n");
    }
}