//cin, scanf, getline 입력
//cout, printf 출력

//cin은 개행문자 까지 입력을 받는다
//scanf는 형식을 지정해서 입력을 받는다

#include <bits/stdc++.h>
using namespace std;
int a;
int main(){
  cin >> a;
  scanf('%d', &a);
  return 0;
}

//특정한 형식을 기반으로 입력이 주어지지 않는경우 cin, cin은 개행문자(띄어쓰기, 엔터)까지 입력을 받는다