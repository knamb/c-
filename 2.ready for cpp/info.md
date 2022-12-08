### typedef : 타입의 이름을 새로운 별칭으로 정의하고, 별칭으로 사용(이미 정의된 타입 및 사용자 정의타입인 struct, class 보다 더 짧거나 의미있는 이름을 지어서 사용 가능)
-> typedef <타입> <별칭>
```cpp
#include <bits/stdc++.h>
using namespace std;
typedef int i;
int main(){
  i a = 1;
  cout << a << '\n';
  return 0;
}
```

### define : define을 통해 상수, 매크로를 정의할 수 있다
-> #define <이름> <값>
```cpp
#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159
#define loop(x,n) for (int x=0; x<n; x ++); // for반복문을 loop라는 문자열로 치환

int main(){
  cout << PI << '\n';
  int sum = 0;
  loop(i, 10){
    sum+= i;
  }
  cout << sum << '\n';
  return 0;
}
```
### STL : standard templete library 를 제공하며 자료구조, 함수 등을 제공하는 라이브러리 // [알고리즘, 컨테이너, 이터레이터, 펑터]
알고리즘 : 정렬, 탐색 등에 관한 함수로 이루어져 있음

컨테이너 : c++에서 제공하는 자료구조를 의미함
- 시퀀스 컨테이너 : 데이터를 단순히 저장해 놓는 자료구조 ex) array, vector, deque, forward_list, list
- 연관 컨테이너 : 자료가 저장됨에 따라 자동정렬 되는 자료구조, 중복키가 가능한 것은 이름에 multi가 붙음 ex) set, map, multiset, multimap
- 정렬되지 않은 연관 컨테이너 : 자료가 저장됨에 따라 자동정렬이 되지 않는 자료구조를 말함 ex) unordered_set, unordered_map, unordered_multiset, unordered_multimap
- 컨테이너 어댑터 : 시퀀스 컨테이너를 이용해 만든 자료구조를 의미 ex) [stack, queue] <- deque를 이용 [priority_queue] <- vector를 이용

이터레이터 : 나중에 정리 

~~ 펑터 : 함수 호출 연산자를 오버로드하는 클래스의 인스턴스 ~~