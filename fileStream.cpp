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

    while (file.eof()) {
        if (currChar == '.') {
            count++;
            file.get(currChar);
            while (count == 1) {
                stream2 << currChar;
            }
            while (count == 2) {
                stream1 << currChar;
            }
            while (count == 3)
        }
    }
    cout << stream2.str() << stream1.str() << stream.str() << endl;
}

    /** while (!this->file.eof()) {
        if (this->currChar  == '\"') {
            this->count++;
            this->file.get(this->currChar);
            for (; this->currChar != '\"' && !this->file.eof();) {
                stream << this->currChar;
                this->file.get(this->currChar);
            }
            if (this->currChar  == '\"') {
                this->count++;
            }
            this->stream << '\n';
        }
        this->file.get(this->currChar);
    }
    if (!this->count) {
        cout << "---- There are no quotes! ----" << endl;
    } else if (!(this->count % 2)) {
        cout << "---- Quotes found ----" << endl;
        cout << this->stream.str();
    } else {
        cout << "Incorrect numbers of quote signs!" << endl;
    }
} */