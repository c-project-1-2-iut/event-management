#include<stdio.h>
#include<string.h>
#include<conio.h>



int main()
{
     char reg[6][100] ,reg1[100],reg2[100],reg3[100],reg4[100];
     char log[2][100],log1[100],log2[100],log3[100],log4[100];
     char ee2[100],ee3[100],ee4[100];
     char ed[5][100];
     char mod[100][100],mod1[5][100],mod2[100],mod3[100],mod4[100],mod5[100];
     char  del[100][100],del1[100][100],del2[100],del3[100],del4[100];
     char je1[100],je2[5][100];
     char pe1[100][100],pe2[100];
     char ad,bf,eo,de,mo,je,pe;
      int a,c,i,j,b,idx,idx1,d;
 printf("\n\n\n\n\n\n\n\n\        _____________________________WELCOME TO  EVENT MANAGEMENT SYSTEM_________________________________\n\n\n\n\n\n\n\n");
    printf("                                   ENTER 1 to Create Event\n                                   ENTER 2 to Join Event\n");

    FILE *p,*p1,*p2,*p3,*p4;
    scanf("%d",&a);
    system("cls");
      // Registration or log in part.
      if(a==1)
    {
       printf("\n\n\n\n\n\t\t\t\t\tIf you are not registered yet do registration first\n");
       printf("\t\t\t\t\tEnter 3 for registration\n");
        printf("\t\t\t\t\telse\n\t\t\t\t\tEnter 4 for Log in\n");
       scanf("%d",&c);
       getchar();
       system("cls");
       if(c==3)
       {
            printf("Enter your first name:");
           gets(reg[0]);
             printf("\nEnter your last name:");
           gets(reg[1]);
             printf("\nEnter your email id:");
           gets(reg[2]);
             printf("\nEnter your user id:");
           gets(reg[3]);

           repass:


             printf("\nEnter your password:");
           gets(reg[4]);
             printf("\nEnter re-password:");
           gets(reg[5]);


           strcpy(reg1,reg[3]);
           strcpy(reg2,reg[3]);


           strcat(reg1,".txt");
           strcat(reg2,"en.txt");

            strcpy(ee2,reg2);

             if(strcmp(reg[4],reg[5])==0)
          {
              p=fopen(reg1,"w");
              fprintf(p,reg[4]);
              fclose(p);
          }
          else
          {
            printf("Your password is wrong\n");
            goto  repass;
          }

           system("cls");


           printf("Enter your user id:");
           gets(log[0]);
           wpss1:
           printf("\nEnter your password:");
           gets(log[1]);


           p=fopen(reg1,"r");
           fscanf(p,"%s",&reg3);
           fclose(p);

            if(strcmp(reg3,log[1])!=0)
 {
     printf("Your password is wrong .Try again.");
     goto wpss1;
 }
 else
 {
     printf("Access granted");
     getchar();
 }
 system("cls");
       }
         else if(c==4)
       {
        printf("Enter your user id:");
        gets(log[0]);
        wpss2:
        printf("\nEnter your password:");
        gets(log[1]);


        strcpy(log1,log[0]);
        strcpy(log2,log[0]);


        strcat(log1,".txt");
        strcat(log2,"en.txt");

        strcpy(ee2,log2);

        p=fopen(log1,"r");
        fscanf(p,"%s",&log3);
        fclose(p);

        if(strcmp(log3,log[1])!=0)
        {
            printf("Your password is wrong .Try again.");
            goto wpss2;
        }
        else
        {
            printf("Access granted");
            getchar();
        }
        system("cls");
      }

      //Event options
      menu:


       printf("Enter t for Event type\n");
       printf("Enter m for Modify event\n");
       printf("Enter d for Delete event\n");
       printf("Enter e for Exit\n");

          printf("Enter your choice:");
          scanf("%c",&ad);
          getchar();
          system("cls");

          //Event create:

          if(ad=='t')
       {
           create:


           printf("Enter c for Creating contest\n");
           printf("Enter w for Creating Workshop\n");
           printf("Enter m for Creating meeting\n");
           printf("Enter o for Creating occasions\n");

              printf("Enter your choice:");
              scanf("%c",&eo);
              getchar();
              system("cls");
              if(eo=='c')
              {
                   p1=fopen("Contest.txt","a");
              }
              else if(eo=='w')
              {
                   p1=fopen("Workshop.txt","a");
              }
                else if(eo=='m')
              {
                   p1=fopen("Meeting.txt","a");
              }
                else if(eo=='o')
              {
                   p1=fopen("Occasion.txt","a");
              }


                  p2=fopen(ee2,"a");


                  printf("Enter event name:");
                gets(ed[0]);


                  strcpy(ee3,ed[0]);
                  strcat(ee3,".txt");


                  p3=fopen(ee3,"a");


                  fprintf(p1,ed[0]);
                  fprintf(p1,"\n");

                  fprintf(p2,ed[0]);
                  fprintf(p2,"\n");

                  fprintf(p3,ed[0]);
                  fprintf(p3,"\n");


                  printf("Enter event place:");
                gets(ed[1]);

                  printf("Enter event date:");
                gets(ed[2]);


                  printf("Enter participant number:");
                gets(ed[3]);

                  printf("Necessary information:");
                gets(ed[4]);


                  fprintf(p3,ed[1]);
                  fprintf(p3,"\n");

                  fprintf(p3,ed[2]);
                  fprintf(p3,"\n");

                  fprintf(p3,ed[3]);
                  fprintf(p3,"\n");

                  fprintf(p3,ed[4]);
                  fprintf(p3,"\n");

                  fclose(p1);
                  fclose(p2);
                  fclose(p3);
                  system("cls");


                  printf("Enter b if you want to go to main menu\n");
                  printf("Enter f if you want to create event again\n");

                  printf("Enter your choice:");
                  scanf("%c",&bf);
                  getchar();
                  system("cls");


                  if(bf=='b')
                  {
                      goto menu;
                  }
                  else if(bf=='f')
                  {
                      goto create;
                  }


       }
       else if(ad=='e')
       {
           goto finish;
       }

    }
    else if(a==2)
{
    printf("\n\n\n\n\n\t\t\t\t\tIf you are not registered yet do registration first\n");
       printf("\t\t\t\t\tEnter 3 for registration\n");
        printf("\t\t\t\t\telse\n\t\t\t\t\tEnter 4 for Log in\n");
       scanf("%d",&c);
       getchar();
       system("cls");
       if(c==3)
       {
            printf("Enter your first name:");
           gets(reg[0]);
             printf("\nEnter your last name:");
           gets(reg[1]);
             printf("\nEnter your email id:");
           gets(reg[2]);
             printf("\nEnter your user id:");
           gets(reg[3]);

           repass1:


             printf("\nEnter your password:");
           gets(reg[4]);
             printf("\nEnter re-password:");
           gets(reg[5]);


           strcpy(reg1,reg[3]);
           strcpy(ee2,reg[3]);
        strcpy(ee3,reg[3]);

           strcat(reg1,".txt");

             if(strcmp(reg[4],reg[5])==0)
          {
              p=fopen(reg1,"w");
              fprintf(p,reg[4]);
              fclose(p);
          }
          else
          {
            printf("Your password is wrong\n");
            goto  repass1;
          }

           system("cls");


           printf("Enter your user id:");
           gets(log[0]);
           wpss3:
           printf("\nEnter your password:");
           gets(log[1]);


           p=fopen(reg1,"r");
           fscanf(p,"%s",&reg3);
           fclose(p);

            if(strcmp(reg3,log[1])!=0)
 {
     printf("Your password is wrong .Try again.");
     goto wpss3;
 }
 else
 {
     printf("Access granted");
     getchar();
 }
 system("cls");
       }
         else if(c==4)
       {
        printf("Enter your user id:");
        gets(log[0]);
        wpss4:
        printf("\nEnter your password:");
        gets(log[1]);


        strcpy(log1,log[0]);
        strcpy(ee2,log[0]);
        strcpy(ee3,log[0]);

        strcat(log1,".txt");

        p=fopen(log1,"r");
        fscanf(p,"%s",&log3);
        fclose(p);

        if(strcmp(log3,log[1])!=0)
        {
            printf("Your password is wrong .Try again.");
            goto wpss4;
        }
        else
        {
            printf("Access granted");
            getchar();
        }
        system("cls");
      }


           menu1:
               printf("Enter 1 for event details.\n");
        printf("Enter 2 for joining an event.\n");
        printf("Enter 3 for your participate event.\n");
        printf("Enter 4 for exit.\n");

        printf("Enetr your choice:");
        scanf("%d",&d);
         getchar();
        if(d==1)

        {

      printf("There are four types of event.\n\n");

           printf("Enter c for the list of contest\n");
           printf("Enter w for the list of Workshop\n");
           printf("Enter m for the list of meeting\n");
           printf("Enter o the list of occasions\n");

              printf("Enter your choice:");
              scanf("%c",&je);
              getchar();
              system("cls");


              if(je=='c')
              {
                   p1=fopen("Contest.txt","r");
              }
              else if(je=='w')
              {
                   p1=fopen("Workshop.txt","r");
              }
                else if(je=='m')
              {
                   p1=fopen("Meeting.txt","r");
              }
                else if(je=='o')
              {
                   p1=fopen("Occasion.txt","r");
              }

              while(!feof(p1))
              {
                  fscanf(p1,"%s",je1);
                  strcat(je1,".txt");
                  p2=fopen(je1,"r");

                  i=0;
                  while(!feof(p2))
                  {
                      fscanf(p2,"%s",je2[i]);
                      i++;

                  }

                        fclose(p2);

                  printf("\nEvent name:%s\n",je2[0]);
                  printf("Event place:%s\n",je2[1]);
                  printf("Event date:%s\n",je2[2]);
                  printf("Participant number:%s\n",je2[3]);
                  printf("Necessary information:%s\n",je2[4]);

                  printf("\n");

              }
              //getchar();
              fclose(p1);
              goto menu1;
               //goto menu1;








        }
        else if(d==2)
        {


    //join event

    printf("What type of event list want to see.\n\n");
    printf("Enter c for the list of contest\n");
           printf("Enter w for the list of Workshop\n");
           printf("Enter m for the list of meeting\n");
           printf("Enter o the list of occasions\n");

              printf("Enter your choice:");
              scanf("%c",&pe);
              getchar();
              system("cls");

        if(pe=='c')
              {
                   p1=fopen("Contest.txt","r");
                   strcat(ee2,"c.txt");
                   p2=fopen(ee2,"w");
              }
              else if(pe=='w')
              {
                   p1=fopen("Workshop.txt","r");
                   strcat(ee2,"w.txt");
                   p2=fopen(ee2,"w");
              }
                else if(pe=='m')
              {
                   p1=fopen("Meeting.txt","r");
                   strcat(ee2,"m.txt");
                   p2=fopen(ee2,"w");
              }
                else if(pe=='o')
              {
                   p1=fopen("Occasion.txt","r");
                   strcat(ee2,"o.txt");
                   p2=fopen(ee2,"w");
              }
i=0;
              while(!feof(p1))
              {
                  fscanf(p1,"%s",pe1[i]);
                 printf("%s\n",pe1[i]);
i++;
              }

              fclose(p1);
              while(1)
              {
                  printf("Enter event name you want to join or write exit to:");
                  gets(pe2);
                  if(strcmp(pe2,"exit")==0)
                  {
                      break;

                  }
                  else
                  {
                      fprintf(p2,pe2);
                      fprintf(p2,"\n");
                  }
              }
              fclose(p2);

                system("cls");
   goto menu1;

}
}
finish:
    printf("Thank you for using system");
}



