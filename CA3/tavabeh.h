#include<stdio.h>
#include<stdlib.h>
typedef struct posts
    {
        char* post;
        int like;
        char** likers;
        struct posts* nextpost;
    }posts;
typedef struct id
{
    char* username ;
    char* password ;
    posts* post;
    struct id* nextid;
} id;
void checkrealloccharpointer(char** check , int num);
void checkmalloccharpointer(char** check , int num);
void post(id* head ,char* vooroodi , int loginstate ,int loginnumber);
void exit_program(int* program , id* head);
void checkreallocchar(char* check , int num);
void checkmallocid(id* check);
void delete_post(char* vooroodi , id* head , int loginstate , int loginnumber);
void checkmallocposts(posts* check);
void checkmallocchar(char* check , int number);
int power10(int pow);
void like(char* vooroodi ,id* head , int loginstate , char* loginshow);
void board(int loginstate , char username[]  , char* vooroodi);
char* vooroodi_gereftan();
void tashkhis_vooroodi(char* vooroodi , id* head , int* loginstate ,char* login_show , int* loginnumber , int* program);
id* akharin_signup(id* head);
void signup(char* vooroodi , id* head , int loginstate);
void login(char* vooroodi , int* loginstate , id* head , char* login_show , int* loginnumber);
int moghayese_do_str(char a1[] , char a2[]);
void find_user(id*head , char* vooroodi , int loginstate);
void logout(int* loginstate , int* loginnumber);
void info(int loginstate , id* head , char* login_show);
void txt(id* head);