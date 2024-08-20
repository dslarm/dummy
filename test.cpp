#include <iostream>
using namespace std;
extern "C" {
  double fiddlesticks_();
}

int main() {

	cout << "Hello world" << endl;
        cout << fiddlesticks_();
}
