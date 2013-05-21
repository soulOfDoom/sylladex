//
//  main.cpp
//  sylladex
//
//  Created by Max Huber on 5/17/13.
//  Copyright (c) 2013 IDEAS. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>
void menu();
void captchalogue();
void clearScreen();
void getItem();
void sylladex();
void pressEnter();
void dropUse();
char itemOne[100];
char itemTwo[100];
char itemThree[100];
char itemFour[100];
char itemFive[100];
char itemName[100];
int itemNumber;

int main(){

    menu();
}

//Wait for the user to press ENTER
void pressEnter()
{
    std::cin.ignore();
    std::cout << "\nPress ENTER to Continue";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}


void clearScreen()
{
#ifdef _WIN32
    std::system ( "CLS" );

#else
    // Assume POSIX
    std::system ( "clear" );
#endif
}

void stop(){

}

void menu(){

    clearScreen();

    int doThing;

    std::cout << "\n\n\n\n\n\nEnter the number that corrisponds to the menu entry that you want!\n\n";

    //get user inputs
    std::cout << " ____________________\n"
                 "|                    |\n"
                 "| 1 - Captchalogue   |\n"
                 "| 2 - Sylladex       |\n"
                 "| 3 - Exit           |\n"
                 "|____________________|\n";
    std::cout << "\nSelection: ";
    std::cin >> doThing;
    std::cin.ignore();
    switch (doThing) {
        case (1):
            captchalogue();
        case (2):
            sylladex();
        case (3):
            exit(0);
        }
}

void captchalogue(){

    clearScreen();

    int doCaptchalogue;

    std::cout << " ___________________\n"
                 "|                   |\n"
                 "| 1 - Get Item      |\n"
                 "| 2 - Drop/Use Item |\n"
                 "| 3 - Back          |\n"
                 "|___________________|\n";
    std::cout << "\nSelection: ";
    std::cin >> doCaptchalogue;
    std::cin.ignore();
    switch (doCaptchalogue) {
        case (1):
            getItem();
        case (2):
            dropUse();
        case (3):
            menu();
    }
}

void getItem(){

    clearScreen();

    std::cout << "Item name: ";
    std::cin.getline(itemName,100);
    std::cin.ignore();
    std::cout << "Item number: ";
    std::cin >> itemNumber;
    std::cin.ignore();



    if (itemNumber == 1) {
        itemOne[100] = itemName[100];
    }

    if (itemNumber == 2) {
        itemTwo[100] = itemName[100];
    }

    if (itemNumber == 3) {
        itemThree[100] = itemName[100];
    }

    if (itemNumber == 4) {
        itemFour[100] = itemName[100];
    }

    if (itemNumber == 5) {
        itemFive[100] = itemName[100];
    }
    else {
      std::cout << "You can only carry 5 items!";
      pressEnter();
    }
    menu();
}

void sylladex(){

    clearScreen();

    std::cout << "1 - " << itemOne[100] <<
                 "\n2 - " << itemTwo[100] <<
                 "\n3 - " << itemThree[100] <<
                 "\n4 - " << itemFour[100] <<
                 "\n5 - " << itemFive[100];

    pressEnter();
    menu();
}

void dropUse(){

    clearScreen();

    int dropUseNumber;

    std::cout << "Item number: ";
    std::cin >> dropUseNumber;
    std::cin.ignore();

    clearScreen();

    std::cout << "\nyou drop the " << itemName << " on the ground.\n";

    switch (dropUseNumber) {
        case (1):
            itemOne[100] = NULL;
        case (2):
            itemTwo[100] = NULL;
        case (3):
            itemThree[100] = NULL;
        case (4):
            itemFour[100] = NULL;
        case (5):
            itemFive[100] = NULL;
    }

    pressEnter();
}
