#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    system("cls");
    srand(time(NULL));
    int key=rand(),guess,i=1;
    while(i>=100)
    i=rand();
   HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    key=rand()%101;
    SetConsoleTextAttribute(h,15);
    printf("guess a number between 0 to 100(only 10 attempts)");
    while(1)
    {
        if(i>10)
        {
            SetConsoleTextAttribute(h,4);
            printf("\nyou ran out of attemts");
            printf("\nthe correct number was %d",key);
            exit(0);
        }
        printf("\nguess %d:",i);
        scanf("%d",&guess);
        if(guess<key)
        {
         SetConsoleTextAttribute(h,4);
         printf("too low!,enter a higher number");
         SetConsoleTextAttribute(h,15);
        }
else if(guess>key)
        {
         SetConsoleTextAttribute(h,4);
         printf("too high!,enter a lower number");
         SetConsoleTextAttribute(h,15);
        }
        else
        {
         SetConsoleTextAttribute(h,2);
         printf("you guessed the correct , number congratulations!");
         SetConsoleTextAttribute(h,15);
         exit(0);
        }
        i++;
}}
