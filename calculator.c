#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    float D,P;
    char x;
    printf("Press A for Addition\n\tS for subtraction\n\tM for multiplication\n\tD for Division\n\tQ for Square root \n\n");
    scanf("%c",&x);
    if((x=='A')||(x=='a'))
    {
        printf("Enter 1st number \n");
        scanf("%d",&m);
        printf("Enter 2nd number \n");
        scanf("%d",&n);
        printf("%d",m+n);
    }
    else if((x=='S')||(x=='s'))
     {
         printf("Enter 1st number \n");
        scanf("%d",&m);
        printf("Enter 2nd number \n");
        scanf("%d",&n);
        printf("%d",m-n);
     }
     else if((x=='M')||(x=='m'))
     {
         printf("Enter 1st number \n");
        scanf("%d",&m);
        printf("Enter 2nd number \n");
        scanf("%d",&n);
        printf("%d",m*n);
     }
     else if((x=='D')||(x=='d'))
     {
        printf("Enter 1st number \n");
        scanf("%d",&m);
        printf("Enter 2nd number \n");
        scanf("%d",&n);
        D=m/n;
        printf("%f",D);
     }
     else if((x=='Q')||(x=='q'))
     {
        printf("Enter a number \n");
        scanf("%d",&m);
        P=sqrt(m);
        printf("%f",P);
     }
}
