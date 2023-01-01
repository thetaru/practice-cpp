#ifndef FILEPROPERTIES_H
#define FILEPROPERTIES_H

#include "FileIO.hpp"
#include "Properties.hpp"

class FileProperties : public FileIO
{
private:
    prop::property m_prop = prop::property();

public:
    void readFromFile(const std::string& filename);

    void writeToFile(const std::string& filename);

    void setValue(const std::string& key, const std::string& value);

    std::string getValue(const std::string& key);
};

#endif // FILEPROPERTIES_H