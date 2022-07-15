/*

C Snack bar Application

created by KITHINJI DONALD

15th July 2022

MIT License

*/



#include <stdio.h>

#include <stdlib.h>



int main(){

{

    int item;

    printf("\tTodays Menu\n");

    printf("Hamburger - Ksh 250\n");

    printf("African Tea - Ksh 60\n");

    printf("Samosa - Ksh 45\n");

    printf("Smocha - Ksh 30\n");

    printf("Enter item No");

    scanf("%d"&item);

    if(item > 0 && item<=3){

            printf("item added to cart\n");

    }

    else{

       printf("Invalid item");

       menu();

    }

    return item;

}
