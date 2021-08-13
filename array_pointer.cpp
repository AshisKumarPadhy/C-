/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
  { 
      int arr[5];
      cout<<"Enter elements :";
      
  for(int i=0;i<5;++i)
  
      cin>>arr[i];
        
        cout<<"you entered : ";
        for(int i=0;i<5;++i)
        cout<<endl<<*(arr + i);
        return 0;
  }