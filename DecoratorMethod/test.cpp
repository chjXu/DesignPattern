#include "Decorator.hpp"
#include "t_Decorator.hpp"

int main()
{
    // FileStream* f_s = new FileStream();
    // CryptStream* cf_s = new CryptStream(f_s);

    // f_s->Read(0);
    // cf_s->Read(0);

    // test template
    TStream<int>* stream = new TConcreteStream<int>("File");
    TStream<int>* cryptStream = new TCryptStream<int>(stream);

    stream->Read(0);
    cryptStream->Read(0);

    delete stream;
    delete cryptStream;
    return 0;
}