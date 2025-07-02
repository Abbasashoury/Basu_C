#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str1[20] ;
	char str2[20] ;
	cin.getline(str1,19);
	cin.getline(str2,19);

	if (strncmp(str1,str2,1))
		if (strncmp(str1,str2,1) == 1)
			cout<<str1<<" > "<<str2<<endl;
		else
			cout<<str1<<" < "<<str2<<endl;
	else
		cout<<str1<<" = "<<str2<<endl; 
    return 0;    
         }
