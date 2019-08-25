#include <iostream>
#define size 2
using namespace std;
 
 
int main()
{
    int Arr[size][size];
    int row, col, sum = 0;
 
    
    cout<<"Enter elements in matrix of size "<<size<<" x "<<size<<"\n";
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            cin>>Arr[row][col];
               
        }   }
        cout<<"elements of given array are = "<<endl;
        for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            cout<<Arr[row][col]<<" ";
               
        } cout<<"\n";  }
        
        
       
 
    
    for(row=0; row<size; row++)
    {
        sum = 0;
        for(col=0; col<size; col++)
        {
            sum += Arr[row][col];
        }
        
        cout<<"Sum of elements of row "<<row+1<<" = "<<sum<<"\n";
    }
 
    
    for(row=0; row<size; row++)
    {
        sum = 0;
        for(col=0; col<size; col++)
        {
            sum += Arr[col][row];
        }
        
        cout<<"Sum of elements of column "<<row+1<<" = "<<sum<<"\n";
    }
 
    return 0;
}
