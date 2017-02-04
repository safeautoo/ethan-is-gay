#include <iostream>

using namespace std;

string input;

int endCareer(string lovedOne) {
  cout << "ur " << lovedOne << " gay" << endl;
}

int main() {

  cout << "Please input your loved one's name to be euthanized." << endl;

  cin >> input;

  endCareer(input);

  cin.ignore();
  cin.get();

  cout << "Now that ur " << input << " gay, how would you like to leave this world?" << endl;

  cin.get();

  cout << "1. Meme overdose\n"
          "2. Spare your own life and end someone else's career." << endl;

  cin >> input;

  if (input == "1") {
    cout << "lol ur family gay" << endl;

    cin.ignore();
    cin.get();

    return 0;
  } else if (input == "2") {
    cout << "lol ur family still gay, scumbag" << endl;

    cin.ignore();
    cin.get();

    return 0;
  }

  return 0;

}
