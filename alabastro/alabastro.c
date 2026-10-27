#include <stdio.h>
int main (){

    int n, score;
    int excellent = 0, satisfactory = 0, needs = 0;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf(" Enter Students Score %d: ",i);
        scanf("%d", &score);

        if(score >= 18){
            printf("Student %d Excellent\n", i, score);
            excellent++;19
        }else if(score >=15){
            printf("Student %d Satisfactory\n", i, score);
            satisfactory++;
        }else if(score >=0){
            printf("Student %d Needs Improvement\n", i, score);
            needs++;
        }else{
            printf("Invalid Score Please Enter (0-20) only\n");
            i--;
        }
    }

    printf("\n===Summary===\n");
    printf("Excellent (18-20):  %d students\n", excellent);
    printf("Satisfactory (15-17):  %d students\n", satisfactory);
    printf("Needs Improvement (0-14):  %d students\n", needs);
    return 0;
}