//this code is used to calculate the average marks obtained by a student in 3 subjects ie mathematics, physics and chemistry with each having 4 tests or assignments.
#include <stdio.h>
int main(){
    int mathematics[4],physics[4],chemistry[4];
    int i;
    float average_mathematics,average_physics,average_chemistry;
    float average_total;
    for(i=0;i<4;i++){
        printf("Enter the marks of mathematics:\n");
        scanf("%d",&mathematics[i]);
    }
printf("Enter the marks of physics:\n");
    for(i=0;i<4;i++){
        scanf("%d",&physics[i]);
    }
printf("Enter the marks of chemistry:\n");
    for(i=0;i<4;i++){
        scanf("%d",&chemistry[i]);
    }
    average_mathematics=(mathematics[0]+mathematics[1]+mathematics[2]+mathematics[3])/4;
    average_physics=(physics[0]+physics[1]+physics[2]+physics[3])/4;
    average_chemistry=(chemistry[0]+chemistry[1]+chemistry[2]+chemistry[3])/4;
    average_total=(average_mathematics+average_physics+average_chemistry)/3;  

    printf("The average marks of mathematics is %.2f\n",average_mathematics);
    printf("The average marks of physics is %.2f\n",average_physics);
    printf("The average marks of chemistry is %.2f\n",average_chemistry);
    printf("The average marks of total is %.2f\n",average_total);
    return 0;
}
