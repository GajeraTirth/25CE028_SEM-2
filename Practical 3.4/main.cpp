#include "ArrayOperations.h"

int main() {
    int intArr[] = {16, 17, 4, 3, 5, 2};
    float floatArr[] = {1.1, 3.5, 2.2, 5.6, 4.4};
    char charArr[] = {'a', 'z', 'b', 'y', 'c'};

    ArrayOperations<int> intObj(intArr, 6);
    ArrayOperations<float> floatObj(floatArr, 5);
    ArrayOperations<char> charObj(charArr, 5);

    cout << "Integer:\n";
    intObj.display();
    cout << "Max: " << intObj.findMax() << endl;
    intObj.findLeaders();
    intObj.reverseArray();
    intObj.display();

    cout << "\nFloat:\n";
    floatObj.display();
    cout << "Max: " << floatObj.findMax() << endl;
    floatObj.findLeaders();
    floatObj.reverseArray();
    floatObj.display();

    cout << "\nCharacter:\n";
    charObj.display();
    cout << "Max: " << charObj.findMax() << endl;
    charObj.findLeaders();
    charObj.reverseArray();
    charObj.display();

    return 0;
}
