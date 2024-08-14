#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
    virtual void calculateArea()=0; // Pure virtual function
    //virtual void calculateArea() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }

    void calculateArea() override {
        std::cout << "Calculating area of a circle." << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a rectangle." << std::endl;
    }

    void calculateArea() override {
        std::cout << "Calculating area of a rectangle." << std::endl;
    }
};

int main() {
    
    //Shape* shape0 = new Shape();
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    // shape0->draw();
    // shape0->calculateArea();

    shape1->draw();
    shape1->calculateArea();

    shape2->draw();
    shape2->calculateArea();

    delete shape1;
    delete shape2;

    return 0;
}