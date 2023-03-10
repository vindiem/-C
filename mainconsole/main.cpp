#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Human
{
public:
    int age = 0;
    float height = 0;
    string skinColor = "default";
    int ownNumber = 0;
};

void HumanDefaultValues(int age, float height, string skinColor, int ownNumber)
{
    // variables output
    cout << "default age: " << age << endl;
    cout << "default height: " << height << endl;
    cout << "default skin color: " << skinColor << endl;
    cout << "default own number: " << ownNumber << endl;
}

class InputHuman
{
public:
    int age = 0;
    float height = 0;
    string skinColor = "default";
    int ownNumber = 0;

public:
    void InputDatas()
    {
        // Input age
        cout << "age: ";
        cin >> age; cin.ignore();

        // Input height
        cout << "height: ";
        cin >> height;

        // Input skin color
        cout << "skin color: ";
        cin >> skinColor; cin.ignore();

        // Input own number
        cout << "own number: ";
        cin >> ownNumber; cin.ignore();

        HumanDefaultValues(age, height, skinColor, ownNumber);
    }

};

int main(int argc, char *argv[])
{
    Human* human = new Human;
    HumanDefaultValues(human->age, human->height, human->skinColor, human->ownNumber);

    InputHuman* IHuman = new InputHuman();
    IHuman->InputDatas();

}
