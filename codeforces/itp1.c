#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Class{
    char* description[50];
    char* time[50];
    char* date[50];
} Class;
struct Student{
    char* name[60];
    double gpa[50];
    char* major[50];

    struct {
        char* street_address[50];
        char* city[50];
        char* state[50];
        int zip;
    } address;

    struct {
        Class class[7];
    } class_schedule;
}s[6];
int main(){
    int x;
    printf("Enter number of students:");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
    printf("ENTER DETAILS FOR STUDENT %d",i);
    printf(" Enter name:");
    scanf("%s",s[i].name);
    printf("Enter roll number:");
    scanf("%lf",s[i].gpa);
    printf("Enter Major:");
    scanf("%s",s[i].major);
    printf("Enter street address:");
    scanf("%s",s[i].address.street_address);
    printf("Enter city:");
    scanf("%s",s[i].address.city);
    printf("Enter state:");
    scanf("%s",s[i].address.state);
    printf("Enter zip code:");
    scanf("%d",s[i].address.zip);
    printf("Enter name of class 1:");
    scanf("%s",s[i].class_schedule.class[1].description);
    printf("Enter timing of class 1");
    scanf("%s",s[i].class_schedule.class[1].time);
    printf("Enter date of class 1");
    scanf("%s",s[i].class_schedule.class[1].date);
    printf("Enter name of class 2:");
    scanf("%s",s[i].class_schedule.class[2].description);
    printf("Enter timing of class 2");
    scanf("%s",s[i].class_schedule.class[2].time);
    printf("Enter date of class 2");
    scanf("%s",s[i].class_schedule.class[2].date);
    printf("Enter name of class 3:");
    scanf("%s",s[i].class_schedule.class[3].description);
    printf("Enter timing of class 3:");
    scanf("%s",s[i].class_schedule.class[3].time);
    printf("Enter date of class 3");
    scanf("%s",s[i].class_schedule.class[3].date);
    }
    printf("DETAILS OF STUDENTS");
        for(int i=0;i<x;i++)
    {
    printf("%s\n",s[i].name);
    printf("%lf\n",s[i].gpa);
    printf("%s\n",s[i].major);
    printf("%s, %s, %s, %d.\n",s[i].address.street_address,s[i].address.city,s[i].address.state,s[i].address.zip);
    }
	return 0;
}