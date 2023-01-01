#ifndef PRINTBANNER_H
#define PRINTBANNER_H

#include "Banner.hpp"
#include "Print.hpp"

class PrintBanner : public Print
{
private:
    Banner m_banner;

public:
    PrintBanner(const std::string& string);

    void printWeak() override;

    void printStrong() override;
};

#endif // PRINTBANNER_H