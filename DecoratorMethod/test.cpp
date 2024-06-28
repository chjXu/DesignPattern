#include "Decorator.hpp"

int main()
{
    FileStream* f_s = new FileStream();
    CryptStream* cf_s = new CryptStream(f_s);

    f_s->Read(0);
    cf_s->Read(0);
    return 0;
}