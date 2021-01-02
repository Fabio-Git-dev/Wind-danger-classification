#include <stdio.h>
#include <stdlib.h>
#include "type.h"



/* Created by Fabio-Git-Dev

   Date of Creation: 01-2.2021

   Usage of variable to classify the wind, for each condition the wind is classified more/less dangerous

   */


int wind_speed;
char press[];
int choice;

int main() {

            system("COLOR 4");

            printf("Welcome to the wind speed compare program, press any key to continue...\n");
            gets(&press);

            system("cls");

            system("COLOR 7");

            printf("Insert the speed of the wind\n");
            scanf("%d", &wind_speed);

            system("cls");


            if (wind_speed <= 25 ) {

                weak();

                system("pause");
                system("cls");

                system("COLOR 7");

                printf("Do you want to exit? 1(Yes) 2(No) \n");
                scanf("%d", &choice);

                if (choice == 1) {

                    return 0;


                } else {

                    return main();
                }






            } else if (wind_speed > 25 && wind_speed <= 38) {

                 strong();

                 system("pause");

                 system("cls");

                 system("COLOR 7");

                 printf("Do you want to exit? 1(Yes) 2(No) \n");
                scanf("%d", &choice);

                if (choice == 1) {

                    return 0;


                } else {

                    return main();
                }




            } else if (wind_speed > 38 && wind_speed <= 54) {

                 storm();

                 system("pause");

                 system("cls");

                 system("COLOR 7");

                 printf("Do you want to exit? 1(Yes) 2(No) \n");
                scanf("%d", &choice);

                if (choice == 1) {

                    return 0;


                } else {

                    return main();
                }



            } else if (wind_speed > 54 && wind_speed <= 72) {

                 heavy_storm();

                 system("pause");

                 system("cls");

                 system("COLOR 7");

                 printf("Do you want to exit? 1(Yes) 2(No) \n");
                scanf("%d", &choice);

                if (choice == 1) {

                    return 0;


                } else {

                    return main();
                }




            } else {

                  rl_h_storm();

                  system("pause");

                  system("cls");

                  system("COLOR 7");

                printf("Do you want to exit? 1(Yes) 2(No) \n");
                scanf("%d", &choice);

                if (choice == 1) {

                    return 0;


                } else {


                    return main();
                }


               }


}
