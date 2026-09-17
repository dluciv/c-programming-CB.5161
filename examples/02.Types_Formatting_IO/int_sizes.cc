#include <iostream>
#include <cstdint>

#define psz(t) std::cout << "sizeof(" << #t << ")\t = " << sizeof(t) << " [bytes]" << std::endl

int main(){
    psz(int_fast8_t);
    psz(int_fast16_t);
    psz(int_fast32_t);
    psz(int_fast64_t);
    psz(int_least8_t);
    psz(int_least16_t);
    psz(int_least32_t);
    psz(int_least64_t);
    return 0;
}
