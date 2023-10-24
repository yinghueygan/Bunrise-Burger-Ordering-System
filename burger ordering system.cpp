#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
    char *l = " --------------------------------------------------------------------------------------------------------------------------------\n";
    char name[20];
    char CardNo[30];
    char pin[20];
    int option, choice1, choice2, order1 = 1, AddOn=1;
    int method, direction, LengthOfCardNo, LengthOfPin;
    char type, order2;
    int num101=0, num102=0, num103=0, num104=0, num105=0;
    int num201=0, num202=0, num203=0, num204=0, num205=0;
    int num301=0, num302=0, num303=0, num304=0, num305=0;
    int num401=0, num402=0, num403=0, num404=0, num405=0;
    int TotalNum101=0, TotalNum102=0, TotalNum103=0, TotalNum104=0;
    int TotalNum201=0, TotalNum202=0, TotalNum203=0, TotalNum204=0;
    int AddOn101A=0, AddOn101B=0, AddOn101C=0, AddOn102A=0, AddOn102B=0, AddOn102C=0, AddOn103A=0, AddOn103B=0, AddOn103C=0, AddOn104A=0, AddOn104B=0, AddOn104C=0;
    int AddOn201A=0, AddOn201B=0, AddOn201C=0, AddOn202A=0, AddOn202B=0, AddOn202C=0, AddOn203A=0, AddOn203B=0, AddOn203C=0, AddOn204A=0, AddOn204B=0, AddOn204C=0;
    int AddOn301=0, AddOn302=0, AddOn303=0, AddOn304=0;
    int AddOn401=0, AddOn402=0, AddOn403=0, AddOn404=0;
    double priceA, priceB, priceC, payable1, payable2, discount, FreeGift;
    double total=0, pay, change;
    double UnitPrice301= 3.50, UnitPrice302= 5.50,UnitPrice303= 4.00, UnitPrice304= 5.00;
    double UnitPrice401= 15.00, UnitPrice402= 17.50,UnitPrice403= 14.50, UnitPrice404= 12.50;
    double cost101=0, cost102=0, cost103=0, cost104=0;
    double cost201=0, cost202=0, cost203=0, cost204=0;
    double cost301=0, cost302=0, cost303=0, cost304=0;
    double cost401=0, cost402=0, cost403=0, cost404=0;
    double cost101A=0, cost101B=0, cost101C=0, cost102A=0, cost102B=0, cost102C=0, cost103A=0, cost103B=0, cost103C=0, cost104A=0, cost104B=0, cost104C=0;
    double cost201A=0, cost201B=0, cost201C=0, cost202A=0, cost202B=0, cost202C=0, cost203A=0, cost203B=0, cost203C=0, cost204A=0, cost204B=0, cost204C=0;

    welcome:
        system("cls");

     cout<<"\t\t\t       __      __        __\n";
     cout<<"\t\t\t      /  \\    /  \\ ____ |  | ____  ____    _____   ____ \n";
     cout<<"\t\t\t      \\   \\/\\/   // __ \\|  |/ ___\\/  _ \\  /     \\ / __ \\\n";
     cout<<"\t\t\t       \\        /|  ___/|  |  \\__(  <_> )|  Y Y  \|  ___/\n";
     cout<<"\t\t\t        \\__/\\__/  \\____\\|__|\\_____>____/ |__|_|__|\\____\\\n";
     cout<<"\t\t\t  _____   __    __  ____    __   _______    ___   ______   ________        \n";
     cout<<"\t\t\t |     \\ | |   | | |    \\  |  | |   __  \\  |  |  |  ____| |  _____|   \n";
     cout<<"\t\t\t |  \\ // | |   | | |  |\\ \\ |  | |  /__/ /  |  |  |  |___  |  |____           \n";
     cout<<"\t\t\t |   Y \\ | |___| | |  | \\ \\|  | |  | \\  \\  |  |   \\___  | |  |_____          \n";
     cout<<"\t\t\t |____ / |_______| |__|  \\____| | _|  \\_ \\ |__|  |______| |_______|            \n\n";
     cout<<"\t\t\t    _____   __    __  _______   ________    ________  _______                                          \n";
     cout<<"\t\t\t   |     \\ | |   | | |   __  \\  |  _____|  |  _____| |   __  \\                                            \n";
     cout<<"\t\t\t   |  \\ // | |   | | |  /__/ /  |  |  ___  |  |____  |  /__/ /                                         \n";
     cout<<"\t\t\t   |   Y \\ | |___| | |  | \\  \\  |  |__|  | |  |_____ |  | \\  \\            \n";
     cout<<"\t\t\t   |____ / |_______| | _|  \\_ \\ |________| |_______ || _|  \\_ \\                                          \n\n";

     cout<<l<<endl<<" \t\t\t\t\tWelocme to Bunrise Burger !!!"<<endl;
     cout<<" \t\t\t\t       Grab all the food you want here!!!"<<endl;
     cout<<endl<<" \t\t\t\t\tDiscount is available from: "<<endl;
     cout<<" \t\t\t\t\t  8 a.m to 10 a.m -- 20% "<<endl;
     cout<<" \t\t\t\t\t  9 p.m to 11 p.m -- 30% "<<endl<<endl;
     cout<<" \t\t\t\t    Purchase at least RM50.00 : RM 5 voucher "<<endl;
     cout<<" \t\t\t\t    Purchase at least RM100.00 : RM 10 voucher "<<endl<<endl;
     cout<<" \t\t\t\t\t     Enjoy your meal...."<<endl<<endl<<l<<endl;


    cout<<"\t\t\t\t Enter your name to continue your order: ";
    cin.getline(name,20);

    system("cls");
    do{
    cout<<" Dear customer, "<<name<<endl<<endl;
     cout<<" What option would you prefer: "<<endl<<endl;
     cout<<"\t 1. Eat in "<<endl;
     cout<<"\t 2. Take away "<<endl;
     cout<<"\t 3. Eat in and take away\n\n ";
     cout<<" Enter your option (1,2 or 3): ";
     cin>>option;


     if(option == 1)
        cout<<endl<<" You have chosen eat in. "<<endl;
     else if(option == 2)
        cout<<endl<<" You have chosen take away. "<<endl;
     else if(option == 3)
        cout<<endl<<" You have chosen eat in and take away. "<<endl;
     else
     {
        cout<<endl<<" Invalid option. "<<endl;
        Beep(300,500);
        cout<<" Choose from (1,2 or 3). "<<endl<<endl;
        system("pause");
        system("cls");
     }
        }while(option!=1 && option!=2 && option!=3);
        cout<<endl;
        system("pause");
        system("cls");

     while(AddOn != 0){
         system("cls");

    do{
    cout<<"    _____\n";
    cout<<"   /     \\   ____   ____    __ __\n";
    cout<<"  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
    cout<<" /    Y    \\  ___/|   |   \\|  |  |\n";
    cout<<" \\____|____/\\____>____|____|_____|\n\n";

    cout<<"\t 1. Foods __ Chicken "<<endl;
    cout<<"\t 2. Foods __ Beef "<<endl;
    cout<<"\t 3. Beverages "<<endl;
    cout<<"\t 4. Mix and Match"<<endl;;
    cout<<"\t 5. Exit\n\n";
    cout<<" Which option would you like(1,2,3,4 or 5): ";
    cin>>choice1;

    switch(choice1)
    {
    case 1 :
        cout<<" food __ chicken"<<endl;

        system("cls");
        cout<<"\t\t\t\t\t\t     ==========================" <<endl;
        cout<<"\t\t\t\t\t\t     |      FOOD _CHICKEN     |"<<endl;
        cout<<"\t\t\t\t\t\t     ==========================" <<endl<<endl;
        cout<<"\t ITEM CODE  ----------       DESCRIPTION       ----------   REGULAR  ----------   LARGE   ----------  EXTRA LARGE"<<endl;
        cout<<"\t  [ 101 ]   ----------  Origin Chicken Burger  ----------   RM8.00   ----------  RM10.00  ----------   RM12.00"<<endl;
        cout<<"\t  [ 102 ]   ----------  Spicy Chicken Burger   ----------   RM8.00   ----------  RM10.00  ----------   RM12.00"<<endl;
        cout<<"\t  [ 103 ]   ----------  Double Bun Burger      ----------   RM8.00   ----------  RM10.00  ----------   RM12.00"<<endl;
        cout<<"\t  [ 104 ]   ----------  Bunrise Chicken Burger ----------   RM8.00   ----------  RM10.00  ----------   RM12.00"<<endl;

        do
        {
            cout<<" \n\tFrom the list of food, what would you like(101, 102, 103 or 104) : ";
            cin>>order1;
        }while( order1!=101 && order1!=102 && order1!=103 && order1!=104 );
        switch(order1)
   {
        case 101:
                 cout<<endl<<" \tHow many Origin Chicken Burger would you like to order : ";
                 cin>>num101;
                 do{
                 cout<<endl<<" \tA. Regular "<<endl;
                 cout<<" \tB. Large "<<endl;
                 cout<<" \tC. Extra Large "<<endl;
                 cout<<" \tEnter type of burger : ";
                 cin>>type;

                 if(type == 'a' || type == 'A')
                 {
                    priceA = 8;
                    AddOn101A = num101 + AddOn101A;
                    cost101A= priceA * AddOn101A;
                 }
                 else if(type == 'b' || type == 'B')
                 {
                     priceB = 10;
                     AddOn101B = num101 + AddOn101B;
                     cost101B = priceB * AddOn101B;
                 }

                 else if(type == 'c' || type == 'C')
                 {
                    priceC = 12;
                    AddOn101C = num101 + AddOn101C;
                    cost101C = priceC * AddOn101C;
                 }
                 else
                 {
                     Beep(300,500);
                    cout<<endl<<" \tInvalid Input. "<<endl;
                    cout<<" \tChoose from (A,B or C)."<<endl;
                 }}while(type!='a' && type!='A' && type!='b' && type!='B' && type!='c' && type!='C');

                 TotalNum101 = AddOn101A + AddOn101B + AddOn101C;
                 cost101 = cost101A + cost101B + cost101C;

                 break;

        case 102:
                 cout<<endl<<" \tHow many Spicy Chicken Burger would you like to order : ";
                 cin>>num102;
                 do{
                 cout<<endl<<" \tA. Regular "<<endl;
                 cout<<" \tB. Large "<<endl;
                 cout<<" \tC. Extra Large "<<endl;
                 cout<<" \tEnter type of burger : ";
                 cin>>type;

                 if(type == 'a' || type == 'A')
                 {
                    priceA = 8;
                    AddOn102A = num102 + AddOn102A;
                    cost102A= priceA * AddOn102A;
                 }
                 else if(type == 'b' || type == 'B')
                 {
                     priceB = 10;
                     AddOn102B = num102 + AddOn102B;
                     cost102B = priceB * AddOn102B;
                 }

                 else if(type == 'c' || type == 'C')
                 {
                    priceC = 12;
                    AddOn102C = num102 + AddOn102C;
                    cost102C = priceC * AddOn102C;
                 }
                 else
                 {
                     Beep(300,500);
                    cout<<endl<<" \tInvalid Input. "<<endl;
                    cout<<" \tChoose from (A,B or C)."<<endl;
                 }}while(type!='a' && type!='A' && type!='b' && type!='B' && type!='c' && type!='C');

                 TotalNum102 = AddOn102A + AddOn102B + AddOn102C;
                 cost102 = cost102A + cost102B + cost102C;

                 break;
        case 103:
                 cout<<endl<<" \tHow many Double Bun Burger would you like to order : ";
                 cin>>num103;
                 do{
                 cout<<endl<<" \tA. Regular "<<endl;
                 cout<<" \tB. Large "<<endl;
                 cout<<" \tC. Extra Large "<<endl;
                 cout<<" \tEnter type of burger : ";
                 cin>>type;

                if(type == 'a' || type == 'A')
                 {
                    priceA = 8;
                    AddOn103A = num103 + AddOn103A;
                    cost103A= priceA * AddOn103A;
                 }
                 else if(type == 'b' || type == 'B')
                 {
                     priceB = 10;
                     AddOn103B = num103 + AddOn103B;
                     cost103B = priceB * AddOn103B;
                 }

                 else if(type == 'c' || type == 'C')
                 {
                    priceC = 12;
                    AddOn103C = num103 + AddOn103C;
                    cost103C = priceC * AddOn103C;
                 }
                 else
                 {
                     Beep(300,500);
                    cout<<endl<<" \tInvalid Input. "<<endl;
                    cout<<" \tChoose from (A,B or C)."<<endl;
                 }}while(type!='a' && type!='A' && type!='b' && type!='B' && type!='c' && type!='C');

                 TotalNum103 = AddOn103A + AddOn103B + AddOn103C;
                 cost103 = cost103A + cost103B + cost103C;

                 break;
        case 104:
                 cout<<endl<<" \tHow many Bunrise Chicken Burger would you like to order : ";
                 cin>>num104;
                 do{
                 cout<<endl<<" \tA. Regular "<<endl;
                 cout<<" \tB. Large "<<endl;
                 cout<<" \tC. Extra Large "<<endl;
                 cout<<" \tEnter type of burger : ";
                 cin>>type;

                 if(type == 'a' || type == 'A')
                 {
                    priceA = 8;
                    AddOn104A = num104 + AddOn104A;
                    cost104A= priceA * AddOn104A;
                 }
                 else if(type == 'b' || type == 'B')
                 {
                     priceB = 10;
                     AddOn104B = num104 + AddOn104B;
                     cost104B = priceB * AddOn104B;
                 }

                 else if(type == 'c' || type == 'C')
                 {
                    priceC = 12;
                    AddOn104C = num104 + AddOn104C;
                    cost104C = priceC * AddOn104C;
                 }
                 else
                 {
                     Beep(300,500);
                    cout<<endl<<" \tInvalid Input. "<<endl;
                    cout<<" \tChoose from (A,B or C)."<<endl;
                 }}while(type!='a' && type!='A' && type!='b' && type!='B' && type!='c' && type!='C');

                 TotalNum104 = AddOn104A + AddOn104B + AddOn104C;
                 cost104 = cost104A + cost104B + cost104C;

                 break;
                 default: cout<<endl<<" \tPlease choose a valid item from our list\n";
                 }break;

    case 2 :
        cout<<" food __ beef "<<endl;

        system("cls");
        cout<<"\t\t\t\t\t\t          ======================" <<endl;
        cout<<"\t\t\t\t\t\t          |      FOOD_BEEF     |"<<endl;
        cout<<"\t\t\t\t\t\t          ======================" <<endl<<endl;
        cout<<"\t ITEM CODE ----------        DESCRIPTION           ----------  REGULAR  ----------   LARGE   ----------  EXTRA LARGE"<<endl;
        cout<<"\t  [ 201 ]   ----------    Cheeseburger             ----------  RM8.00   ----------  RM10.00  ----------   RM12.00"<<endl;
        cout<<"\t  [ 202 ]   ----------    Single BBQ Burger Buzz   ----------  RM8.00   ----------  RM10.00  ----------   RM12.00 "<<endl;
        cout<<"\t  [ 203 ]   ----------    Single Beef Burger       ----------  RM8.00   ----------  RM10.00  ----------   RM12.00"<<endl;
        cout<<"\t  [ 204 ]   ----------    Bunrise Beef Burger      ----------  RM8.00   ----------  RM10.00  ----------   RM12.00"<<endl;

        do
        {
            cout<<" \n\t From the list of food, what would you like(201, 202, 203 or 204) : ";
            cin>>order1;
        }while( order1!=201 && order1!=202 && order1!=203 && order1!=204 );
        switch(order1)
   {
        case 201:
                 cout<<endl<<"  \tHow many Cheeseburger would you like to order : ";
                 cin>>num201;
                 do{
                 cout<<endl<<"  \tA. Regular "<<endl;
                 cout<<"  \tB. Large "<<endl;
                 cout<<"  \tC. Extra Large "<<endl;
                 cout<<"  \tEnter type of burger : ";
                 cin>>type;

                if(type == 'a' || type == 'A')
                 {
                    priceA = 8;
                    AddOn201A = num201 + AddOn201A;
                    cost201A= priceA * AddOn201A;
                 }
                 else if(type == 'b' || type == 'B')
                 {
                     priceB = 10;
                     AddOn201B = num201 + AddOn201B;
                     cost201B = priceB * AddOn201B;
                 }

                 else if(type == 'c' || type == 'C')
                 {
                    priceC = 12;
                    AddOn201C = num201 + AddOn201C;
                    cost201C = priceC * AddOn201C;
                 }
                 else
                 {
                     Beep(300,500);
                    cout<<endl<<" \tInvalid Input. "<<endl;
                    cout<<" \tChoose from (A,B or C)."<<endl;
                 }}while(type!='a' && type!='A' && type!='b' && type!='B' && type!='c' && type!='C');

                 TotalNum201 = AddOn201A + AddOn201B + AddOn201C;
                 cost201 = cost201A + cost201B + cost201C;

                 break;
        case 202:
                 cout<<endl<<"  \tHow many Single BBQ Burger Buzz would you like to order : ";
                 cin>>num202;
                 do{
                 cout<<endl<<"  \tA. Regular "<<endl;
                 cout<<"  \tB. Large "<<endl;
                 cout<<"  \tC. Extra Large "<<endl;
                 cout<<"  \tEnter type of burger : ";
                 cin>>type;

               if(type == 'a' || type == 'A')
                 {
                    priceA = 8;
                    AddOn202A = num202 + AddOn202A;
                    cost202A= priceA * AddOn202A;
                 }
                 else if(type == 'b' || type == 'B')
                 {
                     priceB = 10;
                     AddOn202B = num202 + AddOn202B;
                     cost202B = priceB * AddOn202B;
                 }

                 else if(type == 'c' || type == 'C')
                 {
                    priceC = 12;
                    AddOn202C = num202 + AddOn202C;
                    cost202C = priceC * AddOn202C;
                 }
                 else
                 {
                     Beep(300,500);
                    cout<<endl<<" \tInvalid Input. "<<endl;
                    cout<<" \tChoose from (A,B or C)."<<endl;
                 }}while(type!='a' && type!='A' && type!='b' && type!='B' && type!='c' && type!='C');

                 TotalNum202 = AddOn202A + AddOn202B + AddOn202C;
                 cost202 = cost202A + cost202B + cost202C;
                 break;
        case 203:
                 cout<<endl<<"  \tHow many Spicy Chicken Burger would you like to order : ";
                 cin>>num203;
                 do{
                 cout<<endl<<"  \tA. Regular "<<endl;
                 cout<<"  \tB. Large "<<endl;
                 cout<<"  \tC. Extra Large "<<endl;
                 cout<<"  \tEnter type of burger : ";
                 cin>>type;

                if(type == 'a' || type == 'A')
                 {
                    priceA = 8;
                    AddOn203A = num203 + AddOn203A;
                    cost203A= priceA * AddOn203A;
                 }
                 else if(type == 'b' || type == 'B')
                 {
                     priceB = 10;
                     AddOn203B = num203 + AddOn203B;
                     cost203B = priceB * AddOn203B;
                 }

                 else if(type == 'c' || type == 'C')
                 {
                    priceC = 12;
                    AddOn203C = num203 + AddOn203C;
                    cost203C = priceC * AddOn203C;
                 }
                 else
                 {
                     Beep(300,500);
                    cout<<endl<<" \tInvalid Input. "<<endl;
                    cout<<" \tChoose from (A,B or C)."<<endl;
                 }}while(type!='a' && type!='A' && type!='b' && type!='B' && type!='c' && type!='C');

                 TotalNum203 = AddOn203A + AddOn203B + AddOn203C;
                 cost203 = cost203A + cost203B + cost203C;
                 break;
        case 204:
                 cout<<endl<<"  \tHow many Bunrise Beef Burger would you like to order : ";
                 cin>>num204;
                 do{
                 cout<<endl<<"  \tA. Regular "<<endl;
                 cout<<"  \tB. Large "<<endl;
                 cout<<"  \tC. Extra Large "<<endl;
                 cout<<"  \tEnter type of burger : ";
                 cin>>type;

               if(type == 'a' || type == 'A')
                 {
                    priceA = 8;
                    AddOn204A = num204 + AddOn204A;
                    cost204A= priceA * AddOn204A;
                 }
                 else if(type == 'b' || type == 'B')
                 {
                     priceB = 10;
                     AddOn204B = num204 + AddOn204B;
                     cost204B = priceB * AddOn204B;
                 }

                 else if(type == 'c' || type == 'C')
                 {
                    priceC = 12;
                    AddOn204C = num204 + AddOn204C;
                    cost204C = priceC * AddOn204C;
                 }
                 else
                 {
                     Beep(300,500);
                    cout<<endl<<" \tInvalid Input. "<<endl;
                    cout<<" \tChoose from (A,B or C)."<<endl;
                 }}while(type!='a' && type!='A' && type!='b' && type!='B' && type!='c' && type!='C');

                 TotalNum204 = AddOn204A + AddOn204B + AddOn204C;
                 cost204 = cost204A + cost204B + cost204C;
                 break;
                 default: cout<<endl<<"  \tPlease choose a valid item from our list\n";
   }break;

    case 3 :
        cout<<" beverages "<<endl;

        system("cls");
        cout<<"\t\t\t    ======================" <<endl;
        cout<<"\t\t\t    |      BEVERAGES     |"<<endl;
        cout<<"\t\t\t    ======================" <<endl<<endl;
        cout<<"\t ITEM CODE ----------    DESCRIPTION     ---------- PRICE "<<endl;
        cout<<"\t  [ 301 ]   ----------    Coca - Cola    ---------- RM3.50 "<<endl;
        cout<<"\t  [ 302 ]   ----------    Americano      ---------- RM5.50 "<<endl;
        cout<<"\t  [ 303 ]   ----------    Hot Tea        ---------- RM4.00 "<<endl;
        cout<<"\t  [ 304 ]   ----------    Latte          ---------- RM5.00 "<<endl;

        do
        {
            cout<<" \n\tFrom the list of beverages, what would you like(301, 302, 303 or 304) : ";
            cin>>order1;
        }while( order1!=301 && order1!=302 && order1!=303 && order1!=304 );
        switch(order1)
   {
        case 301:
                 cout<<endl<<" \tHow many Coca-Cola would you like to order : ";
                 cin>>num301;
                 AddOn301 = num301 + AddOn301;
                 cost301 = UnitPrice301 * AddOn301;
                 break;
        case 302:
                 cout<<endl<<" \tHow many Americano would you like to order : ";
                 cin>>num302;
                 AddOn302 = num302 + AddOn302;
                 cost302 = UnitPrice302 * AddOn302;
                 break;
        case 303:
                 cout<<endl<<" \tHow many Hot Tea would you like to order : ";
                 cin>>num303;
                 AddOn303 = num303 + AddOn303;
                 cost303 = UnitPrice303 * AddOn303;
                 break;
        case 304:
                 cout<<endl<<" \tHow many Latte would you like to order : ";
                 cin>>num304;
                 AddOn304 = num304 + AddOn304;
                 cost304 = UnitPrice304 * AddOn304;
                 break;
                 default: cout<<endl<<" \tPlease choose a valid item from our list\n";
   }break;

    case 4 :
        cout<<" mix and match "<<endl;

        system("cls");
        cout<<"\t\t\t\t\t==========================" <<endl;
        cout<<"\t\t\t\t\t|      MIX AND MATCH     |"<<endl;
        cout<<"\t\t\t\t\t==========================" <<endl<<endl;
        cout<<"\t ITEM CODE  ----------                DESCRIPTION                      ---------- PRICE "<<endl;
        cout<<"\t  [ 401 ]   ----------    Origin Burger + French Fries + Coca-Cola    ---------- RM15.00 "<<endl;
        cout<<"\t  [ 402 ]   ----------    Cheeseburger + French Fries + Latte         ---------- RM17.50 "<<endl;
        cout<<"\t  [ 403 ]   ----------    Single BBQ Burger Buzz + Hot Tea            ---------- RM14.50 "<<endl;
        cout<<"\t  [ 404 ]   ----------    Double Bun Burger + Americano               ---------- RM12.50 "<<endl;

        do
        {
            cout<<" \n\tFrom the list of mix and match, what would you like(401, 402, 403 or 404) : ";
            cin>>order1;
        }while( order1!=401 && order1!=402 && order1!=403 && order1!=404 );
        switch(order1)
   {
        case 401:
                 cout<<endl<<" \tHow many Origin Burger + French Fries + Coca-Cola would you like to order : ";
                 cin>>num401;
                 AddOn401 = num401 + AddOn401;
                 cost401 = UnitPrice401 * AddOn401;
                 break;
        case 402:
                 cout<<endl<<" \tHow many Cheeseburger + French Fries + Latte would you like to order : ";
                 cin>>num402;
                 AddOn402 = num402 + AddOn402;
                 cost402 = UnitPrice402 * AddOn402;
                 break;
        case 403:
                 cout<<endl<<" \tHow many Double Bun Burger + Hot Tea would you like to order : ";
                 cin>>num403;
                 AddOn403 = num403 + AddOn403;
                 cost403 = UnitPrice403 * AddOn403;
                 break;
        case 404:
                 cout<<endl<<" \tHow many Single BBQ Burger Buzz + Americano would you like to order : ";
                 cin>>num404;
                 AddOn404 = num404 + AddOn404;
                 cost404 = UnitPrice404 * AddOn404;
                 break;
                 default: cout<<endl<<" \tPlease choose a valid item from our list\n";
   }break;

    case 5 :
        system("cls");
        cout<<endl<<" \tThank you for coming......";
        cout<<endl<<" \tPlease come again......"<<endl;
        return 0;
         break;
    default:
        Beep(300,500);
        cout<<endl<<" \tInvalid Input. "<<endl;
        cout<<" \tChoose from (1,2,3,4 or 5). "<<endl<<endl;
        system("pause");
        system("cls");
    }}while(choice1!=1 && choice1!=2 && choice1!=3 && choice1!=4 && choice1!=5);

    cout<<endl<<endl<<endl<<endl<<"\t";
    system("pause");
    system("cls");
    do
    {
        cout<<endl<<" \tDo you want to add on? [0] no [1] yes : ";
        cin >> AddOn;
   } while ( AddOn != 0 && AddOn != 1 );}

    system("cls");
    time_t now = time(0);

    tm *ltm = localtime(&now);


   cout<<"\n\tCustomer : "<<name<<"\t\t\t     Transaction";
   cout <<"\t\t\t\t"<< ltm->tm_mday<<"/"<< 1 + ltm->tm_mon<<"/"<< 1900 + ltm->tm_year<<"\t";
   cout <<ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
   cout<<l;
   cout<<" You have ordered:\n\n";
   cout<<" ITEM CODE\t\tITEM\t\t\t\t\tQUANTITY\t\tUNIT PRICE\t     AMOUNT OF SALE\n";
   cout<<fixed<<showpoint;
   if (AddOn101A != 0)
    {
        cout<<"  [101] \tOrigin Chicken Burger(Regular):\t\t\t   "<<setprecision(2)<<AddOn101A<<"\t\t\t  RM "<<setprecision(2)<<priceA<<"\t\t  RM "<<setprecision(2)<<cost101A<<"\n";
   }
   if (AddOn101B != 0)
    {
        cout<<"  [101] \tOrigin Chicken Burger(Large):\t\t\t   "<<setprecision(2)<<AddOn101B<<"\t\t\t  RM "<<setprecision(2)<<priceB<<"\t\t  RM "<<setprecision(2)<<cost101B<<"\n";
   }
   if (AddOn101C != 0)
    {
        cout<<"  [101] \tOrigin Chicken Burger(Extra Large):\t\t   "<<setprecision(2)<<AddOn101C<<"\t\t\t  RM "<<setprecision(2)<<priceC<<"\t\t  RM "<<setprecision(2)<<cost101C<<"\n";
   }
   if (AddOn102A != 0)
   {
       cout<<"  [102] \tSpicy Chicken Burger(Regular):\t\t\t   "<<setprecision(2)<<AddOn102A<<"\t\t\t  RM "<<setprecision(2)<<priceA<<"\t\t  RM "<<setprecision(2)<<cost102A<<"\n";
   }
   if (AddOn102B != 0)
   {
       cout<<"  [102] \tSpicy Chicken Burger(Large):\t\t\t   "<<setprecision(2)<<AddOn102B<<"\t\t\t  RM "<<setprecision(2)<<priceB<<"\t\t  RM "<<setprecision(2)<<cost102B<<"\n";
   }
   if (AddOn102C != 0)
   {
       cout<<"  [102] \tSpicy Chicken Burger(Extra Large):\t\t   "<<setprecision(2)<<AddOn102C<<"\t\t\t  RM "<<setprecision(2)<<priceC<<"\t\t  RM "<<setprecision(2)<<cost102C<<"\n";
   }
   if (AddOn103A != 0)
   {
       cout<<"  [103] \tDouble Bun Burger(Regular):\t\t\t   "<<setprecision(2)<<AddOn103A<<"\t\t\t  RM "<<setprecision(2)<<priceA<<"\t\t  RM "<<setprecision(2)<<cost103A<<"\n";
   }
   if (AddOn103B != 0)
   {
       cout<<"  [103] \tDouble Bun Burger(Large):\t\t\t   "<<setprecision(2)<<AddOn103B<<"\t\t\t  RM "<<setprecision(2)<<priceB<<"\t\t  RM "<<setprecision(2)<<cost103B<<"\n";
   }
   if (AddOn103C != 0)
   {
       cout<<"  [103] \tDouble Bun Burger(Extra Large):\t\t\t   "<<setprecision(2)<<AddOn103C<<"\t\t\t  RM "<<setprecision(2)<<priceC<<"\t\t  RM "<<setprecision(2)<<cost103C<<"\n";
   }
   if (AddOn104A != 0)
   {
       cout<<"  [104] \tBunrise Chicken Burger(Regular):\t\t   "<<setprecision(2)<<AddOn104A<<"\t\t\t  RM "<<setprecision(2)<<priceA<<"\t\t  RM "<<setprecision(2)<<cost104A<<"\n";
   }
   if (AddOn104B != 0)
   {
       cout<<"  [104] \tBunrise Chicken Burger(Large):\t\t   "<<setprecision(2)<<AddOn104B<<"\t\t\t  RM "<<setprecision(2)<<priceB<<"\t\t  RM "<<setprecision(2)<<cost104B<<"\n";
   }
   if (AddOn104C != 0)
   {
       cout<<"  [104] \tBunrise Chicken Burger(Extra Large):\t\t\t   "<<setprecision(2)<<AddOn104C<<"\t\t\t  RM "<<setprecision(2)<<priceC<<"\t\t  RM "<<setprecision(2)<<cost104C<<"\n";
   }
   if (AddOn201A != 0)
    {
        cout<<"  [201] \tCheeseburger(Regular):\t\t\t\t   "<<setprecision(2)<<AddOn201A<<"\t\t\t  RM "<<setprecision(2)<<priceA<<"\t\t  RM "<<setprecision(2)<<cost201A<<"\n";
   }
   if (AddOn201B != 0)
    {
        cout<<"  [201] \tCheeseburger(Large):\t\t\t\t   "<<setprecision(2)<<AddOn201B<<"\t\t\t  RM "<<setprecision(2)<<priceB<<"\t\t  RM "<<setprecision(2)<<cost201B<<"\n";
   }
   if (AddOn201C != 0)
    {
        cout<<"  [201] \tCheeseburger(Extra Large):\t\t\t   "<<setprecision(2)<<AddOn201C<<"\t\t\t  RM "<<setprecision(2)<<priceC<<"\t\t  RM "<<setprecision(2)<<cost201C<<"\n";
   }
   if (AddOn202A != 0)
   {
       cout<<"  [202] \tSingle BBQ Burger Buzz(Regular):\t\t   "<<setprecision(2)<<AddOn202A<<"\t\t\t  RM "<<setprecision(2)<<priceA<<"\t\t  RM "<<setprecision(2)<<cost202A<<"\n";
   }
   if (AddOn202B != 0)
   {
       cout<<"  [202] \tSingle BBQ Burger Buzz(Large):\t\t\t   "<<setprecision(2)<<AddOn202B<<"\t\t\t  RM "<<setprecision(2)<<priceB<<"\t\t  RM "<<setprecision(2)<<cost202B<<"\n";
   }
   if (AddOn202C!= 0)
   {
       cout<<"  [202] \tSingle BBQ Burger Buzz(Extra Large):\t\t   "<<setprecision(2)<<AddOn202C<<"\t\t\t  RM "<<setprecision(2)<<priceC<<"\t\t  RM "<<setprecision(2)<<cost202C<<"\n";
   }
   if (AddOn203A != 0)
   {
       cout<<"  [203] \tSpicy Beef Burger(Regular):\t\t\t   "<<setprecision(2)<<AddOn203A<<"\t\t\t  RM "<<setprecision(2)<<priceA<<"\t\t  RM "<<setprecision(2)<<cost203A<<"\n";
   }
   if (AddOn203B != 0)
   {
       cout<<"  [203] \tSpicy Beef Burger(Large):\t\t\t   "<<setprecision(2)<<AddOn203B<<"\t\t\t  RM "<<setprecision(2)<<priceB<<"\t\t  RM "<<setprecision(2)<<cost203B<<"\n";
   }
   if (AddOn203C != 0)
   {
       cout<<"  [203] \tSpicy Beef Burger(Extra Large):\t\t\t   "<<setprecision(2)<<AddOn203C<<"\t\t\t  RM "<<setprecision(2)<<priceC<<"\t\t  RM "<<setprecision(2)<<cost203C<<"\n";
   }
   if (AddOn204A != 0)
   {
       cout<<"  [204] \tBunrise Beef Burger(Regular):\t\t\t   "<<setprecision(2)<<AddOn204A<<"\t\t\t  RM "<<setprecision(2)<<priceA<<"\t\t  RM "<<setprecision(2)<<cost204A<<"\n";
   }
   if (AddOn204B != 0)
   {
       cout<<"  [204] \tBunrise Beef Burger(Large):\t\t\t   "<<setprecision(2)<<AddOn204B<<"\t\t\t  RM "<<setprecision(2)<<priceB<<"\t\t  RM "<<setprecision(2)<<cost204B<<"\n";
   }
   if (AddOn204C != 0)
   {
       cout<<"  [204] \tBunrise Beef Burger(Extra Large):\t\t   "<<setprecision(2)<<AddOn204C<<"\t\t\t  RM "<<setprecision(2)<<priceC<<"\t\t  RM "<<setprecision(2)<<cost204C<<"\n";
   }
   if (AddOn301 != 0)
    {
        cout<<"  [301] \tCoca-Cola:\t\t\t\t\t   "<<setprecision(2)<<AddOn301<<"\t\t\t  RM "<<setprecision(2)<<UnitPrice301<<"\t\t  RM "<<setprecision(2)<<cost301<<"\n";
   }
   if (AddOn302 != 0)
   {
       cout<<"  [302] \tAmericano:\t\t\t\t\t   "<<setprecision(2)<<AddOn302<<"\t\t\t  RM "<<setprecision(2)<<UnitPrice302<<"\t\t  RM "<<setprecision(2)<<cost302<<"\n";
   }
   if (AddOn303 != 0)
   {
       cout<<"  [303] \tHot Tea:\t\t\t\t\t   "<<setprecision(2)<<AddOn303<<"\t\t\t  RM "<<setprecision(2)<<UnitPrice303<<"\t\t  RM "<<setprecision(2)<<cost303<<"\n";
   }
   if (AddOn304 != 0)
   {
        cout<<"  [304] \tLatte:\t\t\t\t\t\t   "<<setprecision(2)<<AddOn304<<"\t\t\t  RM "<<setprecision(2)<<UnitPrice304<<"\t\t  RM "<<setprecision(2)<<cost304<<"\n";
   }
   if (AddOn401 != 0)
    {
        cout<<"  [401] \tOrigin Burger(R) + French Fries + Coca-Cola:\t   "<<setprecision(2)<<AddOn401<<"\t\t\t  RM "<<setprecision(2)<<UnitPrice401<<"\t\t  RM "<<setprecision(2)<<cost401<<"\n";
   }
   if (AddOn402 != 0)
   {
       cout<<"  [402] \tCheeseburger(L) + French Fries + Latte:\t\t   "<<setprecision(2)<<AddOn402<<"\t\t\t  RM "<<setprecision(2)<<UnitPrice402<<"\t\t  RM "<<setprecision(2)<<cost402<<"\n";
   }
   if (AddOn403 != 0)
   {
       cout<<"  [403] \tSingle BBQ Burger Buzz(XL) + Hot Tea:\t\t   "<<setprecision(2)<<AddOn403<<"\t\t\t  RM "<<setprecision(2)<<UnitPrice403<<"\t\t  RM "<<setprecision(2)<<cost403<<"\n";
   }
   if (AddOn404 != 0)
   {
       cout<<"  [404] \tDouble Bun Burger(L) + Americano:\t\t   "<<setprecision(2)<<AddOn404<<"\t\t\t  RM "<<setprecision(2)<<UnitPrice404<<"\t\t  RM "<<setprecision(2)<<cost404<<"\n";
   }
   cout<<l;
   total = total + cost101 + cost102 + cost103 + cost104 + cost201 + cost202 + cost203 + cost204 + cost301 +cost302 + cost303 +cost304 + cost401 + cost402 + cost403 + cost404;


   if((ltm->tm_hour>=8)&&(ltm->tm_hour<=10))
   {
       discount = 20/100;
       payable1 = total*(1-discount);
   }
   else if ((ltm->tm_hour>=2100)&&(ltm->tm_hour<=2300))
   {
       discount = 30/100;
       payable1 = total*(1-discount);
   }
   else
   {
       discount=0;
    payable1 = total;
   }


    cout<<fixed<<showpoint;
    cout<<endl<<"\tTotal                          : RM"<<setprecision(2)<<total<<endl;
    cout<<"\tDiscount                       : "<<noshowpoint<<setprecision(0)<<discount*100<<"%"<<endl;
    cout<<"\tPayable after discount         : RM"<<showpoint<<setprecision(2)<<payable1<<endl;

    if( total >= 50 && total <= 99 )
    {
        cout<<"\tFree Gift                      : RM 5.00 Voucher"<<endl;
        FreeGift = 5;
        payable2 = payable1 - 5;
        cout<<"\tPayable after giving free gift : RM"<<setprecision(2)<<payable2<<endl<<l<<endl<<endl;
    }
    else if ( total >= 100 )
    {
        cout<<"\tFree Gift                      : RM 10.00 Voucher"<<endl;
        FreeGift = 10;
        payable2 = payable1 - 10;
        cout<<"\tPayable after giving free gift : RM"<<setprecision(2)<<payable2<<endl<<l<<endl<<endl;
    }
    else
    {
        cout<<"\tFree Gift                      : RM 0"<<endl;
        FreeGift = 0;
        payable2 = payable1;
        cout<<"\tPayable after giving free gift : RM"<<setprecision(2)<<payable2<<endl<<endl<<l<<endl<<endl;
    }

    do{
    cout<<endl<<" \tDo you confirm your order?"<<endl;
    cout<<" \tEnter 'Y' to proceed."<<endl;
    cout<<" \tEnter 'C' to cancel order."<<endl<<endl<<"\t";
    cout<<" \tYour choice: ";
    cin>>order2;

    if( order2 == 'y' || order2 == 'Y' )
        system("cls");
    else if ( order2 == 'c' || order2 == 'C' )
    {
        system("cls");
        cout<<endl<<" \tThank You for coming...."<<endl;
        cout<<" \tPlease come again...."<<endl;
        return 0;
    }
    else
    {
        cout<<endl<<" \tInvalid choice. "<<endl;
        Beep(300,500);
        cout<<endl<<" \tChoose from ( 'y','Y','c','C','m' and 'M' ) : "<<endl;
    }}while( order2!='y' && order2!='Y' && order2!='c' && order2!='C' );

    do{
   cout<<" 1. Cash "<<endl;
   cout<<" 2. Credit "<<endl;
   cout<<" Select method of payment: ";
   cin>>method;

   if( method == 1 )
   {
        system("cls");
        cout<<"   ========================" <<endl;
        cout<<"   |      Pay By Cash     |"<<endl;
        cout<<"   ========================" <<endl;
        cout<<"\n  Total of your order is : "<<setprecision(2)<<payable2<<endl;
        cout<<"\n  Enter Paying Cash (RM) : ";
        cin >> pay;
        while( pay < total)
        {
            cout<<endl<<"\n  The cash is not enough.Please try again."<<endl<<endl;
            Beep(300,500);
            cout<<"\n  Enter Paying Cash (RM) : ";
            cin>>pay;
        }
        change = pay - total;
        cout<<endl<<"  Thank You. Your change is : "<<setprecision(2)<<change<<"\n\n\n\n\t\t";
   }
   else if( method == 2 )
   {
        system("cls");
        cout<<"   ========================" <<endl;
        cout<<"   |      Pay By Card     |"<<endl;
        cout<<"   ========================" <<endl;
        do{
        cout<<endl<<"   Enter your card no (16 digit): ";
        cin>> CardNo;
        LengthOfCardNo = strlen(CardNo);
        if(LengthOfCardNo !=16 )
            {
            cout<<endl<<"   Invalid input, card number must have 16 digits."<<endl;
            Beep(300,500);
            cout<<"   Please try again."<<endl<<l<<endl;
            }
        }while(LengthOfCardNo !=16 );

        do
        {
        cout<<endl<<"   Enter your card pin (3 digit) : ";
        cin>>pin;
        LengthOfPin=strlen(pin);
        if(LengthOfPin!=3)
            {
            cout<<endl<<"   Invalid input, PIN must have 3 digits."<<endl;
            Beep(300,500);
            cout<<"   Please try again."<<endl<<l<<endl;
            }
        }while(LengthOfPin!=3);

        cout<<endl<<"   Transaction is being processed...."<<endl;
        cout<<"   Transaction is completed."<<endl;
        cout<<"   Thank you."<<endl;
    }
    else
   {
    cout<<endl<<endl<<"Invalid Input"<<endl;
    Beep(300,500);
    cout<<"Choose from (1 or 2)."<<endl<<endl;
    }}while(method!=1 && method!=2);

    cout<<endl<<endl<<endl<<endl<<l<<endl;
    do{
    cout<<" 1. View Receipt "<<endl;
    cout<<" 2. Exit "<<endl;
    cout<<" Your choice : ";
    cin>>choice2;

    if( choice2 == 1 )
    {
     cout<<"receipt"<<endl;
     system("cls");
     cout<<"\t       ====================" <<endl;
     cout<<"\t       |      Receipt     |"<<endl;
     cout<<"\t       ====================" <<endl;
     cout<<" ___________________________________________________"<<endl;
     cout<<" |                                                 |"<<endl;
     cout<<"                       Receipt                      "<<endl;
     cout<<" |             BURGER ORDERING SYSTEM              |"<<endl;
     cout<<"                    OPENING HOURS:                  "<<endl;
     cout<<" |                EVERYDAY : 24 HRS                |"<<endl;
     cout<<"                 --------------------               "<<endl;
     cout<<" |                                                 |"<<endl;
     cout<<"       Total............................RM "<<setprecision(2)<<total<<endl;
     cout<<" |                                                 |"<<endl;
     cout<<"       Discount...................... - "<<noshowpoint<<setprecision(0)<<discount<<" %"<<endl;
     cout<<" |                                                 |"<<endl;
     cout<<"       Payable After Discount...........RM "<<showpoint<<setprecision(2)<<payable1<<endl;
     cout<<" |                                                 |"<<endl;
     cout<<"       Free Gift..................... - RM "<<setprecision(2)<<FreeGift<<endl;
     cout<<" |                                                 | "<<endl;
     cout<<"       Payable After Giving Free Gift...RM "<<setprecision(2)<<payable2<<endl;
     cout<<" |                                                 |"<<endl;
     cout<<"       Total............................RM "<<setprecision(2)<<payable2<<endl;
     cout<<" |                                                 | "<<endl;
     cout<<"          Thank you and please come again.           "<<endl;
     cout<<" | The best services and food are waiting for you. | "<<endl;
     cout<<"                 Enjoy your meal!                 "<<endl;
     cout<<" |                                                 | "<<endl;
     cout<<"                                                     "<<endl;
     cout<<" |_________________________________________________|"<<endl;

    }
    else if ( choice2 == 2 )
    {
    cout<<" Thank You for coming...."<<endl;
    cout<<" Please come again...."<<endl;
    return 0;
    }
    else
    {
        cout<<endl<<" Invalid Input."<<endl;
        Beep(300,500);
        cout<<" Choose from (1,2 or 3) : "<<endl<<endl;
    }}while( choice2!=1 && choice2!=2 );





    return 0;
}

