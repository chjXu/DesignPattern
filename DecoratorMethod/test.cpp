#include "Decorator.hpp"
#include "t_Decorator.hpp"

int main()
{
// 加密前
FileStream* f_s = new FileStream();
std::string ori_stream = f_s->Read(1234567);
std::cout << ori_stream << std::endl;   // 1234567
char find_num = f_s->Seek(ori_stream, 2);
std::cout << find_num << std::endl; // 3

// 加密
CryptStream* cf_s = new CryptStream(f_s);
std::string cry_stream = cf_s->Read(1234567);
std::cout << cry_stream << std::endl;   // 1234567 * 2
find_num = cf_s->Seek(cry_stream, 2);
std::cout << find_num << std::endl; // 1
cf_s->Write(find_num);

    delete f_s;
    delete cf_s;

    // // test template
    // TStream<int>* stream = new TConcreteStream<int>("File");
    // TStream<int>* cryptStream = new TCryptStream<int>(stream);

    // stream->Read(0);
    // cryptStream->Read(0);

    // delete stream;
    // delete cryptStream;
    return 0;
}