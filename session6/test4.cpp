#include <iostream>
using namespace std;
//read 10 numbers, write positive numbers after negative numbers
int main()
 {
    const int size = 10;  
    int arr[size];    
    int n;
    int c=0,k=size-1;
    for (int i = 0; i < size; i++)
     {
        cout<< "Enter number "<<i+1<<":"<< endl;
        cin >> n;
        if (n<0)
        {
         arr[c++]=n;
        }
        else{
            arr[k--]=n;
        }
    }

    //write Negative numbers
    cout << " Negative numbers :" << endl;
    for (int i = 0; i < c; i++) 
    
           cout << arr[i] << " ";
        
    
    cout<<endl;
    // write Positive number
    cout<< "Positive Numbers  :" << endl;
    for (int i = size-1; i > k; i--) {
        cout<<arr[i]<<" ";
    }
    cout << endl;

    return 0;
}