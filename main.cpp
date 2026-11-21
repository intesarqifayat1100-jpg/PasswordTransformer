#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    string newPassword = "";

    cout << "Enter password: ";
    cin >> password;

    for (int i = static_cast<int>(password.size()) - 1; i >= 0; --i) {
        newPassword += password.at(i);
    }

    for (size_t i = 0; i < newPassword.size(); ++i) {
        switch (newPassword.at(i)) {
            case 'm':
                newPassword.at(i) = 'Q';
                break;
            case 's':
                newPassword.at(i) = '7';
                break;
            case 'a':
                newPassword.at(i) = '@';
                break;
            case 'o':
                newPassword.at(i) = '+';
                break;
            case 'r':
                newPassword.at(i) = 'z';
                break;
            case '4':
                newPassword.at(i) = '!';
                break;
            default:
                break;
        }
    }

    cout << "New password: " << newPassword << endl;

    return 0;
}
