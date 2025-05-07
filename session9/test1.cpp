#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int m = 2;

    
    int A[n][m];
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++)
        {
            cout<<"Enter A["<<i<<"]["<<j<<"]:";
            cin>>A[i][j];
        }
           
    }

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            cout<<A[i][j] <<"\t";
        cout<<endl;
    }
}