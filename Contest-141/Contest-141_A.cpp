#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(void){
  string s;
  cin >> s;

  if(s == "Sunny") cout << "Cloudy" << endl;
  else if(s == "Rainy") cout << "Sunny" << endl;
  else if(s == "Cloudy") cout << "Rainy" << endl;

  
  return 0;    
}
