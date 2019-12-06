
#include <iostream>

using namespace std;

int main()
{
    float a, b, result = 0;
    int num;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Press 1 to add two numbers.\nPress 2 to subtract two numbers.\nPress 3 to multiply two numbers.\nPress 4 to divide two numbers.\n";
    cin >> num;
    switch(num){
        case 1:
            result = a + b;
        break;
        case 2:
            result = a - b;
        break;
        case 3:
            result = a * b;
         break;
        case 4:
            if(b == 0){
                cout << "Divide by zero error.\n";
            }
            else{
                result = a / b;
            }
        break;
    }
    cout << result;
    return 0;
}