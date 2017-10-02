#include <iostream>
#include <windows.h>

using namespace std;

int main()
 {
     int roz;
     cout<<"podaj rozmiar trojkata"<<endl;
     cin>>roz;
     for(int i = 0; i<roz; i++)
     {
         for(int j=(roz-i);j>=0;j--)
         {
             cout<<" ";

         }
         for(int k =1;k<=i;k++)
         {
             cout<<" "<<"o"<<" ";
         }
         cout<<endl;
     }
 }
