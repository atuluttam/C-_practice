#include <iostream>
using namespace std;

int main()
{
     int n, num, temp, rev = 0;
     cout << "Enter a positive number: ";
     cin >> num;
     n = num;
     do
     {
         temp = num % 10;
         rev = (rev * 10) + temp;
         num = num / 10;
     } while (num != 0);

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}