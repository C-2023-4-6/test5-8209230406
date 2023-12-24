#include<iostream>
using namespace std;
class V
{
public:
    void set_value() {
        cout << "请分别输入长方形的长、宽、高:" << endl;
        cin >> length;
        cin >> width;
        cin >> height;

    };

    void count_display() {
        cout << length * width * height << endl;
    };

private:
    double length;
    double width;
    double height;

};

int main() {
    V v1, v2, v3;
    v1.set_value();
    cout << "长方形1的体积" << endl;
    v1.count_display();
    v2.set_value();
    cout << "长方形2的体积" << endl;
    v2.count_display();
    v3.set_value();
    cout << "长方形3的体积" << endl;
    v3.count_display();
}