#include <format>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string today = "Monday";
  string mood;
  if (today == "Friday") {
    mood = "happy";
  } else {
    mood = "sad";
  }
  string output = format("today is {},mood is {}\n", today, mood);
  cout << output;
    printf("hello world\n");
}
