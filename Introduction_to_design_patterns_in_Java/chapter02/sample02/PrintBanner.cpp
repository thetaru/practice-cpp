#include "PrintBanner.hpp"

PrintBanner::PrintBanner(const std::string& string)
    : m_banner(Banner(string))
{ }

void PrintBanner::printWeak()
{
    m_banner.showWithParen();
}

void PrintBanner::printStrong()
{
    m_banner.showWithAster();
}