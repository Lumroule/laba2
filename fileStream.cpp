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
        while (true) {
            stream2 << currChar;
            file.get(currChar);
            if (currChar == '.' ) {
                count++;
                stream2 << currChar;
                break;
            }
        }
        file.get(currChar);
        while (true) {
            stream1 << currChar;
            file.get(currChar);
            if (currChar == '.') {
                count++;
                stream1 << currChar;
                break;
            }
        }
        file.get(currChar);
        while (true) {
            stream << currChar;
            file.get(currChar);
            if (currChar == '.' ) {
                count++;
                stream << currChar;
                break;
            }
        }
        file.get(currChar);
    }
    cout << stream.str() << stream1.str() << stream2.str() << endl;
}