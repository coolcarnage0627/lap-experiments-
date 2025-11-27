
//Create a union containing 6 strings: name, home_address, hostel_address,
//city, state and zip. Write a C program to display your present address. 
#include <stdio.h>
union address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};
int main() {
    union address addr;
    printf("enter your name: ");
    scanf("%s", addr.name);
        printf("Your name is: %s\n", addr.name);
    printf("Enter your present address (hostel address): ");
    scanf("%s", addr.hostel_address);
    printf("Your present address is: %s\n", addr.hostel_address);
    scanf("%s", addr.city);
    printf("city:  %s\n", addr.city);
    printf("state:  %s\n", addr.state);
    printf("zip:  %s\n", addr.zip);
    scanf("%s", addr.state);
    scanf("%s", addr.zip);
    printf("Your zip is: %s\n", addr.zip);
    printf("Your state is: %s\n", addr.state);
    return 0;
}