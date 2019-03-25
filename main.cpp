#include <iostream>
#include <memory>
#include "TextQuery.h"
//#include "RunQuery.h"

using namespace std;

int main() {

    ifstream ifs("/home/raopei/1.txt");
    TextQuery tq(ifs);
    while (true) {
        cout << "Enter word to look for, or q to quit:" << endl;
        string s;
       if (!(cin >> s) || (s == "q"))
            break;

        tq.query(s).showResult();

    }
    return 0;
}