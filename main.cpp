#include <iostream>
#include <bitset>

char rom[256];



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

Register a;
Register x;
Register y;
bigRegister sp;
bigRegister pc;
Register sr;

void control() {
    char16_t address = (pc.getBig() << 8) | pc.getValue();
    
}

int main() {
    sp.setBig(1);
    
    
}
