#include <iostream>
using namespace std;

void print(int &len, int &wth);
void input(int len, int wth);


int main() {
   int length = 10, width = 5;
   cout<<"Length:";
   cin>>length;
   cout<<"Width:";
   cin>> width;
   print(length, width);
   return 0;
}


void print(int &len, int &wth) {
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}


