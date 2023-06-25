// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class bank
{
private:
    string acount_num;
    string name;
    float balance = 0;
public:
    bank(string acount_num, string name)
    {
        this->acount_num = acount_num;
        this->name = name;
    }
    void info()
    {
        cout <<  "name: " << this->name << endl;
        cout << "balance: " << this->balance <<  "$" << endl;
        cout << "id:😘 " << this->acount_num << endl;
        cout << endl;
    }
    void add(double money)
    {
        if (money > 0)
        {
            this->balance += money;
            if (money < 100)
            {
                cout << "idi v popy" << endl;
            }
            else
            {
                cout << "balance updated" << endl;
            }

        }
        else
        {
            cout << "ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR" << endl;
        }
    }  
    void withdraw(int money)
    {
        if (money > 0&&money < balance)
        {
            this->balance -= money;
            if (money > 100)
            {
                cout << "idi v popy" << endl;
            }
            else
            {
                cout << "balance updated" << endl;
            }

        }
        else
        {
            cout << "ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR ERROR" << endl;
        }
    }
};
int main()
{
    bank cat_Pushok("vipcat", "Pushok");
    cat_Pushok.info();

    bank dog_Flafa("vipcat", "Flafa");
    dog_Flafa.info();
    

    double pushok_money;
    cout << "add: ";
    cin >> pushok_money;
    cat_Pushok.add(pushok_money);
    cat_Pushok.info();

    double pushok_withdraw;
    cout << "withdraw: ";
    cin >> pushok_withdraw;
    cat_Pushok.withdraw(pushok_withdraw);
    cat_Pushok.info();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
