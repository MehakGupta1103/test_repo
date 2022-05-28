#include<iostream>
using namespace std;
void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "geeksquiz";
   char *y = "geeksforgeeks";
   char *t;
   swap(x, y); //--> dont change the real values
   cout<<x << " "<<y;
   t = x;       //
   x = y;       // this swaps
   y = t;       //
   cout<<" "<<x<< " "<<y;
   return 0;
}