#include <iostream>

using namespace std;
  
int main() {
  cout << "Hello, World!" <<endl; 
  //std : 일종의 성
  //<< : 데이터 분리
}

//

#include <iostream>

using namespace std;
  
int main() {
  int a, b;
  cin >> a >> b;
  
  cout << a << "+" << b << "=" << a + b << endl;
  
}

// String 사용하기
#include <iostream>
#include <string>

using namespace std;
  
int main() {
  string name;
  
  cout << "이름 입력 : ";
  cin >> name;
  
  string message = "안녕하세요, " + name + "님.";
  cout << message << endl;
  
}






