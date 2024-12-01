#ifndef BRASSINSTRUMENT_H
#define BRASSINSTRUMENT_H

#include <utility>

#include "MusicalInstrument.h"

class BrassInstrument final : public MusicalInstrument {
protected:
    std::string brass_type;
public:
    BrassInstrument(const std::string &input_name, const std::string &input_material, const std::string &input_brass_type)
    : MusicalInstrument(input_name, input_material), brass_type(input_brass_type) {}
    void display() const override {
        std::cout << "StringInstrument [name: " << name << ", material: " << material
                << ", brass type: " << brass_type << "]" << std::endl;
    }
    ~BrassInstrument() override = default;
};

#endif //BRASSINSTRUMENT_H
