#ifndef FILEIO_H
#define FILEIO_H

#include <string>

class FileIO
{
public:
    virtual void readFromFile(const std::string& filename) = 0;

    virtual void writeToFile(const std::string& filename) = 0;

    virtual void setValue(const std::string& key, const std::string& value) = 0;

    virtual std::string getValue(const std::string& key) = 0;

    virtual ~FileIO() {}
};

#endif // FILEIO_H