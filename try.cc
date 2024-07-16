#include <iostream>
template<typename T>
T max(T a, T b){
  return b < a ? a : b;
}

int main(){
   std::cout << 7 << std::endl;
    return 0;
}
