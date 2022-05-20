#include <iostream>
using namespace std; 
  
int set_bit_count(int n){ 
    if (n == 0) 
        return 0;  
    else
        return (n & 1) + set_bit_count(n >> 1); 
} 
int main(){ 
    int n ; 
    cout << "Enter a number: ";
    cin >> n;
    cout <<"set Bit count in "<< n <<" = " << set_bit_count(n);
    cout << "\n" << endl;
  
    return 0; 
} 