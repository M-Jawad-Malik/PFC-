#include <iostream>
#include <cmath>
using namespace std;
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
int main()
{   long long n;
int binaryNumber;
char a;
    cout<<"\t\t\t\t\t\tWHAT DO YOU WANT:\n\n\n ";
    cout<<"\t\t\t\t\t1. BINARY NUMBER TO DECIMAL NUMBER\n";
    cout<<"\t\t\t\t\t2. DECIMAL NUMBER TO BINARY NUMBER\n";
    cout<<"\t\t\t\t\tENTER OPTION NO: ";
    cin>>a;
    if(a=='1')
    {
	
    cout << "Enter a binary number: ";
    cin >> n;
    cout << n << " in binary = " << convertBinaryToDecimal(n) << " in decimal";}
    else if(a=='2')
    {
	cout << "Enter a Decimal number: ";
    cin >> n;
    binaryNumber = convertDecimalToBinary(n);
    cout << n << " in decimal = " << binaryNumber << " in binary";}
    return 0;
}
    

