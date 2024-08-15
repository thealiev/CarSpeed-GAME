#include <iostream>
#include <conio.h> 

using namespace std;

class CarSpeedGame {
private:
    int speed;
    bool gameRunning;

public:
    CarSpeedGame() : speed(0), gameRunning(true) {}

    void start() {
        while (gameRunning) {
            displayMenu();
            char choice = _getch(); 

            switch (choice) {
                case '1':
                    increaseSpeed();
                    break;
                case '2':
                    decreaseSpeed();
                    break;
                case '3':
                    showSpeed();
                    break;
                case 'q':
                    gameRunning = false;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        }

        cout << "Thank you for playing!" << endl;
    }

private:
    void displayMenu() {
        system("cls"); 
        cout << "Car Speed Game" << endl;
        cout << "1. Increase Speed" << endl;
        cout << "2. Decrease Speed" << endl;
        cout << "3. Show Current Speed" << endl;
        cout << "q. Quit" << endl;
        cout << "Enter your choice: ";
    }

    void increaseSpeed() {
        speed += 10;
        cout << "Speed increased to " << speed << " km/h" << endl;
        _getch(); 
    }

    void decreaseSpeed() {
        if (speed >= 10) {
            speed -= 10;
            cout << "Speed decreased to " << speed << " km/h" << endl;
        } else {
            cout << "Speed cannot be decreased further!" << endl;
        }
        _getch();
    }

    void showSpeed() {
        cout << "Current speed: " << speed << " km/h" << endl;
        _getch(); 
    }
};

int main() {
    CarSpeedGame game;
    game.start();
    return 0;
}
