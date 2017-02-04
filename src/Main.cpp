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

  return 0;

}
