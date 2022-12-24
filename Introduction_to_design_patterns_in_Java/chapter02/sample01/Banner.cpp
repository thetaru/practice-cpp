#include "Banner.hpp"

Banner::Banner(const std::string& string)
{
    m_string = string;
}

void Banner::showWithParen()
{
    std::cout << "(" << m_string << ")" << std::endl;
}

void Banner::showWithAster()
{
    std::cout << "*" << m_string << "*" << std::endl;
}