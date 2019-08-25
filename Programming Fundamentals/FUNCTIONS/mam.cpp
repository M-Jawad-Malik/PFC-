#include <iostream>

using namespace std;

int max_array(int arr[], int size);
int main()
{
   int n, largest;
   int num[n];
   cout<<"Enter number of elements you want to enter: ";
   cin>>n;
   
   
   for(int i = 0; i < n; i++) {
      cout<<"Enter Element "<<i<< ": ";
      cin>>num[i];
   }
   
   largest = max_array(num, n);
   cout<<"Largest element in array is: "<<largest;
   return 0;
}

int max_array(int arr[], int size)
{
    // Storing first array element in "largest" variable
    int lar=arr[0];
    for(int i = 1;i < size; i++) {
    
      if(lar < arr[i])
         lar = arr[i];
   } 
    return lar;
}
