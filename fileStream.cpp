#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include "fileStream.h"


fileStream::fileStream() {
    file.open(fileName, ios_base::in);
    count = 0;
    file.get(currChar);
}

fileStream::~fileStream() {
    file.close();
    stream.str("");
    stream1.str("");
    stream2.str("");
    count = 0;
}

void fileStream::execute() {
    while (!file.eof() && count != 3) {
        while (!file.eof()) {
            stream2 << currChar;
            file.get(currChar);
            if ((currChar == '.') || (currChar == '?') || currChar == ('!')) {
                stream2 << currChar;
                count++;
                break;
            }
        }
        file.get(currChar);
        while (!file.eof()) {
            stream1 << currChar;
            file.get(currChar);
            if ((currChar == '.') || (currChar == '?') || currChar == ('!')) {
                stream1 << currChar;
                count++;
                break;
            }
        }
        file.get(currChar);
        while (!file.eof()) {
            stream << currChar;
            file.get(currChar);
            if ((currChar == '.') || (currChar == '?') || currChar == ('!')) {
                stream << currChar;
                count++;
                break;
            }
        }
        file.get(currChar);
    }
    if (count >= 3) {
        cout << stream.str() << stream1.str() << stream2.str() << endl;
        return;
    }
    cout << "Need more sentences";
}