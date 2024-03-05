/*
#include<stdio.h>
#include<conio.h>
    int main ()
    {
    struct Pari
    {
        int age;
        int class;
    };
    
        struct Pari p1;
        printf("\nEnter age :\n");
        scanf("%d",&p1.age);
        printf("\nEnter class :\n");
        scanf("%d",&p1.class);
        printf("\n \n \nage \n");
        printf("%d ",p1.age);
        printf("\nClass\n");
        printf("%d",p1.class);
        getch();
    }
    */
    
#include<stdio.h>
    int main ()
    {
    struct Pari
    {
        char name[10];
        int age[3];
        int class[2];
        char subject;
        char section;
        int phoneno;
        char gender;
    };
    
        struct Pari p1;
        printf("\nEnter name,Age,Class,subject,section,phone no,gender 1 :\n");
        scanf("%s%d%d%s%s%d%s",&p1.name,&p1.age,&p1.class,&p1.subject,&p1.section,&p1.phoneno,&p1.gender);

        printf("\n1 Name \t Age \t Class \t  \n");
        printf("%s%d%d%s%s%d%s",p1.name,p1.age,p1.class,p1.subject,p1.section,p1.phoneno,p1.gender);

        struct Pari p2;
        printf("\nEnter name,Age,Class,subject,section,phone no,gender 2 :\n");
        scanf("%s%d%d%s%s%d%s",&p2.name,&p2.age,&p2.class,&p2.subject,&p2.section,&p2.phoneno,&p2.gender);
        
        printf("\n2 Name \t Age \t Class \t  \n");
        printf("%s%d%d%s%s%d%s",p2.name,p2.age,p2.class,p2.subject,p2.section,p2.phoneno,p2.gender);
        return 0 ;
    }
