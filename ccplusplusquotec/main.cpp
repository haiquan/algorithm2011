#include "function.h"

extern "C"
{
    void hello();
};

int main()
{
    hello();
    return 0;
}