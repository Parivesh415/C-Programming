#include<stdio.h>
int main()
{
struct Students{
	int id;
	char name[50];
	float mark;
	}; 
struct Students s1,s2;
printf("\nEnter ID1 :");
scanf("%d",&s1.id);
printf("\nEnter name1 :");
scanf("%s",&s1.name);
printf("\nEnter mark1 :");
scanf("%f",&s1.mark);
printf("\nEnter ID2 :");
scanf("%d",&s2.id);
printf("\nEnter name2 :");
scanf("%s",&s2.name);
printf("\nEnter mark2 :");
scanf("%f",&s2.mark);
// Input over now display data ///
printf("\n\n ID:  %d",s1.id);
printf("\n name:  %s",s1.name);
printf("\n mark:  %f",s1.mark);

printf("\n\n ID:  %d",s2.id);
printf("\n name:  %s",s2.name);
printf("\n mark:  %f",s2.mark);

return 0;
}