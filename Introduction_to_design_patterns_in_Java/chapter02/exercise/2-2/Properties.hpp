#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <fstream>
#include <iostream>
#include <map>
#include <string>

namespace prop
{
typedef std::map<std::string, std::string> ptype;
class property
{
private:
    ptype m_props;
    bool m_valid;

    bool contains(const std::string& key) const
    {
        return m_props.find(key) != m_props.end();
    }

public:
    property()
        : m_valid(true)
    { }

    explicit operator bool() const
    {
        return m_valid;
    }

    void loadfromfile(const std::string& filename)
    {
        std::ifstream is(filename);
        if (is.fail())
        {
            std::cerr << "Could not open file " << filename << std::endl;
            m_valid = false;
        }
        readfromstream(is);
    }

    void readfromstream(std::istream& is)
    {
        std::string line;
        while (getline(is, line))
        {
            if (line.length() > 0 && line[0] == '#')
            {
                continue;
            }
            size_t index = line.find("=");
            if (std::string::npos != index) // found
            {
                std::string key = line.substr(0, index);
                std::string value = line.substr(index+1, line.length());
                m_props.insert(ptype::value_type(key, value));
            }
        }
    }

    void storefromprops(std::string filename)
    {
        std::ofstream os(filename);
        if (os.fail())
        {
            std::cerr << "Could not open file " << filename << std::endl;
            m_valid = false;
        }
        writetostream(os);
    }

    void writetostream(std::ofstream& os)
    {
        for (auto it = m_props.begin(); it != m_props.end(); ++it)
        {
            os << it->first << "=" << it->second << std::endl;
        }
        os.close();
    }

    void check_key(const std::string& key) const
    {
        if (!contains(key))
        {
            std::cerr << "No such key: " << key << std::endl;
            std::abort();
        }
    }

    std::string get(const std::string& key)
    {
        check_key(key);
        return m_props[key];
    }

    void set(const std::string& key, const std::string& value)
    {
        m_props[key] = value;
    }
};

} // namespace prop

#endif // PROPERTIES_H