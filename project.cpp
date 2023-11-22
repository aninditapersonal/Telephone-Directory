#include <iostream>
using namespace std;

class telephone
{
public:
    string name, num;
    telephone() {}
    telephone(string name, string num)
    {
        this->name = name;
        this->num = num;
    }
    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Number: " << this->num << endl
             << endl;
    }
};

int main()
{
    int choice, count;
    cout << "\n===============WELCOME TO E-PHONE DIRECTORY===============\n\n";
    cout << "How many contacts you want to add? ";
    cin >> count;
    telephone *t = new telephone[count];
    for (int i = 0; i < count; i++)
    {
        string name, num;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter number: ";
        cin >> num;
        fflush(stdin);
        telephone temp(name, num);
        t[i] = temp;
    }

    do
    {
        cout << "1: DISPLAY CONTACTS\n2: DELETE CONTACTS\n3: FIND CONTACTS\n4: EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        switch (choice)
        {
            int si;
        case 1:
            cout << "Displaying all contacts:\n";
            for (int i = 0; i < count; i++)
            {
                t[i].display();
            }
            break;
        case 2:
            cout << "Enter SI No. of contact whose detail you want to delete \n";
            cin >> si;
            for (int i = si; i < count - 1; i++)
            {
                t[i] = t[i + 1];
            }
            count--;
            break;
        case 3:
            cout << "Enter SI No. of contact whose detail you want to find \n";
            cin >> si;
            t[si].display();
            break;
        case 4:
            break;
        default:
            cout << "Wrong choice \n";
            break;
        }
    } while (choice != 4);

    return 0;
}