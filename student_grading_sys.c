#include<stdio.h>
#include<math.h>
void main()
{
    char name [20], rno [5];
    int hindi, english, maths;
    float total,per;
    printf("Enter Roll No.--");
    scanf("%s",&rno);
    printf("Enter Name--");
    scanf("%s",&name);
    printf("Enter Hindi Marks--");
    scanf("%d",&hindi);
    printf("Enter English Marks--");
    scanf("%d",&english);
    printf("Enter Maths Marks--");
    scanf("%d",&maths);
    printf("\n\n Student Details Are--\n\n");
    printf("Roll No.--%s\n\n",rno);
    printf("Name--%s\n\n",name);
    printf("Hindi--%d\n\n",hindi);
    printf("English--%d\n\n",english);
    printf("Maths--%d\n\n",maths);
    total = hindi + english + maths;
    printf("Total Marks--%.2f/300\n\n",total);
    per = (total * 100/300);
    printf("Percentage--%.2f%%\n\n",per);
    if (per >= 60)
        printf("First Division\n\n");
    else if (per >=48)
        printf("Second Division\n\n");
    else if (per >=36)
        printf("Third Division\n\n");
    else
        printf("Fail\n\n");
}

