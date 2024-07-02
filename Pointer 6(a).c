#include<stdio.h>

struct Distance
{
    int distance , inch , feet ;
};

int main()
{
    struct Distance info ;

    printf("Enter Distance in inch \n");
    scanf("%d" , &info.distance);

    info.feet = info.distance / 12 ;
    info.inch = info.distance % 12 ;

    printf("\nDistance in an inch-feet system =%.d\'%.d\"\n" , info.feet , info.inch );

    return 0 ;
}