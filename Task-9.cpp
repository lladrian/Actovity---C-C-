#include <iostream>
using namespace std;
int main()
{
 int i,j,num;
 
    cout << "Enter number between 5 and 10: ";
    cin >> num;
    
     for(i=num;i>=1;i--) {
         for(j=1;j<=i;j++) {
           cout << "@";
         }
         for(j=num;j>i;j--) {
           cout << " ";
         }
         for(j=1;j<=i;j++) {
           cout << "@";
         }  
       cout << endl;
     }
return 0;
}