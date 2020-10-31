/* Air Ticket Discount Calculation
*/
#include<stdio.h>

int main(){
    int age;
    float fare;
    char gender;

    puts("\n\n\n**********Welcome to Airspace Airline**********\n\n\n");

    printf("Enter the age of passenger:  \n");
    scanf("%d", &age);

    printf("Enter your ticket fare: \n");
    scanf("%f", &fare);

    printf("Enter your gender(M/F): \n");
    scanf("%s", &gender);

    if (age<=14){
        printf("\n Processing.........\n");
        sleep(5);

        if(gender=='F'){
            fare = fare - fare*0.4;// 30%+10% discount
            puts("\n You are eligible to get 30% + 10% Extra Discount");
            printf("\n Air Ticket fare after discount is Rs. %.2f\n", fare);            
        }
            if(gender=='M'){
            fare = fare - fare*0.3;// 30%discount
            puts("\n You are eligible to get 30% Discount");
            printf("\n Air Ticket fare after discount is Rs. %.2f\n", fare);            
        }
    }
    if (age>14){
        printf("\n Processing.........\n");
        sleep(5);

            fare = fare - fare*0.20;// 20% discount
            puts("\n You are eligible to get 20% Discount");
            printf("\n Air Ticket fare after discount is Rs. %.2f\n", fare);                    
    }
    return 0;
}