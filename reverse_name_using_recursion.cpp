#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str, int index) {
    if (index == -1) {
        return "";
    }
    
    return str[index] + reverseString(str, index - 1);
}

int main() {
    string name = "RAM";
    int lastIndex = name.length() - 1;

    string reversedName = reverseString(name, lastIndex);

    cout << "Original name: " << name <<endl;
    cout << "Reversed name: " << reversedName <<endl;

    return 0;
}
