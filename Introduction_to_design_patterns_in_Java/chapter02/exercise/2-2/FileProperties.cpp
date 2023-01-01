#include "FileProperties.hpp"

FileProperties::FileProperties()
    : m_prop(prop::property())
{ }

void FileProperties::readFromFile(const std::string& filename)
{
    m_prop.loadfromfile(filename);
}

void FileProperties::writeToFile(const std::string& filename)
{
    m_prop.storefromprops(filename);
}

void FileProperties::setValue(const std::string& key, const std::string& value)
{
    m_prop.set(key, value);
}

std::string FileProperties::getValue(const std::string& key)
{
    return m_prop.get(key);
}
