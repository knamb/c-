#include <bits/stdc++.h> // 헤더파일을 include
using namespace std; // std라는 네임스페이스를 사용, 많은 라이브러리에서 변수의 중복이 발생할 수 있는데 이를 방지하기 위해서 변수명에 범위를 한정하는 것
string a; // lvalue a, rvalue '입력하는 값', string 이라는 타입을 가지는 변수 a를 선언 
int main(){
  cin >> a; // std::cin, scanf도 존재함
  cout << a << "\n"; // std::cout, printf도 존재함
  return 0; // c++은 하나의 cpp파일에 하나의 main만 존재 따라서 하나의 main함수를 기반으로 로직을 구성해야함
}