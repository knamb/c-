//int scanf (const char * format, ...);
//scanf는 첫번째 매개변수로 받는 형식을 지정해서 입력을 받는다
//%d : int 타입
//%lf : double 타입
//%c : char 타입
//입력형식이 정해졌을때 사용하면 좋다, 일반적으로 사용시에는 cin으로 입력을 받는다

#include <bits/stdc++.h> // 일반적으로는 실수는 이런식으로 입력을 받는다
using namespace std;
int a;
double b;
char c;
int main(){
  scanf("%d %lf %c", &a, &b, &c);
  printf("%d\n",a);
  printf("%lf\n",b);
  printf("%c\n",c);
  return 0;
}

#include <bits/stdc++.h> // 실수타입의 연산을 까다롭기 때문에 정수타입으로 받아서 연산하는 방법도 있다 
using namespace std;
int a, b;
double c;
int main(){
  scanf("%d.%d", &a, &b);
  printf("%d.%d\n", a, b);

  scanf("%lf", &c);
  printf("%lf\n", c);
  return 0;
}

//d : int
//c : char
//s : string
//lf : double
//ld : long long