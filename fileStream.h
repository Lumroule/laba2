#ifndef LAB2TP_FILESTREAM_H
#define LAB2TP_FILESTREAM_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class fileStream {
private:
    // file name
    string const fileName = "/Users/lumroule/Documents/Study/Programms/lab2tp/text.txt";
    ifstream file;
public:
    fileStream();
    ~fileStream();
    void execute();
};

#endif //LAB2TP_FILESTREAM_H