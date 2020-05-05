#include <iostream>

using namespace std;

struct fraction {
  int a, b;
};

int main() {
  char op;
  char dev_null;

  fraction a, b;

  cin >> a.a >> dev_null >> a.b >> op >> b.a >> dev_null >> b.b;

  switch (op) {
    case '+':
      cout << "Your answer: " << (a.a * b.b) + (a.b * b.a) << "/"
           << (a.b * b.b);
      break;
    case '-':
      cout << "Your answer: " << (a.a * b.b) - (a.b * b.a) << "/"
           << (a.b * b.b);
      break;
    case '*':
      cout << "Your answer: " << (a.a * b.a) << "/" << (a.b * b.b);
      break;
    case '/':
      cout << "Your answer: " << (a.a * b.b) << "/" << (a.b * b.a);
      break;
    default:
      cout << "Error!";
      break;
  }
}
