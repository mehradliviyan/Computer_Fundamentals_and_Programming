#include<stdio.h>
#include<stdlib.h>
#include "tavabeh.h"
int main()
{
    int loginnumber = 1 , program = 1 , loginstate = 0 ;
    char* login_show = (char*)malloc(sizeof(char) *6);
    char* vooroodi ;
    id* head = (id*) malloc(sizeof(id));/*sakhtan yek head bray link list va khali*/
    head->username = (char*)malloc(sizeof(char) * 5);
    head->username = "head";
    head->password = (char*)malloc(sizeof(char) * 5);
    head->password = "head";
    head->nextid = NULL;
    head->post = NULL;
    while (program)/*ajrai barname ta zaman kharj shodan*/
    {
    board(loginstate , login_show, vooroodi);
    vooroodi = vooroodi_gereftan();/*gerftan vooroodi va check kardan on*/
    printf("\n");
    tashkhis_vooroodi(vooroodi , head , &loginstate , login_show , &loginnumber , &program);
    free(vooroodi);
    txt(head);
    }
}
