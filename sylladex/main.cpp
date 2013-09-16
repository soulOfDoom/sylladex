//
//  main.cpp
//  sylladex
//
//  Created by Max Huber on 5/17/13.
//  Copyright (c) 2013 IDEAS. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

void menu();
void captchalogue();
void clearScreen();
void getItem();
void captchalogued();
void pressEnter();
void drop();
void saveLoad();
void save();
void load();
void sylladex();
void addSubCards();

int itemNumber;
int cardNuber;

std::string newName;
std::string itemName;
std::string item0;
std::string item1;
std::string item2;
std::string item3;
std::string item4;
std::string item5;
std::string item6;
std::string item7;
std::string item8;
std::string item9;
std::string item10;
std::string item11;
std::string item12;
std::string item13;
std::string item14;
std::string item15;
std::string item16;
std::string item17;
std::string item18;
std::string item19;
std::string saveName;
std::string loadName;

int main(){
    
    clearScreen();
    
    std::cout << "How many cards?: ";
    std::cin >> cardNuber;
    
    menu();
}

//Wait for the user to press ENTER
void pressEnter(){
    std::cin.ignore();
    std::cout << "\nPress ENTER to Continue";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin.clear();
}


void clearScreen() {
#ifdef _WIN32
    std::system ( "CLS" );
    
#else
    // Assume POSIX
    std::system ( "clear" );
#endif
}

void menu(){
    
    clearScreen();
    
    int doMenu;
        
    //get user inputs
    
    clearScreen();

    std::cout << "______________________\n"
                 "|                    |\n"
                 "| 1 - Captchalogue   |\n"
                 "| 2 - Sylladex       |\n"
                 "| 3 - Save/Load      |\n"
                 "| 4 - Exit           |\n"
                 "|____________________|\n";
    std::cout << "\nSelection: ";
    std::cin >> doMenu;
    std::cin.clear();
    
    switch (doMenu) {
        case (1):
            captchalogue();
        case (2):
            sylladex();
        case (3):
            saveLoad();
        case (4):
            exit(0);
        }
}

void captchalogue(){
    
    clearScreen();
    
    int doCaptchalogue;
        
    std::cout << "_____________________\n"
                 "|                   |\n"
                 "| 1 - Get Item      |\n"
                 "| 2 - Drop          |\n"
                 "| 3 - Back          |\n"
                 "|___________________|\n";
    std::cout << "\nSelection: ";
    std::cin >> doCaptchalogue;
    std::cin.clear();
    
    switch (doCaptchalogue) {
        case (1):
            getItem();
        case (2):
            drop();
        case (3):
            menu();
    }
}

void sylladex(){
    
    clearScreen();
    
    int doSylladex;
    
    std::cout << "__________________________\n"
                 "|                        |\n"
                 "| 1 - Captchalogued      |\n"
                 "| 2 - Add/Subtract Cards |\n"
                 "| 3 - Back               |\n"
                 "|________________________|\n";
    std::cout << "\nSelection: ";
    std::cin >> doSylladex;
    std::cin.clear();
    
    switch (doSylladex) {
        case (1):
            captchalogued();
        case (2):
            addSubCards();
        case (3):
            menu();
    }
    
}

void addSubCards() {
    
    clearScreen();
    
    int doAddSub;
    int addCards;
    int subCards;
    int tempCards;
    
    std::cout << "_____________________\n"
                 "|                   |\n"
                 "| 1 - Add           |\n"
                 "| 2 - Subtract      |\n"
                 "| 3 - Back          |\n"
                 "|___________________|\n";
    std::cout << "\nSelection: ";
    std::cin >> doAddSub;
    
    if (doAddSub == 1) {
        std::cout << "How many?: ";
        std::cin >> addCards;
        tempCards = (cardNuber + addCards);
    }
    
    if (doAddSub == 2) {
        std::cout << "How many?: ";
        std::cin >> subCards;
        tempCards = (cardNuber - subCards);
    }
    
    if (doAddSub == 3) {
        sylladex();
    }
    
    
    cardNuber = tempCards;
    
    std::cout << "You now have " << cardNuber << " Captchalogue Cards.";
    
    pressEnter();
    menu();
    
}

void getItem(){
    
    clearScreen();
    
    std::cout << "Item name: ";
    std::cin >> itemName;
    std::cin.clear();
    std::cout << "Item number: ";
    std::cin >> itemNumber;
    std::cin.clear();
    
    
    
    if (itemNumber == 0) {
        item0 = itemName;
    }
    
    if (itemNumber == 1) {
        item1 = itemName;
    }
    
    if (itemNumber == 2) {
        item2 = itemName;
    }
    
    if (itemNumber == 3) {
        item3 = itemName;
    }
    
    if (itemNumber == 4) {
        item4 = itemName;
    }
    
    if (itemNumber == 5) {
        item5 = itemName;
    }
    
    if (itemNumber == 6) {
        item6 = itemName;
    }
    
    if (itemNumber == 7) {
        item7 = itemName;
    }
    
    if (itemNumber == 8) {
        item8 = itemName;
    }
    
    if (itemNumber == 9) {
        item9 = itemName;
    }
    
    if (itemNumber == 10) {
        item10 = itemName;
    }
    
    if (itemNumber == 11) {
        item11 = itemName;
    }
    
    if (itemNumber == 12) {
        item12 = itemName;
    }
    
    if (itemNumber == 13) {
        item13 = itemName;
    }
    
    if (itemNumber == 14) {
        item14 = itemName;
    }
    
    if (itemNumber == 15) {
        item15 = itemName;
    }
    
    if (itemNumber == 16) {
        item16 = itemName;
    }
    
    if (itemNumber == 17) {
        item17 = itemName;
    }
    
    if (itemNumber == 18) {
        item18 = itemName;
    }
    
    if (itemNumber == 19) {
        item19 = itemName;
    }
    
    menu();
}

void captchalogued(){
    
    clearScreen();
    
    if (cardNuber >= 1) {
        std::cout << "0 - " << item0;
    }
    
    if (cardNuber >= 2) {
        std::cout << "\n1 - " << item1;
    }
    
    if (cardNuber >= 3) {
        std::cout << "\n2 - " << item2;
    }
    
    if (cardNuber >= 4) {
        std::cout << "\n3 - " << item3;
    }
    
    if (cardNuber >= 5) {
        std::cout << "\n4 - " << item4;
    }
    
    if (cardNuber >= 6) {
        std::cout << "\n5 - " << item5;
    }
    
    if (cardNuber >= 7) {
        std::cout << "\n6 - " << item6;
    }
    
    if (cardNuber >= 8) {
        std::cout << "\n7 - " << item7;
    }
    
    if (cardNuber >= 9) {
        std::cout << "\n8 - " << item8;
    }
    
    if (cardNuber >= 10) {
        std::cout << "\n9 - " << item9;
    }
    
    if (cardNuber >= 11) {
        std::cout << "\n10 - " << item10;
    }
    
    if (cardNuber >= 12) {
        std::cout << "\n11 - " << item11;
    }
    
    if (cardNuber >= 13) {
        std::cout << "\n12 - " << item12;
    }
    
    if (cardNuber >= 14) {
        std::cout << "\n13 - " << item13;
    }
    
    if (cardNuber >= 15) {
        std::cout << "\n14 - " << item14;
    }
    
    if (cardNuber >= 16) {
        std::cout << "\n15 - " << item15;
    }
    
    if (cardNuber >= 17) {
        std::cout << "\n16 - " << item16;
    }
    
    if (cardNuber >= 18) {
        std::cout << "\n17 - " << item17;
    }
    
    if (cardNuber >= 19) {
        std::cout << "\n18 - " << item18;
    }
    
    if (cardNuber >= 20) {
        std::cout << "\n19 - " << item19;
    }
    
    pressEnter();
    menu();
}

void drop(){
    
    clearScreen();
    
    int dropUseNumber;
    
    std::cout << "Item number: ";
    std::cin >> dropUseNumber;
    std::cin.clear();
    
    clearScreen();
    
    switch (dropUseNumber) {
        case (1):
            std::cout << "\nyou drop the " << item0 << " on the ground.\n";
        case (2):
            std::cout << "\nyou drop the " << item1 << " on the ground.\n";
        case (3):
            std::cout << "\nyou drop the " << item2 << " on the ground.\n";
        case (4):
            std::cout << "\nyou drop the " << item3 << " on the ground.\n";
        case (5):
            std::cout << "\nyou drop the " << item4 << " on the ground.\n";
        case (6):
            std::cout << "\nyou drop the " << item5 << " on the ground.\n";
        case (7):
            std::cout << "\nyou drop the " << item6 << " on the ground.\n";
        case (8):
            std::cout << "\nyou drop the " << item7 << " on the ground.\n";
        case (9):
            std::cout << "\nyou drop the " << item8 << " on the ground.\n";
        case (10):
            std::cout << "\nyou drop the " << item9 << " on the ground.\n";
        case (11):
            std::cout << "\nyou drop the " << item10 << " on the ground.\n";
        case (12):
            std::cout << "\nyou drop the " << item11 << " on the ground.\n";
        case (13):
            std::cout << "\nyou drop the " << item12 << " on the ground.\n";
        case (14):
            std::cout << "\nyou drop the " << item13 << " on the ground.\n";
        case (15):
            std::cout << "\nyou drop the " << item14 << " on the ground.\n";
        case (16):
            std::cout << "\nyou drop the " << item15 << " on the ground.\n";
        case (17):
            std::cout << "\nyou drop the " << item16 << " on the ground.\n";
        case (18):
            std::cout << "\nyou drop the " << item17 << " on the ground.\n";
        case (19):
            std::cout << "\nyou drop the " << item18 << " on the ground.\n";
        case (20):
            std::cout << "\nyou drop the " << item19 << " on the ground.\n";
    }
    
    menu();
    
}

void saveLoad() {
    
    int doSaveLoad;
    
    std::cout << "_____________________\n"
                 "|                   |\n"
                 "| 1 - Save          |\n"
                 "| 2 - Load          |\n"
                 "| 3 - Back          |\n"
                 "|___________________|\n";
    std::cout << "\nSelection: ";
    std::cin >> doSaveLoad;
    std::cin.clear();
    
    switch (doSaveLoad) {
        case (1):
            save();
        case (2):
            load();
        case (3):
            menu();
    }
}

void save() {
    
    std::ofstream save;
    
    std::cout << "Save name: ";
    std::cin >> saveName;
    std::cout << "Saving...\n";
    
    save.open (saveName);
    
    save << item0 << "\n"
         << item1 << "\n"
         << item2 << "\n"
         << item3 << "\n"
         << item4 << "\n"
         << item5 << "\n"
         << item6 << "\n"
         << item7 << "\n"
         << item8 << "\n"
         << item9<< "\n"
         << item10 << "\n"
         << item11 << "\n"
         << item12 << "\n"
         << item13 << "\n"
         << item14 << "\n"
         << item15 << "\n"
         << item16 << "\n"
         << item17 << "\n"
         << item18 << "\n"
         << item19<< "\n";
    
    save.close();
    
    std::cout << "Saved!";
    
    pressEnter();
    menu();
}

void load() {
    
    
    
    std::ifstream load;
    
    std::cout << "Load name: ";
    std::cin >> loadName;
    std::cout << "Loading...\n";
    
    load.open(loadName);
    
    if (!load) {
        std::cout << "Failed to load!";
        
        pressEnter();
        menu();
    }
    
    item0[0];
    item1[1];
    item2[2];
    item3[3];
    item4[4];
    item5[5];
    item6[6];
    item7[7];
    item8[8];
    item9[9];
    item10[10];
    item11[11];
    item12[12];
    item13[13];
    item14[14];
    item15[15];
    item16[16];
    item17[17];
    item18[18];
    item19[19];
    
    load.close();
    
}