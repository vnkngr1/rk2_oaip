#include "class/MusicalInstrument.h"
#include "class/StringInstrument.h"
#include "class/BrassInstrument.h"

#include <vector>

void change(MusicalInstrument& instrument, std::string input_name, std::string input_material) {
    instrument.setMaterial(input_material);
    instrument.setName(input_name);
}

int main() {
    MusicalInstrument drums("Drums", "Wood");
    StringInstrument bass("Bass", "Wood", 4);
    BrassInstrument sax("Saxophone tenor", "Brass", "High-Zinc Beta Brass");
    std::vector<MusicalInstrument*> instruments;
    instruments.push_back(&drums);
    instruments.push_back(&bass);
    instruments.push_back(&sax);
    for (auto instrument : instruments) {
        instrument->display();
    }
    change(bass, "Acoustic Bass", "Plastic");
    change(sax, "Saxophone soprano", "Brass");
    for (auto instrument : instruments) {
        instrument->display();
    }
}
