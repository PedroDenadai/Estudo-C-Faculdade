#include <stdio.h>

struct ponto {
    float x;
    float y;
};

int main() {
    struct ponto p1 = { 7.0, 10.0 };
    printf("Coordenadas do ponto: (%f, %f)\n", p1.x, p1.y);
    return 0;
}
