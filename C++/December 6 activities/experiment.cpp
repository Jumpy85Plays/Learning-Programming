// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;
 
int main () {
  ofstream myfiles("exampletxt");
  if (myfiles.is_open())
  {
    myfiles <<"This is a line.\n";
    myfiles <<"This is another line.\n";
    myfiles.close();
  } else { cout <<"Unable to open file"; }
    system("pause");
    return 0;
}


