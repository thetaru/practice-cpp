#include "PrintBanner.hpp"

int main()
{
    PrintBanner p = PrintBanner("Hello");
    p.printWeak();
    p.printStrong();
}