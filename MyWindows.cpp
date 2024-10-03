#include "MyWindows.h"
using namespace std;

void window1(User &user){
    unsigned int choice;
    system("cls");
    while (true) {
        cout << "----User info----" << endl;
        cout << "Cars: " << user.getCarList().size() << endl;
        cout << "User all money spent: " << user.getUserMoneySpent() << endl;
        cout << "User service money spent: " << user.getUserMoneySpentService() << endl;
        cout << "User refuel money spent: " << user.getUserMoneySpentRefueling() << endl;
        cout << "----User info----" << endl;
        cout << "Add new car: 0" << endl;
        cout << "Delete car: 1" << endl;
        cout << "Choose car to edit: 2" << endl;
        cout << "Print Cars info: 3" << endl;
        cout << "Close program: 4" << endl;
        cout << "Your choice: ";
        cin >> choice;
        if (choice == 0) {
            user.addCar();
        } else if (choice == 1) {
            user.deleteCar();
            user.updateUserMoneySpent();
        } else if (choice == 2) {
            unsigned int car_choice;
            cout << "Choose car id to edit: " << endl;
            for (unsigned int x = 0; x < user.getCarList().size(); x++) {
                cout << "Car " << x << " - " << user.getCarList()[x]->getCarName() << endl;
            }
            cout << "Your choice: ";
            cin >> car_choice;
            window2(user, *user.getCarList()[car_choice]);
        } else if (choice == 3) {
            user.printCarsInfo();
        } else if (choice == 4) {
            exit(0);
        }
    }

}

void window2(User &user, Car &car){
    system("cls");
    unsigned int choice;
    while (true) {

        cout << "Chosen car: " << car.getCarName() << endl;
        cout << "What to do?:" << endl;
        cout << "0 - Print car events;" << endl;
        cout << "1 - Add new event;" << endl;
        cout << "2 - Choose and delete event;" << endl;
        cout << "3 - Delete ALL events;" << endl;
        cout << "4 - Back to window 1;" << endl;
        cout << "Your choice: ";
        cin >> choice;
        if (choice == 0) {
            car.printEventList();
        } else if (choice == 1) {
            car.addEvent();
            user.updateUserMoneySpent();
        } else if (choice == 2) {
            car.deleteEventListElement();
            user.updateUserMoneySpent();
        } else if (choice == 3) {
            car.deleteEventList();
            user.updateUserMoneySpent();

        } else if (choice == 4) {
            window1(user);
        }
    }

}