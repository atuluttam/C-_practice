#include <iostream>
using namespace std;

int length_of_string(char*p){
    int count = 0;
    while (*p != '\0') {
        count++;
        p++;
    }
    return count;
}

int main(){
    char str[50];
    int length;
    cout << "\nEnter any string : ";
    cin >> str;
    length = length_of_string(str);
    cout << "\n The length of the given string : " << length;
    cout << "\n" << endl;
    return 0;
}

