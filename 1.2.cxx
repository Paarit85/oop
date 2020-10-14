#include <stdio.h>

struct student{
    char name[20];
    int roll;
    float marks;
    char address[20];
};

int main(){
    struct student std[20];
    int n;
    printf("Enter number of students : ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("\nEnter name : ");
        scanf("%s", std[i].name);
        printf("Enter roll : ");
        scanf("%d", &std[i].roll);
        printf("Enter marks : ");
        scanf("%f", &std[i].marks);
        printf("Enter address : ");
        scanf("%s", std[i].address);
    }


    //Printing the data
    for(int i=0;i<n;i++){
    printf("\nName : %s\n", std[i].name);
    printf("Roll : %d\n", std[i].roll);
    printf("Marks : %f\n", std[i].marks);
    printf("Address : %s\n", std[i].address);
    }

    return 0;
}