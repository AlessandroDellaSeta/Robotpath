//Author: Alessandro Della Seta
//HW2 Robopath
#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
using namespace std;

int main() {
    double r, O;
    double prevX = 0;
    double prevY = 0;
    ifstream f("C:\\Users\\Alessandro\\Desktop\\robotpath.dat");
    string lineBuf;
    getline(f, lineBuf);
    istringstream line(lineBuf);

    while (!f.eof()) {

        getline(f, lineBuf);
        istringstream line(lineBuf);
        line >> r >> O;
        cout << "x: " << prevX + r*sin((O*M_PI)/180) <<  " " <<  "y: " << prevY + r*cos((O*M_PI)/180) <<  endl;
        prevX = prevX + r*sin((O*M_PI)/180);
        prevY = prevY + r*cos((O*M_PI)/180);

    }
    return 0;
}