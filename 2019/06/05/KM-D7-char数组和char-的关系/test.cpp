#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void func(char *tmp) {

}

int main(int argc, char *argv[])
{
    char array[] = "Here is Array!";
    char array_bp[] = "Here is Array!";
    char *pointer = strdup("Here is pointer!");
    const char *pointer_bp = "Here is pointer!";

    cout << sizeof(array) << endl;
    cout << sizeof(pointer) << endl;
    cout << strlen(array) << endl;
    cout << strlen(pointer) << endl;

    free(pointer);

    return 0;
}
