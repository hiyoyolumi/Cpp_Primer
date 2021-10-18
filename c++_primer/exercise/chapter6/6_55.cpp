int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

v.push_back(add);
v.push_back(subtract);
v.push_back(multiply);
v.push_back(divide);