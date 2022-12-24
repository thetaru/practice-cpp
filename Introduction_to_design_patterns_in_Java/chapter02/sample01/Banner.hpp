#ifndef BANNER_H
#define BANNER_H

#include <string>
#include <iostream>

class Banner
{
public:
    explicit Banner(const std::string& string);

    void showWithParen();

    void showWithAster();

private:
    std::string m_string;
};

#endif // BANNER_H