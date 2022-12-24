#ifndef PRINTBANNER_H
#define PRINTBANNER_H

#include "Banner.hpp"
#include "Print.hpp"

class PrintBanner : public Banner, public Print
{
public:
    explicit PrintBanner(const std::string& string);

    void printWeak() override;

    void printStrong() override;
};

#endif // PRINTBANNER_H