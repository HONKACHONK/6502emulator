#include <iostream>
#include <bitset>

class Register {
public:
    void setValue(char value) {
        this->value = value;
    }

    void setBit(int bit) {
        
    }

    char getValue() {
        return value;
    }
private:
    char value;
};

class bigRegister : public Register {
public:
    void setBig(char bigValue) {
        this->bigValue = bigValue;
    }

    char getBig() {
        return bigValue;
    }
private:
    char bigValue;
};



void control(Register& a, Register& x, Register& y, bigRegister& sp, bigRegister& pc, Register& sr, char* romptr) {
    char16_t address = (pc.getBig() << 8) | pc.getValue();
    
}

int main() {
    char rom[65536];
    char* romptr = &rom[0];
    Register a, x, y, sr;
    bigRegister sp, pc;

    sp.setBig(1);
    
    control(a, x, y, sp, pc, sr, romptr);

}
