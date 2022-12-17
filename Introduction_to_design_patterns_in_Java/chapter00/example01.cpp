// インターフェース
class Printable
{
public:
    virtual void print() = 0;
    virtual void newPage() = 0;
};

class PrintClass : public Printable
{
public:
    void print() override
    { }

    void newPage() override
    { }
};