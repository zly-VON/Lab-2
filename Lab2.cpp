#include <iostream>
using namespace std;

class Store
{
    public:
        string Name;
        int Year;

        Store(string name, int year)
        {
            Name = name;
            Year = year;
        }

        void welcome()
        {
            cout << "Hello. Welcome at '" << Name;
            cout << "' open from " << Year << "." << endl;
        }
};

class Item
{
    public:
        string Name;
        double Price;

        Item(string name, double price)
        {
            Name = name;
            Price = price;
        }

        void printItem() { cout << Name << " - " << Price << "$" << endl; } 
        void bought()
        {
            cout << "\nYou took " << Name << endl;
            cin.ignore();
            cin.ignore();
        }
};

class Worker
{
    public:
        string FirstName;
        string LastName;
        int Age;
    
        Worker(string firstName, string lastName, int age)
        {
            FirstName = firstName;
            LastName = lastName;
            Age = age;
        }

        void intro()
        {
            cout << "\nHello, I am " << FirstName << ".";
            cout << " I will assist you today." << endl;
        }
        int checkCheque(double toPay, string cheque)
        {
            if (toPay == 0 && cheque == "NotPaid")
            { 
                cout << "Oh, but you did not buy anything." << endl;
                cout << "You can go, have a good day.\n" << endl;
                cin.ignore();
                return 1;
            }
            else if (cheque == "NotPaid") 
            {
                cout << "\nYou have not paid! You cannot leave. \n" << endl;
                cin.ignore();
                return 0;
            }
            else 
            {
                cout << "\nIt is all right, have a good day.\n" << endl;
                cin.ignore();
                return 1;
            }
        }
};

class VendingMachine
{
    public:
        string Name;
        double Price;

        VendingMachine(string name, double price)
        {
            Name = name;
            Price = price;
        }

        void printItem() { cout << Name << " - " << Price << "$" << endl; }
        void bought()
        {
            cout << "\nYou bought " << Name << endl;
            cin.ignore();
            cin.ignore();
        }
};

class Customer
{
    public:
        string Name;
        string Cheque;
        double Balance;
        double ToPay;
        int Age;

        Customer(string name, string cheque, double balance, double toPay, int age)
        {
            Name = name;
            Cheque = cheque;
            Balance = balance;
            ToPay = toPay;
            Age = age;
        }

        void checkBalance() { cout << "\nYou have " << Balance << "$." << endl; }
        void addToPay(double price) { ToPay = ToPay + price; }
        void payment() { Balance = Balance - ToPay; }
        void printPayment()
        {
            cout << "\nNotification: " << ToPay;
            cout << "$ have been substracted from your balance." << endl;
        }
        void drinkPay(double price)
        {
            Balance = Balance - price;
            cout << "\nNotification: " << price;
            cout << "$ have been substracted from your balance." << endl;
            cin.ignore();
        }
        void changeCheque()
        {
            if (Cheque == "Paid") Cheque = "NotPaid";
            else Cheque = "Paid";
        }
        void showCheque()
        {
            cout << "+-------------+" << endl;
            if (Cheque == "Paid") cout << "|    " << Cheque << "     |" << endl;
            else cout << "|   " << Cheque << "   |" << endl;
            cout << "+-------------+\n" << endl;
        }
};

int main(void)
{
    system("clear");

    Store store("Random Store", 1998);
    Worker cashier("Carla", "Houston", 35);
    Worker meatSeller("Claire", "Divas", 50);
    Worker fishSeller("William", "Perez", 39);
    Worker security("Laurence", "James", 46);
    Customer customer1("Sara", "NotPaid", 100, 0, 34);
    Item item1("Oil", 1);
    Item item2("Cheese", 1.50);
    Item item3("Cereal", 1.50);
    Item item4("Pizza", 2.50);
    Item item5("Eggs", 1.25);
    Item item6("Salmon", 5.90);
    Item item7("Trout", 10);
    Item item8("Chicken", 4.25);
    Item item9("Turkey", 14.13);
    Item item10("Beef", 4.67);
    VendingMachine itemV1("Coffee", 1.99);
    VendingMachine itemV2("Cappuccino", 1.99);
    VendingMachine itemV3("Hot Chocolate", 2);


    store.welcome();

    do
    {
        cout << "\nWhat do you want to do?" << endl;
        cout << "1. Check balance" << endl;
        cout << "2. Buy from main store" << endl;
        cout << "3. Go to the fishmonger" << endl;
        cout << "4. Go to the ducher" << endl;
        cout << "5. Buy a hot drink from the Vending Machine" << endl;
        cout << "6. Pay at the cash register" << endl;
        cout << "7. Exit the store" << endl;
        cout << "8. Exit Simulation\n" << endl;

        int option;
        cout << "Enter the number: " << endl;
        cin >> option;

        switch(option)
        {
            case 1:
                customer1.checkBalance();
                cin.ignore();
                cin.ignore();
                system("clear");
                break;
            case 2: 
                system("clear");
                cout << "\nList of available items: " << endl;
                cout << "1. ";
                item1.printItem();
                cout << "2. ";
                item2.printItem();
                cout << "3. "; 
                item3.printItem();
                cout << "4. ";
                item4.printItem();
                cout << "5. ";
                item5.printItem();
                
                int nr;
                cout << "\nEnter what you want to buy: " << endl;
                cin >> nr;

                switch(nr)
                {
                    case 1:
                        item1.bought();
                        customer1.addToPay(item1.Price);
                        system("clear");
                        break;
                    case 2:
                        item2.bought();
                        customer1.addToPay(item2.Price);
                        system("clear");
                        break;
                    case 3:
                        item3.bought();
                        customer1.addToPay(item3.Price);
                        system("clear");
                        break;
                    case 4:
                        item4.bought();
                        customer1.addToPay(item4.Price);
                        system("clear");
                        break;
                    case 5:
                        item5.bought();   
                        customer1.addToPay(item5.Price);
                        system("clear");
                        break;
                    default:
                        cout << "\nSorry, we do not have such an item!\n" << endl;
                        cin.ignore();
                        cin.ignore();
                        system("clear");
                        break;
                }

                break;
            
            case 3:
                system("clear");
                fishSeller.intro();
                cout << "What do you want to buy?" << endl;
                cout << "1. ";
                item6.printItem();
                cout << "2. ";
                item7.printItem();

                cout << "\nEnter the number: " << endl;
                int nmr;
                cin >> nmr;

                switch(nmr)
                {
                    case 1:
                        item6.bought();
                        customer1.addToPay(item6.Price);
                        system("clear");
                        break;
                    case 2:
                        item7.bought();
                        customer1.addToPay(item7.Price);
                        system("clear");
                        break;
                    default:
                        cout << "\nSorry, we do not have such an item!\n" << endl;
                        cin.ignore();
                        cin.ignore();
                        system("clear");
                        break;
                }

                break;

            case 4:
                system("clear");
                meatSeller.intro();
                cout << "What do you want to buy?" << endl;
                cout << "1. ";
                item8.printItem();
                cout << "2. ";
                item9.printItem();
                cout << "3. ";
                item10.printItem();

                cout << "\nEnter the number: " << endl;
                int num;
                cin >> num;

                switch(num)
                {
                    case 1:
                        item8.bought();
                        customer1.addToPay(item8.Price);
                        system("clear");
                        break;
                    case 2:
                        item9.bought();
                        customer1.addToPay(item9.Price);
                        system("clear");
                        break;
                    case 3:
                        item10.bought();
                        customer1.addToPay(item10.Price);
                        system("clear");
                        break;
                    default:
                        cout << "\nSorry, we do not have such an item!\n" << endl;
                        cin.ignore();
                        cin.ignore();
                        system("clear");
                        break;
                }

                break;

            case 5:
                system("clear");
                cout << "\nList of available drink: " << endl;
                cout << "1. ";
                itemV1.printItem();
                cout << "2. ";
                itemV2.printItem();
                cout << "3. "; 
                itemV3.printItem();

                cout << "\nEnter the number: " << endl;
                int nm;
                cin >> nm;

                switch(nm)
                {
                    case 1:
                        itemV1.bought();
                        customer1.drinkPay(itemV1.Price);
                        system("clear");
                        break;
                    case 2:
                        itemV2.bought();
                        customer1.drinkPay(itemV2.Price);
                        system("clear");
                        break;
                    case 3:
                        itemV3.bought();
                        customer1.drinkPay(itemV3.Price);
                        system("clear");
                        break;
                    default:
                        cout << "\nSorry, we do not have such an item!\n" << endl;
                        cin.ignore();
                        cin.ignore();
                        system("clear");
                        break;
                }

                break;

            case 6:
                system("clear");
                cashier.intro();
                cin.ignore();
                cin.ignore();
                if (customer1.ToPay == 0)
                {
                    cout << "You have nothing to pay." << endl;
                    cin.ignore();
                    system("clear");
                    break;
                }
                cout << "Your total comes to " << customer1.ToPay << "$." << endl;
                cin.ignore();
                customer1.payment();
                customer1.changeCheque();
                customer1.printPayment();
                cin.ignore();
                customer1.ToPay = 0;
                system("clear");
                break;

            case 7:
                system("clear");
                security.intro();
                cout << "I am the security guard. Please let met control your cheque." << endl;
                cin.ignore();
                cin.ignore();
                cout << "You show your cheque" <<endl;
                customer1.showCheque();
                cin.ignore();

                if (security.checkCheque(customer1.ToPay, customer1.Cheque) == 1)
                {
                    cout << "You go out of the store\n" << endl;
                    cin.ignore();
                    return 0;
                }
                system("clear");
                break;

            case 8:
                return 0;
                break;

            default:
                cout << "\nThere is no such option" << endl;
                cin.ignore();
                cin.ignore();
                system("clear");
                break;
        }
        
    } while (1);
    

    return 0;
}
