#include<iostream>
using namespace std;

int main()
{
    int n,number,money,total=0,price[4]={50,60,75,100};
    char ask;
    
    cout << "Name of product \t||Price\n"
            "1. Regular burger \t||50\n"
            "2. Cheese burger \t||60\n"
            "3. Big burger \t\t||75\n"
            "4. Special burger \t||100\n";
    
    retry:
                            
    cout << "\nEnter number of what you want to buy: ";
    cin >> number;
    
    switch(number){
    
    case 1:
        cout << "\nEnter how many you want to buy: ";
        cin >>n;
        total+=price[0]*n;
        cout << "\nDo you want to buy something else? (y/n) ";
        cin >>ask;
        if (ask=='y'){
           system("cls");
           goto retry;
        }
        else
            goto end;
        
    case 2:
        cout << "\nEnter how many you want to buy: ";
        cin >>n;
        total+=price[1]*n;
        cout << "\nDo you want to buy something else? (y/n) ";
        cin >>ask;
        if (ask=='y'){
           system("cls");
           goto retry;
        }
        else
            goto end;
    case 3:
        cout << "\nEnter how many you want to buy: ";
        cin >>n;
        total+=price[2]*n;
        cout << "\nDo you want to buy something else? (y/n) ";
        cin >>ask;
        if (ask=='y'){
           system("cls");
           goto retry;
        }
        else
            goto end;
              
    case 4:
        cout << "\nEnter how many you want to buy: ";
        cin >>n;
        total+=price[3]*n;
        cout << "\nDo you want to buy something else? (y/n) ";
        cin >>ask;
        if (ask=='y'){
           system("cls");
           goto retry;
        }
        else
            goto end;
            
                         
            }
     end:
       cout<<"\nTo Pay php"<<total;
       cout<<"\nInput your money: ";
       cin>>money;

       if(total<money){
         cout<<"\nchange: php"<<money - total;
       }
       else{
         cout<<"\ninvalid input";
        }
        
    return 0;
}