#include <iostream> 
using namespace std; 
  

int factorial(int n) 
{ 
    float fact = 1; 
    for (int i=1; i<=n; i++) 
       fact *= i; 
    return fact; 
} 
  
// Function to return value of 1/1! + 1/2! + .. + 1/n! 
double sum(int n) 
{ 
    float sum = 0; 
    for (int i = 1; i <= n; i++) 
    {
        sum += (1.0)/factorial(i); 
    }
    return sum; 
} 
  
 
int main() 
{ 
    int n;
    cout<< "Please enter the value of n: ";
    cin>>n;
    cout << "Sum of the series is : "<< sum(n); 
    return 0; 
}


