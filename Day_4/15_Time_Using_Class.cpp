#include <iostream>
using namespace std;

class Time {
    int hour, minute, second;
public:
    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}
    void display() const {
        cout << (hour < 10 ? "0" : "") << hour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second << endl;
    }
};

int main() {
    Time t(10, 35, 45);
    t.display();
    return 0;
}
