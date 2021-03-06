#include<stdio.h>
void main ()
{
    int choice,a,b,sum,sub,Multiply,division;
    while(1)
    { 
    printf("\n1. Addition");
    printf("\n2. odd-even");
    printf("\n3. printing N number");
    printf("\n4. sub");
    printf("\n5. Multiply");
    printf("\n6. division");
    printf("\n7. exit");

    printf(" \n Enter the choice\n");
    scanf("%d",&choice);

    switch (choice )

    {
    case 1:
        printf ("enter the two no\n\n");
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("sum of two no is %d\n \n",sum);
        break;

    case 2:

        printf("enter the a no\n");
        scanf("%d",&a);
        if (a%2==0)
            printf ("a no. is even\n");
        else
            printf(" a no. is odd\n");
        break;

    case 3:
        printf("enter the a\n");
        scanf("%d",&a);

        for (b=1;b<=a;b++)
            printf(" Natural no of a is %d\n",b);
        break;

    case 4:

        printf ("enter the two no\n\n");
        scanf("%d%d",&a,&b);
        sub=a-b;
        printf("sum of two no is %d\n \n",sub);
        break;

    case 5:
        printf ("enter the two no\n\n");
        scanf("%d%d",&a,&b);
        Multiply=a*b;
        printf("sum of two no is %d\n \n",Multiply);
        break;

    case 6:

        printf ("enter the two no\n\n");
        scanf("%d%d",&a,&b);
        division=a/b;
        printf("sum of two no is %d\n \n",division);
        break;

    case 7: exit(0);

    default:
        printf("wrong No\n");

    }
    getch();
    }

}
