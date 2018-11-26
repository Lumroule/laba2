#ifndef LAB2TP_FILESTREAM_H
#define LAB2TP_FILESTREAM_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class fileStream {
private:

    /**
     * Имя файла.
     */
    string const fileName = "/documents/study/programms/lab2tp/text.txt";

    /**
     * Поток последовательного чтения символов из файла.
     */
    ifstream file;

    /**
     * Строковый поток, в который записываются цитаты.
     */
    stringstream stream, stream1, stream2;

    /**
     * Количество кавычек.
     */
    int count;

    /**
     * Текущий символ, прочитанный из файла.
     */
    char currChar;
public:
    fileStream();
    ~fileStream();
    void execute();
};

#endif //LAB2TP_FILESTREAM_H
