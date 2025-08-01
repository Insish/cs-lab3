#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
	int x1, y1, z1;
	int x2, y2, z2;

public:
    void input() {
        cout << "Enter coordinates of first vector (x1 y1 z1): ";
        cin >> x1 >> y1 >> z1;
        cout << "Enter coordinates of second vector (x2 y2 z2): ";
        cin >> x2 >> y2 >> z2;
    }
	
    void print() {
        cout << "(" << x1 << ", " << y1 << ", " << z1 << ")" << endl;
    }

    void add() {
        cout << "Sum of vectors: ";
        cout << "(" << x1 + x2 << ", " << y1 + y2 << ", " << z1 + z2 << ")" << endl;
    }

    void sub() {
        cout << "Difference of vectors: ";
        cout << "(" << x1 - x2 << ", " << y1 - y2 << ", " << z1 - z2 << ")" << endl;
    }

    void scalar_product() {
        cout << "Scalar product of vectors = ";
        cout << x1*x2 + y1*y2 + z1*z2 << endl;
    }
    
    void length() {
        double length_v1 = sqrt(x1 * x1 + y1 * y1 + z1 * z1);
        double length_v2 = sqrt(x2 * x2 + y2 * y2 + z2 * z2);
        cout << "Length of first vector: " << length_v1 << endl;
        cout << "Length of second vector: " << length_v2 << endl;
    }

    void cosine_angle() {
        double length_v1 = sqrt(x1 * x1 + y1 * y1 + z1 * z1);
        double length_v2 = sqrt(x2 * x2 + y2 * y2 + z2 * z2);
        double scalar_product = x1 * x2 + y1 * y2 + z1 * z2;
        cout << "Cosine of the angle = ";
        cout << scalar_product / (length_v1 * length_v2) << endl;
    }
};

int main() {
    Vector v;

    v.input();

    v.add();
    v.sub();
    v.scalar_product();
    v.length();
    v.cosine_angle();
}
