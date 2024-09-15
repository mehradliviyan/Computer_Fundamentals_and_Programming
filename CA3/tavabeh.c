#include<stdio.h>
#include<stdlib.h>
#include"tavabeh.h"
char* vooroodi_gereftan()
{
    int flag = 0;
    char  flag_vooroodi;
    int i = 0  ;
    char* vooroodi;/*keshidan shekli be onvan vooroodi*/
    printf("#\t\tplease choose one :\t\t\t\t\t\t\t\t   #\n#\t\t\t*** sign up : signup <user name> <password>\t\t\t\t   #\n#\t\t\t*** log in : login <user name> <password>\t\t\t\t   #\n#\t\t\t*** post : post <text>\t\t\t\t\t\t\t   #\n#\t\t\t*** like a post : like <user name> <post ID>\t\t\t\t   #\n#\t\t\t*** log out : logout\t\t\t\t\t\t\t   #\n#\t\t\t*** delete a post : delete <post_id>\t\t\t\t\t   #\n#\t\t\t*** info : info\t\t\t\t\t\t\t\t   #\n#\t\t\t*** find a user : find_user <username>\t\t\t\t\t   #\n");
    printf("#\t\t\t*** Exit : exit");
    for (int i = 0; i <61; i++)
    {
        printf(" ");
    }
    printf("#\n");
    for (int i = 0; i < 100; i++)
    {
        printf("#");
    }
    printf("\n");
    vooroodi = (char*)malloc(sizeof(char));
    checkmallocchar(vooroodi , 2);
    while (1)/*gereftan tak tak vooroodi ha va realloc kardan input*/
    {
        vooroodi = (char*)realloc(vooroodi , sizeof(char) * (i+2));
        checkreallocchar(vooroodi , i+2);
        flag_vooroodi = getchar();
        if (flag_vooroodi == '\n')
        {
            vooroodi[i] = '\0';
            break;
        }
        vooroodi[i] = flag_vooroodi;
        i++;
    }
    /*check karadan vooroodi braye dariaft*/
    if (!((vooroodi[0] == 's' && vooroodi[1] == 'i' && vooroodi[2] == 'g' && vooroodi[3] == 'n' && vooroodi[4] == 'u' && vooroodi[5] == 'p' && vooroodi[6] == ' ' && vooroodi[7] != '\0') || (vooroodi[0] == 'l' && vooroodi[1] == 'o' && vooroodi[2] == 'g' && vooroodi[3] == 'i' && vooroodi[4] == 'n' && vooroodi[5] == ' ' && vooroodi[6] != '\0' ) || (vooroodi[0] == 'p' && vooroodi[1] == 'o' && vooroodi[2] == 's' && vooroodi[3] == 't' &&  vooroodi[4] == ' ' && vooroodi[5] != '\0') || (vooroodi[0] == 'l' && vooroodi[1] == 'i' && vooroodi[2] == 'k' && vooroodi[3] == 'e' && vooroodi[4] == ' ' && vooroodi[5] != '\0') || (vooroodi[0] == 'l' && vooroodi[1] == 'o' && vooroodi[2] == 'g' && vooroodi[3] == 'o' && vooroodi[4] == 'u' && vooroodi[5] == 't' && vooroodi[6] == '\0') || (vooroodi[0] == 'd' && vooroodi[1] == 'e' && vooroodi[2] == 'l' && vooroodi[3] == 'e' && vooroodi[4] == 't' && vooroodi[5] == 'e' && vooroodi[6] == ' ' && vooroodi[7] != '\0') || (vooroodi[0] == 'i' && vooroodi[1] == 'n' && vooroodi[2] == 'f' && vooroodi[3] == 'o' && vooroodi[4] == '\0') || (vooroodi[0] == 'f' && vooroodi[1] == 'i' && vooroodi[2] == 'n' && vooroodi[3] == 'd' && vooroodi[4] == '_' && vooroodi[5] ==  'u' && vooroodi[6] == 's' && vooroodi[7] == 'e' && vooroodi[8] == 'r' && vooroodi[9] == ' ' && vooroodi[10] != '\0') || (vooroodi[0] == 'e' && vooroodi[1] == 'x' && vooroodi[2] == 'i' && vooroodi[3] == 't' && vooroodi[4] == '\0') ))
    {
        free(vooroodi);
        flag = 1;
        while (flag)
        {
            i = 0;
            printf("please enter correct\n");
            vooroodi = (char*)malloc(sizeof(char)*2);
            checkmallocchar(vooroodi , 2);
            while (1)
           {
                vooroodi = realloc(vooroodi , sizeof(char) *(i+2));
                checkreallocchar(vooroodi , i+2);
                flag_vooroodi = getchar();
                if (flag_vooroodi == '\n')
                {
                    vooroodi[i] = '\0';
                    break;
                }
                vooroodi[i] = flag_vooroodi;
                i++;
            }
            if ((vooroodi[0] == 's' && vooroodi[1] == 'i' && vooroodi[2] == 'g' && vooroodi[3] == 'n' && vooroodi[4] == 'u' && vooroodi[5] == 'p' && vooroodi[6] == ' ' && vooroodi[7] != '\0') || (vooroodi[0] == 'l' && vooroodi[1] == 'o' && vooroodi[2] == 'g' && vooroodi[3] == 'i' && vooroodi[4] == 'n' && vooroodi[5] == ' '  && vooroodi[6] != '\0') || (vooroodi[0] == 'p' && vooroodi[1] == 'o' && vooroodi[2] == 's' && vooroodi[3] == 't' && vooroodi[4] ==' ' && vooroodi[5] != '\0') || (vooroodi[0] == 'l' && vooroodi[1] == 'i' && vooroodi[2] == 'k' && vooroodi[3] == 'e' && vooroodi[4] == ' ' && vooroodi[5] != '\0') || (vooroodi[0] == 'l' && vooroodi[1] == 'o' && vooroodi[2] == 'g' && vooroodi[3] == 'o' && vooroodi[4] == 'u' && vooroodi[5] == 't' && vooroodi[6] == '\0') || (vooroodi[0] == 'd' && vooroodi[1] == 'e' && vooroodi[2] == 'l' && vooroodi[3] == 'e' && vooroodi[4] == 't' && vooroodi[5] == 'e' && vooroodi[6] == ' ' && vooroodi[7] != '\0') || (vooroodi[0] == 'i' && vooroodi[1] == 'n' && vooroodi[2] == 'f' && vooroodi[3] == 'o' && vooroodi[4] == '\0' ) || (vooroodi[0] == 'f' && vooroodi[1] == 'i' && vooroodi[2] == 'n' && vooroodi[3] == 'd' && vooroodi[4] == '_' && vooroodi[5] ==  'u' && vooroodi[6] == 's' && vooroodi[7] == 'e' && vooroodi[8] == 'r' && vooroodi[9] == ' ' && vooroodi[10] != '\0') || (vooroodi[0] == 'e' && vooroodi[1] == 'x' && vooroodi[2] == 'i' && vooroodi[3] == 't' && vooroodi[4] == '\0'))
            {
                flag = 0;
            }
        }
    }
    return vooroodi;
}
void board(int loginstate , char username[]  , char* vooroodi)
{
    for (int i = 0; i < 100; i++)
    {
        printf("-");
    }
    printf("\n");
    if (loginstate == 0)/*neshan dadan vaziat login va account login karde*/
    {
        printf("login state : NO\t\tyou have logged in as : ----- \n" );
        
    }
    else
    {
        printf("login state : YES\t\tyou have loged in as : %s \n"  , username);
    }
    for (int i = 0; i < 100; i++)
    {
        printf("#");
    }
    printf("\n");
}
void tashkhis_vooroodi(char* vooroodi , id* head , int* loginstate , char* login_show , int* loginnumber , int* program)
{/* decode kardan vooroodi va anjam amaliat*/
    if ((vooroodi[0] == 's') )
    {
        signup(vooroodi , head , *loginstate);
    }
    if (vooroodi[0] == 'l' && vooroodi[1] == 'o' && vooroodi[2] == 'g' && vooroodi[3] == 'i' && vooroodi[4] == 'n' )
    {
        login(vooroodi , loginstate , head , login_show , loginnumber);
    }
    if (vooroodi[0] == 'p'  )
    {
        post(head , vooroodi , *loginstate , *loginnumber);
    }
    if (vooroodi[0] == 'l' && vooroodi[1] == 'i'  )
    {
        like(vooroodi , head , *loginstate , login_show);
    }
    if (vooroodi[0] == 'l' && vooroodi[1] == 'o' && vooroodi[2] == 'g' && vooroodi[3] == 'o' && vooroodi[4] == 'u' && vooroodi[5] == 't')
    {
        logout(loginstate , loginnumber);
    }
    if (vooroodi[0] == 'd')
    {
        delete_post(vooroodi , head , *loginstate , *loginnumber);
    }
    if (vooroodi[0] == 'i')
    {
        info(*loginstate , head ,login_show );
    }
    if (vooroodi[0] == 'f')
    {
        find_user(head , vooroodi , *loginstate);
    }
    if (vooroodi[0] == 'e')
    {
        exit_program( program , head);
    }
    
}
void exit_program(int* program , id*head)
{
    /*kharj shodan az barname*/
id* temp = head->nextid;
id* cur = head->nextid; 
for (int i = 0; temp != NULL; i++)/*free kardan afrad*/
{
    temp = temp->nextid;
    free(cur->username);/*free kardan etlaat*/
    free(cur->password);
    posts* temppost = cur->post->nextpost;
    posts* curpost = cur->post->nextpost;
    for (int z = 0; temppost != NULL; z++)/*free kardan post ha*/
    {
        temppost = temppost->nextpost;    
        free(curpost->post);
        for (int j = 0;curpost->likers[j] != NULL ; j++)/*free kardan afrad post konande*/
        {
            free(curpost->likers[j]);
        }   
        free(curpost->likers);
        free(curpost);
        if (temppost == NULL)
        {
            break;
        }
        curpost = temppost;
    }
    cur = temp;
}
printf("exit compeletly");
*program = 0;/*khoorooj az barname*/
}
id* akharin_signup(id* head)
{
    id* current = head->nextid;/*peida karadan id null*/
    while (current != NULL)
    {
        current = current->nextid;
    }
    return current;
}
void signup(char* vooroodi , id* head , int loginstate)
{
        if (loginstate == 1)/*check kardan login ghabli*/
        {
            printf("you have loggedin before !!!\n");
            return;
        }
        int counterspace = 0;
        for (int i = 0; vooroodi[i] != '\0'; i++)
        {
            if (vooroodi[i] == ' ')
            {
                counterspace++;
            }
        }
        if (counterspace != 2)/*check kardan 2 space dashtan vooroodi*/
        {
            printf("please enter correct\n");
            return;
        } 
        int c;
        for ( c = 0; vooroodi[c] != '\0'; c++)
        {
            if (vooroodi[c] == ' ')
            {
                counterspace++;
            }
            if (counterspace == 4)
            {
                break;
            }
        }
       if (vooroodi[c+1] == '\0')/*check kardan dashtan password*/
        {
            printf("please enter correct\n");
            return;
        }
        int username_len =0 ;
        int password_len =0 ;
        for (int i = 7 ; vooroodi[i] != ' '; i++)
        {
            username_len = i - 6 ;
        }
        char* check = (char*)malloc(sizeof(char) * username_len);
        checkmallocchar(check , username_len);
        for (int i = 0; i < username_len ; i++)
        {
            check[i] = vooroodi[ i + 7];
        }
        check[username_len] = '\0';
        id* temp_check = head;
        while (temp_check)/*check kardan id tekrari*/
        {
            if (moghayese_do_str(check , temp_check->username) || moghayese_do_str(check , "login") || moghayese_do_str(check , "signup") || moghayese_do_str(check , "post") || moghayese_do_str(check , "delete") || moghayese_do_str(check , "find_user") || moghayese_do_str(check , "info") || moghayese_do_str(check , "logout") || moghayese_do_str(check , "like"))
            {
                printf("sorry , this user name had been used , try another one !!!\n");
                free(check);
                return;
            }
            temp_check = temp_check->nextid;
        }
        free(check);
        id* user_jadid = akharin_signup(head);/*gerftan username va gharar dadan on*/
        user_jadid = (id*)malloc(sizeof(id));
        checkmallocid(user_jadid);
        user_jadid->username = (char*)malloc(sizeof(char) * (username_len+1));
        checkmallocchar(user_jadid->username , username_len+1);
        for (int i = 0; i < username_len ; i++)
        {
            user_jadid->username[i] = vooroodi[ i + 7];
        }
        user_jadid->username[username_len] = '\0';
        for (int i = 8 + username_len; vooroodi[i] != '\0'; i++)
        {
            password_len = i-7-username_len;
        }
        user_jadid->password = (char*)malloc(sizeof(char)*(password_len+1));/*gerftan password va gharar dadan on*/
        checkmallocchar(user_jadid->password , password_len+1);
        for (int i = 0; i < password_len; i++)
        {
            user_jadid->password[i] =  vooroodi[8 + username_len + i]; 
        }
        user_jadid->password[password_len] = '\0';
        user_jadid->nextid = NULL;
        user_jadid->post = (posts*)malloc(sizeof(posts)) ;
        user_jadid->post->post = NULL;
        user_jadid->post->like = 0;
        user_jadid->post->nextpost = NULL;
        id* temp;
        temp = head;
        while (temp ->nextid != NULL)/*gharar dadan dar akhar list*/
        {
            temp = temp->nextid;
        }
        temp->nextid = user_jadid;
        
        printf("signup succesfully\n");
}
void login(char* vooroodi , int* loginstate , id* head , char* login_show , int* loginnumber)
{
     int counterspace = 0;
        for (int i = 0; vooroodi[i] != '\0'; i++)
        {
            if (vooroodi[i] == ' ')
            {
                counterspace++;
            }
        }
        if (counterspace != 2)/*check kardan 2 space dashtan vooroodi*/
        {
            printf("please enter correct\n");
            return;
        } 
        int c;
        for ( c = 0; vooroodi[c] != '\0'; c++)
        {
            if (vooroodi[c] == ' ')
            {
                counterspace++;
            }
            if (counterspace == 4)
            {
                break;
            }
        }
       if (vooroodi[c+1] == '\0')/*check kardan dashtan password*/
        {
            printf("please enter correct\n");
            return;
        }
    if (*loginstate == 1)/*check kardan login ghabli*/
    {
        printf("you have loggedin before !!!\n");
        return;
    }
    int flag = 0;
    char* username_l;
    char* password_l;
    int username_len =0 ;
    int password_len =0 ;
    for (int i = 6 ; vooroodi[i] != ' '; i++)
    {
        username_len = i - 5 ;
    }
    for (int i = 7 + username_len; vooroodi[i] != '\0'; i++)
    {
        password_len = i-6-username_len;
    }
    username_l = (char*)malloc(sizeof(char) * (username_len+1));/*gerftan password va username*/
    checkmallocchar(username_l , username_len+1);
    password_l = (char*)malloc(sizeof(char) * (password_len+1));
    checkmallocchar(password_l , password_len+1);
    for (int i = 0; i < username_len ; i++)
    {
        username_l[i] = vooroodi[ i + 6];
    }
    for (int i = 0; i < password_len; i++)
    {
        password_l[i] =  vooroodi[7 + username_len + i]; 
    }
    username_l[username_len] = '\0';
    password_l[password_len] = '\0';
    id* temp;
    temp = head;
    while (temp)
    {
        if (moghayese_do_str(username_l , temp->username) && moghayese_do_str(password_l , temp->password))/*check kardan voojood dashtan va dorost boodan password va username*/
        {
            *loginstate = 1 ;
            login_show = (char*)realloc(login_show , sizeof(char)* (username_len+1)); 
            checkreallocchar(login_show , username_len+1);
            for (int z = 0; z < username_len; z++)
            {
                login_show[z] = username_l[z];
            }
            login_show[username_len] ='\0' ;
            flag = 1 ;
            break;
        }
        else
        {
            flag = 0;
        }
        temp = temp->nextid;
        *loginnumber = *loginnumber + 1;/*taghir vaziat login be login karde*/
    }
    if (!flag)
    {
        printf("username or password is incorrect !!!\n");
        *loginnumber = 1;
        free(username_l);
        free(password_l);
        return;
    }
    free(username_l);
    free(password_l);
    printf("login succesfully\n");
}
int moghayese_do_str(char a1[] , char a2[])/*moghayese kardan do str*/
{
    int a1_len = 0 , a2_len = 0 ;
    for ( int i = 0; a1[i] != '\0' ; i++)
    {
        a1_len++;
    }
    for (int i = 0; a2[i] != '\0' ; i++)
    {
        a2_len++;
    }
    if (a2_len != a1_len)
    {
        return 0 ;
    }
    for (int i = 0; i < a1_len; i++)
    {
        if (a1[i] != a2[i])
        {
            return 0;
        }        
    }
    return 1 ;
}
void post(id* head ,char* vooroodi , int loginstate ,int loginnumber)
{
    if (loginstate == 0)/*check kardan on ke login karde bashad*/
    {
        printf("You should login frist !!!\n");
        return;
    }
    int count_post = 1;
    for (int i = 5 ; vooroodi[i] != '\0'; i++)/*shemordan character hay post*/
    {
        count_post++;
    }
    id* temp = head;
    int count = 1;
    for (int i = 1 ; i < loginnumber; i++)/*peida kardan id mord nazar*/
    {   count++;
        temp = temp->nextid;
    }
    posts* cur ;
    cur = (posts*) malloc(sizeof(posts));
    checkmallocposts(cur);
    cur->post = (char*)malloc(sizeof(char) * (count_post));
    checkmallocchar(cur->post , count_post+1);
    for (int i = 5; vooroodi[i] != '\0'; i++)/*gharar dadan matn post*/
    {
        cur->post[i-5] = vooroodi[i];
    }
    cur->post[count_post-1] = '\0';
    cur->like = 0;
    cur->likers = (char**)malloc(sizeof(char*) *1);
    checkmalloccharpointer(cur->likers , 1);
    cur->likers[0] = (char*)malloc(sizeof(char)*5);
    checkmallocchar(cur->likers[0] , 5);
    cur->likers[0][0] = 'h';
    cur->likers[0][1] = 'e';
    cur->likers[0][2] = 'a';
    cur->likers[0][3] = 'd';
    cur->likers[0][4] = '\0';
    cur->likers[1] = NULL;
    cur->nextpost = NULL;
    posts* temp_post = temp->post;
    int count2 = 1;
    while (temp_post->nextpost != NULL)/*peida kardan post ghabl null*/
    {
        count2++;
        temp_post = temp_post->nextpost;
    }
    temp_post->nextpost = cur;
    printf("posted seccesfully\n");
    return ;
}
void like(char* vooroodi ,id* head , int loginstate , char* loginshow)
{
     int counterspace = 0;
        for (int i = 0; vooroodi[i] != '\0'; i++)
        {
            if (vooroodi[i] == ' ')
            {
                counterspace++;
            }
        }
        if (counterspace != 2)/*check kardan 2 space dashtan vooroodi*/
        {
            printf("please enter correct\n");
            return;
        } 
        int c;
        for ( c = 0; vooroodi[c] != '\0'; c++)
        {
            if (vooroodi[c] == ' ')
            {
                counterspace++;
            }
            if (counterspace == 4)
            {
                break;
            }
        }
       if (vooroodi[c+1] == '\0')/*check kardan dashtan shomare*/
        {
            printf("please enter correct\n");
            return;
        }
    if (loginstate == 0)/*check kardan on ke login karde bashad*/
    {
        printf("please login frist !!!\n");
        return;
    }
    int count_user=0 , count_post=0 ; 
    for (int i = 5 ; vooroodi[i] != ' '; i++)/*shemordan character hay user*/
    {
        count_user++;
    }
    for (int i = 6 + count_user ; vooroodi[i] != '\0'; i++)/*shemordan character hay shomare post*/
    {
        count_post++;
    }
    char* user_l = (char*)malloc(sizeof(char) * (count_user+1));
    checkmallocchar(user_l , count_user+1);
    for (int i = 0; i < count_user ; i++)
    {
        user_l[i] = vooroodi[ i + 5];
    }
    user_l[count_user] = '\0'; 
    id* temp = head;
    while ( temp != NULL)
    {
        if ((moghayese_do_str(user_l , temp->username)))
        {
           break;
        }
        temp = temp->nextid; 
    }
    if (temp == NULL)/*check kardan username ke voojood darad ya kheir*/
        {
            printf("The username didn't found !!!\n");
            free(user_l);
            return;
        }
    int* post_l = (int*)malloc(sizeof(int) * count_post);
    for (int i = 0; i < count_post; i++)/*hesab kardan shomare post ba int*/
    {
        post_l[i] = (int)vooroodi[6+count_user+i] - 48;
    }
    int numberpost = 1;
    for (int i = count_post-1; i >= 0; i--)
    {
        numberpost = numberpost + (post_l[count_post-1-i] * power10(i));
    }   
    posts* temp_post = temp->post;     
    for (int i = 1; i < numberpost ; i++)
    {
        temp_post = temp_post->nextpost;
        if (temp_post == NULL)/*check kardan post ke voojood darad ya kheir*/
        {
            printf("The post didn't found !!!\n");
            free(user_l);
            free(post_l);
            return;
        }
    }
    int counter = 0;
    for (int j = 0; loginshow[j] != '\0'; j++)
    {
        counter++;
    }
    for (int k = 1; temp_post->likers[k] != NULL; k++)
    {
        if (moghayese_do_str(loginshow , temp_post->likers[k]))/*check kardan username ke ghablan like karde ya kheir*/
        {
            printf("you liked this post before !!!\n");
            return;
        }
    }
    temp_post->like = (temp_post->like )+ 1;/*ezafe kardan tedad like*/
    temp_post->likers = (char**)realloc(temp_post->likers , sizeof(char*) * (temp_post->like + 1));
    checkrealloccharpointer(temp_post->likers , temp_post->like + 1);
    temp_post->likers[(temp_post->like) ] = (char*) malloc(sizeof(char) * (counter+1));
    checkmallocchar(temp_post->likers[temp_post->like] , counter+1);
    int z = 0;
    for (z = 0; loginshow[z] != '\0'; z++)/*ezafe kardan esme shakhs be like konandeha*/
    {
        temp_post->likers[(temp_post->like)][z] = loginshow[z];
    }
    temp_post->likers[(temp_post->like)][z] = '\0';
    temp_post->likers[temp_post->like +1] = NULL;
    free(user_l);
    free(post_l);
    printf("liked succesfully\n");
}
int power10(int pow)/*hesab kardan tavan 10 adad*/
{
    int a = 1 ;
    for (int i = 0; i < pow; i++)
    {
        a = a * 10 ;
    }
    return a ;
}
void logout(int* loginstate , int* loginnumber)
{
    if (*loginstate == 1)/*check kardan on ke login karde bashad*/
    {
        printf("You logged out !!!\n");
        *loginstate = 0;/*elam vaziat logout*/
        *loginnumber = 1;
        return;
    }
    if (*loginstate == 0)
    {
        printf("you didn't even login !!!\n");/*elam vaziat login nakarde*/
        return;
    }
}
void info(int loginstate , id* head , char* login_show)
{
    if (loginstate == 0)/*check kardan on ke login karde bashad*/
    {
        printf("login frist !!!\n");
        return;
    }
    id* temp = head;
    while (!moghayese_do_str(login_show , temp->username))
    {
        temp = temp->nextid;
    }
    printf("username : %s\n" , temp->username);/*etelaat id*/
    printf("password : %s\n" , temp->password);
    int i = 0;
    posts* post = temp->post->nextpost;
    for ( i = 1 ; post != NULL; i++)/*etelaat post ha*/
    {
        printf("post %d :\n" , i);
        printf("%s\n" , post->post);
        printf("like : %d\n" , post->like);
        printf("\tliked by :\n");
        if (post->like == 0)/*check kardan voojood like konande ya kheir*/
        {
            printf("\t\tNO BODY\n");
        }   
        for (int j = 1; post->likers[j] != NULL; j++)
        {     
            printf("\t\t@ %s\n" , post->likers[j]);
        }
        post = post->nextpost;
    }
    if (i == 1)/*check kardan voojood post ya kheir*/
    {
        printf("no post has been shared !!!\n");
    }
    return;
}
void checkmallocid(id* check)/*check kardan malloc*/
{
    while (check == NULL)
    {
        check = (id*)malloc(sizeof(id));
    }
    return;
}
void checkmallocposts(posts* check)/*check kardan malloc*/
{
    while (check == NULL)
    {
        check = (posts*)malloc(sizeof(posts));
    }
    return;
}
void checkmallocchar(char* check , int number)/*check kardan malloc*/
{
    while (check == NULL)
    {
        check = (char*)malloc(sizeof(char) * number);
    }
    return;
}
void delete_post(char* vooroodi , id* head , int loginstate , int loginnumber) 
{
    if (loginstate == 0)/*check kardan on ke login karde bashad*/
    {
        printf("You should login frist !!!\n");
        return;
    }
    id* temp = head;
    for (int i = 1 ; i < loginnumber; i++)/*peida kardan id mordnazar*/
    {
        temp = temp->nextid;
    }
    posts* perv = temp->post;
    if (perv == NULL)/*check kardan in ke post voojood dard*/
    {
        printf("there is no post !!!\n");
        return;
    }
    int count_post = 0 , number_post = 0;
    for (int i = 7  ; vooroodi[i] != '\0'; i++)
    {
        count_post++;
    }
    for (int i = 0; i < count_post; i++)/*peida kardan shomare post*/
    {
        number_post = number_post*10 + ((int)vooroodi[7+i]-48);
    }
    for (int i = 1; i < number_post; i++)
    {
        perv = perv->nextpost;
        if (perv == NULL)/*check kardan in ke post voojood dard*/
        {
            printf("this post number doesn't exist\n");
            return;
        }
    }
    posts* deleted = perv->nextpost;
    if (deleted == NULL)/*check kardan in ke post voojood dard*/
    {
        printf("this post number doesn't exist\n");
        return;
    }
    posts* cur = deleted->nextpost;
    perv->nextpost = cur;/*chasboondan linked list ghable va badi ba ham*/
    for (int i = 0; deleted->likers[i] != NULL; i++)/*free kardan like konandeha*/
    {
        free(deleted->likers[i]);
    }
    free(deleted->likers);
    free(deleted->post);
    free(deleted);
    printf("deleted seccesfully\n");
}
void find_user(id*head , char* vooroodi , int loginstate)
{
    if (loginstate == 0)/*check kardan on ke login karde bashad*/
    {
        printf("You should login frist !!!\n");
        return;
    }
    char* found_user;
    int count_user = 0;
    for (int i = 10; vooroodi[i] != '\0'; i++)
    {
        count_user++;
    }
    found_user = (char*)malloc(sizeof(char) * (count_user+1));
    checkmallocchar(found_user , count_user+1);
    for (int i = 0; i < count_user; i++)
    {
        found_user[i] = vooroodi[10+i];
    }
    found_user[count_user] = '\0';
    id* temp = head;
    int flag = 0;
    while (temp)
    {
        if (moghayese_do_str(found_user , temp->username))
        {
            flag = 1;
            break;
        }
        temp = temp->nextid;
    }
    if (flag)
    {
        printf("username : %s\n" , temp->username );
        int i = 0;
        posts* post = temp->post->nextpost;
        for ( i = 1 ; post != NULL; i++)/*chap kardan post ha va like konande ha*/
        {
            printf("post %d :\n" , i);
            printf("%s\n" , post->post);
            printf("like : %d\n" , post->like);
            printf("\tliked by :\n");
            if (post->like == 0)
            {
                printf("\t\tNO BODY\n");/*check kardan in ke like konande post voojood dard*/
            }   
            for (int j = 1; post->likers[j] != NULL; j++)
            {     
                printf("\t\t@ %s\n" , post->likers[j]);
            }
            post = post->nextpost;
        }
        if (i == 1)/*check kardan in ke post voojood dard*/
        {
            printf("no post has been shared !!!\n");
        }
        return;       
    }
    else/*check kardan in ke user voojood dard*/
    {
        printf("The username didn't found !!!\n");
        free(found_user);
        return;
    }
    free(found_user);
    return;
}
void checkreallocchar(char* check , int num)/*check kardan realloc*/
{
    while (!check)
    {
        check = (char*)realloc(check , sizeof(char)*num);
    }
    return;
}
void checkrealloccharpointer(char** check , int num)/*check kardan realloc*/
{
    while (!check)
    {
        check = (char**)realloc(check , sizeof(char*) * num);
    }
    return;
}
void checkmalloccharpointer(char** check , int num)/*check kardan malloc*/
{
    while (!check)
    {
        check = (char**)malloc( sizeof(char*) * num);
    }
    return;
}
void txt(id* head)
{            
    FILE* poststxt = fopen("posts.txt" , "w");/*baz kardan file txt be halt write*/
    while (!poststxt)/*check kardan null naboodan va kamel baz shodan file*/
    {
        poststxt = fopen("posts.txt" , "w");
    }
    FILE* accounts = fopen("accounts.txt" , "w");/*baz kardan file txt be halt write*/
    while (!accounts)/*check kardan null naboodan va kamel baz shodan file*/
    {
        accounts = fopen("accounts.txt" , "w");
    }
    id* temp = head->nextid;
    for (int i = 0; temp != NULL ; i++)
    {   
        /*neveshtan id ha dar file accounts*/
        posts* temppost = temp->post->nextpost;
        int username_len =0;
        int password_len = 0;
        int postcount = 0;
        for ( postcount = 0; temppost != NULL; postcount++){
            int count_post = 0;
            for (count_post = 0;temppost->post[count_post] != '\0'; count_post++){}

            fwrite(temppost->post , sizeof(char) , count_post , poststxt);
            int username_len = 0;
            for ( username_len = 0; temp->username[username_len] != '\0'; username_len++){}
            fprintf(poststxt , " ");
            fwrite(temp->username , sizeof(char) , username_len , poststxt);
            fprintf(poststxt , " %d\n" , temppost->like);
            temppost = temppost->nextpost;
        }
        for ( username_len = 0; temp->username[username_len] != '\0'; username_len++){}
        for ( password_len = 0; temp->password[password_len] != '\0'; password_len++){}
        fwrite(temp->username , sizeof(char) , username_len, accounts);
        fprintf(accounts , " ");
        fwrite(temp->password , sizeof(char) , password_len , accounts);
        fprintf(accounts , " %d\n" , postcount);
        temp = temp->nextid;
    }/*bastan har do file*/
    fclose(accounts);
    fclose(poststxt);
}