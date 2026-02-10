#include <iostream>
using namespace std;

class Food
{
public:
    int id;
    string name;
    float price;

    Food(int i, string n, float p)
    {
        id = i;
        name = n;
        price = p;
    }

    void show()
    {
        cout << id << ". " << name << " - Rs." << price << endl;
    }
};

class Order
{
private:
    float total;

public:
    Order()
    {
        total = 0;
    }

    void add(float price)
    {
        total += price;
    }

    float gst()
    {
        return total * 0.05;
    }

    void bill()
    {
        cout << "\nSubtotal : Rs. " << total;
        cout << "\nGST (5%) : Rs. " << gst();
        cout << "\nTotal    : Rs. " << total + gst();
    }
};

int main()
{
    Food menu[] = {
        Food(1, "Pizza", 250),
        Food(2, "Burger", 120),
        Food(3, "Pasta", 180),
        Food(4, "Coffee", 80)};

    Order order;
    int choice;
    char more;

    cout << "=== ONLINE FOOD ORDERING SYSTEM ===\n";
    cout << "\nMenu:\n";
    for (int i = 0; i < 4; i++)
        menu[i].show();

    do
    {
        cout << "\nEnter item number: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            order.add(menu[choice - 1].price);
            cout << "Item added successfully!";
        }
        else
        {
            cout << "Invalid choice!";
        }

        cout << "\nOrder more? (y/n): ";
        cin >> more;

    } while (more == 'y' || more == 'Y');

    order.bill();
    cout << "\n\nThank you for ordering!\n";
    return 0;
}