#include <iostream>
// TarakanovNikita2004
// 54 61 72 61 6b 61 6e 6f 76 4e 69 6b 69 74 61 32 30 30 34 00 (windows-1251)
// 54 61 72 61 6b 61 6e 6f 76 4e 69 6b 69 74 61 32 30 30 34 00  (UTF-8)
//  54 00 61 00 72 00 61 00 6b 00 61 00 6e 00 6f 00 76 00 4e 00 69 00 6b 00 69 00 74 00 61 00 32 00 30 00 30 00 34 00 (UTF-16)
// ТаракановНикитаСергеевич2004
// d2 e0 f0 e0 ea e0 ed ee e2 cd e8 ea e8 f2 e0 d1 e5 f0 e3 e5 e5 e2 e8 f7 32 30 30 34 00 (windows-1251)
// d0a2 d0b0 d180 d0b0 d0ba d0b0 d0bd d0be d0b2 d09d d0b8 d0b0 d0ba d0b8 d182 d0b0 d0a1 d0b5 d180 d0b3 d0b5 d0b5 d0b2 d0b8 d187 32 30 30 34 00   (UTF-8)
// 22 04 30 04 40 04 30 04 3a 04 30 04 3d 04 3e 04 32 04 1d 04 38 04 3a 04 38 04 42 04 30 04 21 04 35 04 40 04 33 04 35 04 35 04 32 04 38 04 47 04 32 00 30 00 30 00 34 00 00 00  (UTF-16)
// Тараканов2004Nikita
// d2 e0 f0 e0 ea e0 ed ee e2 32 30 30 34 4e 69 6b 69 74 61 00 (windows-1251)
// d0a2 d0b0 d180 d0b0 d0ba d0b0 d0bd d0be d0b2 32 30 30 34 4e 69 6b 69 74 61 00 (UTF-8)
// 22 04 30 04 40 04 30 04 3a 04 30 04 3d 04 3e 04 32 04 32 00 30 00 30 00 34 00 4e 00 69 00 6b 00 69 00 74 00 61 00  (UTF-16)



int main()
{
    int number = 0x12345678;
    char hello[] = "Hello, ";
    char lfie[] = "TarakanovNikita2004";
    char rfie[] = "ТаракановНикитаСергеевич2004";
    char lr[] = "Тараканов2004Nikita";
    wchar_t Lfie[] = L"TarakanovNikita2004";        //L"..." - значит, что преобразует в UTF 16
    wchar_t Rfie[] = L"ТаракановНикитаСергеевич2004";
    wchar_t Lr[] = L"Тараканов2004Nikita";

    std::cout << hello << lfie << std::endl;
    return 0;
}

