#include <stdio.h>
#include<math.h>
int main() {
    float a,b,ans;
    int ch;
    printf("Enter value of 1st number:");
    scanf("%f",&a);
    printf("Enter value of 2nd number:");
    scanf("%f",&b);
    printf("\n1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Power");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1: ans=a+b;
        break;
        case 2: ans=a-b;
        break;
        case 3: ans=a*b;
        break;
        case 4: ans=a/b;
        break;
        case 5: ans=pow(a,b);
        break;
        default: printf("Incorrect choice");
        break;
    }
    printf("RESULT: %.2f",ans);
    return 0;
}
