#ifndef STRINGINSTRUMENT_H
#define STRINGINSTRUMENT_H

#include "MusicalInstrument.h"

class StringInstrument final : public MusicalInstrument {
    protected:
    int strings_amount = 0;
    public:
    StringInstrument(const std::string &input_name, const std::string &input_material, const int input_strings_amount)
    : MusicalInstrument(input_name, input_material), strings_amount(input_strings_amount) {}
    void display() const override {
        std::cout << "StringInstrument [name: " << name << ", material: " << material
        << ", amount of strings: " << strings_amount << "]" << std::endl;
    }
    ~StringInstrument() override = default;
};

#endif //STRINGINSTRUMENT_H
