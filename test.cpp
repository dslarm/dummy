#include <iostream>
using namespace std;
extern "C" {
  double fiddlesticks();
}

int main() {

	cout << "Hello world" << endl;
        cout << fiddlesticks();
}
