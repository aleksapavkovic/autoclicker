#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
/*
    Made by: @cryptoplusplus
    Support me on:
    Facebook: /aleksa.pavkovic.7
    Instagram: @cryptoplusplus
    Github: crypto-plus-plus
    ENJOY!
*/
class Click {
private:
    int num, time, milisec, speed, sleep;     //Number of clicks, sleeping time, seconds to miliseconds (for Sleep() method), clicking speed
public:
    void Logo() {       //ASCII Art
        cout << R"(
Made by: @cryptoplusplus
Free testing at: https://valera-rozuvan.github.io/online-counter/
 ______           __                   ___                __                      
/\  _  \         /\ \__               /\_ \    __        /\ \                     
\ \ \L\ \  __  __\ \ ,_\   ___     ___\//\ \  /\_\    ___\ \ \/'\      __   _ __  
 \ \  __ \/\ \/\ \\ \ \/  / __`\  /'___\\ \ \ \/\ \  /'___\ \ , <    /'__`\/\`'__\
  \ \ \/\ \ \ \_\ \\ \ \_/\ \L\ \/\ \__/ \_\ \_\ \ \/\ \__/\ \ \\`\ /\  __/\ \ \/ 
   \ \_\ \_\ \____/ \ \__\ \____/\ \____\/\____\\ \_\ \____\\ \_\ \_\ \____\\ \_\ 
    \/_/\/_/\/___/   \/__/\/___/  \/____/\/____/ \/_/\/____/ \/_/\/_/\/____/ \/_/ 
                                                                                   
)" << "\n";
    }
    void Start() {      //Start 
        Logo();
        Sleep(900);
        cout << "--------------------------------------------------------------" << endl;
        cout << "|                 Welcome to autoclicker!                    |" << endl;
        cout << "--------------------------------------------------------------" << endl;
        cout << endl;
        Sleep(1000);
        cout << "Enter amount of clicks you want: " << endl;
        cout << ">> ";
        cin >> num;
        if (!cin) {
            cout << "You didn't entered a number, exiting... " << endl;
            Sleep(900);
            exit(0);
        }
        cout << "Enter clicking speed (from 1 to 10): " << endl;
        cout << ">> ";
        cin >> speed;
        if (!cin) {
            cout << "You didn't entered a number, exiting... " << endl;
            Sleep(900);
            exit(0);
        }
        if (speed <= 0) {
            cout << "Number cannot be less than zero or equal to zero, exiting... " << endl;
            Sleep(900);
            exit(0);
        }
        else if (speed > 10) {
            cout << "Number cannot be greater than ten, exiting... " << endl;
            Sleep(900);
            exit(0);
        }
        else if (speed == 1) {
            sleep = 600;
        }
        else if (speed == 2) {
            sleep = 400;
        }
        else if (speed == 3) {
            sleep = 380;
        }
        else if (speed == 4) {
            sleep = 300;
        }
        else if (speed == 5) {
            sleep = 120;
        }
        else if (speed == 6) {
            sleep = 100;
        }
        else if (speed == 7) {
            sleep = 90;
        }
        else if (speed == 8) {
            sleep = 60;
        }
        else if (speed == 9) {
            sleep = 50;
        }
        else if (speed == 10) {
            sleep = 20;
        }
        cout << "Enter time sleeping before the attack (seconds): " << endl;
        cout << ">> ";
        cin >> time;
        if (!cin) {
            cout << "You didn't entered a number, exiting... " << endl;
            Sleep(900);
            exit(0);
        }
        milisec = time * 1000;      //Miliseconds to seconds
        
        cout << "*NOTE* SELECT WANTED BUTTON OR POSITION YOU WANT TO BE CLICKED!" << endl;
        Sleep(milisec);
        for (int i = 6; i >= 1; i--) {
            cout << "Attack starting in: " << i << endl;
            Sleep(900);
        }
        Sleep(500);
        for (int i = 0; i < num; i++) {     //Loop (n times)
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //Press 
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); //Release
            Sleep(sleep);
        }
    }
};

int main()
{
    Click* cl = new Click();
    cl->Start();
    return 0;
}