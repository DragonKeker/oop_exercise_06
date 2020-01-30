#ifndef OOP_LAB5_HEXAGON_H
#define OOP_LAB5_HEXAGON_H

#include "vertex.h"

template <class T>
class Hexagon {
public:
    vertex<T> dots[6];

    explicit Hexagon<T>(std::istream& is) {
        for (auto& dot : dots) {
            is >> dot;
        }
    }

    Hexagon<T>() = default;

   
    double Area() {
        return (0.5 * abs(dots[0].x * dots[1].y + dots[1].x * dots[2].y + dots[2].x * dots[3].y + dots[3].x * dots[4].y + dots[4].x * dots[5].y + dots[5].x * dots[0].y
            - dots[1].x * dots[0].y - dots[2].x * dots[1].y - dots[3].x * dots[2].y - dots[4].x * dots[3].y - dots[5].x * dots[4].y - dots[0].x * dots[5].y));
    }

    void Printout(std::ostream& os) {
        for (int i = 0; i < 6; ++i) {
            os << this->dots[i];
            if (i != 5) {
                os << ", ";
            }
        }
        os << std::endl;
    }

    void operator<< (std::ostream& os) {
        for (int i = 0; i < 6; ++i) {
            os << this->dots[i];
            if (i != 5) {
                os << ", ";
            }
        }
    }
};

#endif //OOP_LAB5_RECTANGLE_H
