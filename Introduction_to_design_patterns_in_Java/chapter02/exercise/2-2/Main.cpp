#include <iostream>
#include "FileProperties.hpp"

int main()
{
    FileProperties f = FileProperties();
    f.readFromFile("file.txt");
    f.setValue("width", "1024");
    f.setValue("height", "512");
    f.setValue("depth", "32");
    f.writeToFile("newfile.txt");
    std::cout << "new file is created." << std::endl;
}