#include <iostream>
using namespace std;

enum Level {
  LOW,
  MEDIUM = 3,
  HIGH,
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 1:
      printf("Low Level");
      break;
    case 2:
      printf("Medium level");
      break;
    case 3:
      printf("High level");
      break;
  }
  return 0;
}