#include <iostream>
#include <limits>
#include <string>

using namespace std;

void ZaborStyle() {
    string str;
    int num;
    bool upper = true;
    cout << "What symbol do you want to start with? First - 1, Second - 2: "; cin >> num;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << "Enter your string: ";
    getline(cin, str);
    
    switch(num) {
        case 1:
            for (char &ch : str) {
                if (isalpha(ch)) {
                    ch = upper ? toupper(ch) : tolower(ch);
                    upper = !upper;
                }
            }
            break;
        case 2:
            for (char &ch : str) {
                if (isalpha(ch)) {
                    ch = upper ? tolower(ch) : toupper(ch);
                    upper = !upper;
                }
            }
            break;
    }
    cout << "Returned string: " << str << endl;
}

int main() {
    int n;
    cout << "\n1 - ZabotStyle\n2 - RandomStyle\n3 - Exit\n~$ ";
    cin >> n;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch(n) {
        case 1:
            ZaborStyle();
            break;
        case 2:
            cout << "There is no function";
            break;
        case 3:
            cout << "Goodbye!";
            break;
        default:
            cout << "Man.";
            break;

    }

    return 0;
}