#include <iostream>

using namespace std;

string name;
string age;
string color;
string holiday;
string food;


int main()
{
    cout << "Input your name:\n";
    getline (cin, name);
    cout << "How old are you?\n";
    getline (cin, age);
    cout << "What is your favorite color?\n";
    getline(cin, color);
    cout << "What is your favorite holiday?\n";
    getline (cin, holiday);
    cout << "What is your favorite food?\n";
    getline (cin, food);
    
    
    cout << "Hello " + name + "." + " You are " + age + " and your favorite color is " + color + "." + " I bet you are so excited for " + holiday + ".";
    
    return 0;
}
