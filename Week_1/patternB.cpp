#include <iostream>

using namespace std;

int main()
{
    int n = 4; // Use a cin instead to take in user input
  
    for(size_t i = 0; i < n; ++i){
      for(size_t b = n-i; b > 0; --b){
        cout<<"  "; // There are 2 whitespaces here
      }
      for(size_t j = 0; j < i+1; ++j){
        cout<<((i%2)==(j%2))<<" "; // There is 1 whitespace after every digit
      }
      cout<<'\n';
    }

    return 0;
}
