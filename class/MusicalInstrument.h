#ifndef MUSICALINSRTUMENT_H
#define MUSICALINSRTUMENT_H

#include <iostream>
#include <ostream>
#include <string>

class MusicalInstrument {
    protected:
    std::string name; //имя инструмента
    std::string material; //материал изготовления
    public:
    MusicalInstrument(const std::string &input_name, const std::string &input_material) {
        name = input_name;
        material = input_material;
    }
    virtual void display() const {
        std::cout << "MusicalInstrument [name: " << name << ", material: " << material << "]" << std::endl;
    }
    void setName(const std::string &input_name) {
        name = input_name;
    }
    void setMaterial(const std::string &input_material) {
        material = input_material;
    }
    virtual ~MusicalInstrument() = default;
};

#endif //MUSICALINSRTUMENT_H
