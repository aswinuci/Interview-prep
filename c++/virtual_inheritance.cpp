#include <iostream>

class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaks!" << std::endl;
    }
};

class Mammal : public Animal {
public:
    void speak() override {
        std::cout << "Mammal speaks!" << std::endl;
    }
};

class Bird :  public Animal {
public:
    void speak() override {
        std::cout << "Bird speaks!" << std::endl;
    }
};

class Platypus : public Mammal, public Bird {
public:
    void speak() override {
        std::cout << "Platypus speaks!" << std::endl;
    }
};

int main() {
    Platypus platypus;
    platypus.speak();

    return 0;
}