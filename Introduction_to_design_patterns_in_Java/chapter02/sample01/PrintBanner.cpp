#include "PrintBanner.hpp"

// 基底クラスのコンストラクタ呼び出し(子から親クラスの初期化)
PrintBanner::PrintBanner(const std::string& string)
    : Banner(string)
{ }

void PrintBanner::printWeak()
{
    showWithParen();
}

void PrintBanner::printStrong()
{
    showWithAster();
}