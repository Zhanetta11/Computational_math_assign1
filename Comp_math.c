#include <stdio.h>

//E-Programme
int EpsilonProgramme_float() {
    int n = 0;
    float E = 1.0f;

    while (1.0f + E > 1.0f) {
        E = E / 10.0f;
        n = n + 1;
    }

    printf("Machine Epsilon:\nFloat: %d\n", n);
    return 0;
}

int EpsilonProgramme_double() {
    int n = 0;
    double E = 1.0;

    while (1.0 + E > 1.0) {
        E = E / 10.0;
        n = n + 1;
    }

    printf("Double %d\n", n);
    return 0;
}


//Z-Programme
int ZProgramme_float() {
    int n = 0;
    float z = 1.0f;

    while (2.0f * z > z) {
        z = z / 10.0f;
        n = n + 1;
    }

    printf("\nMachine Zero:\nFloat: %d\n", n);
    return 0;
}


int ZProgramme_double() {
    int n = 0;
    double z = 1.0;

    while (2.0 * z > z) {
        z = z / 10.0;
        n = n + 1;
    }

    printf("Double: %d\n", n);
    return 0;
}


//I-Programme
int IProgramme_float() {
    int n = 0;
    float I = 1.0f;

    while (I + 1.0f > I) {
        I = 10.0f * I;
        n = n + 1;
    }

    printf("\nMachine Infinity: \nFloat: %d\n", n);
    return 0;
}

int IProgramme_double() {
    int n = 0;
    double I = 1.0;

    while (I + 1.0 > I) {
        I = 10.0 * I;
        n = n + 1;
    }

    printf("Double: %d\n", n);
    return 0;
}


//I-Programme 2
int IProgramme2_float() {
    int n = 0;
    float I = 1.0f;

    while (2.0f * I > I) {
        I = 10.0f * I;
        n = n + 1;
    }

    printf("\nMachine Infinity 2:\nFloat: %d\n", n);
    return 0;
}

int IProgramme2_double() {
    int n = 0;
    double I = 1.0;

    while (2.0 * I > I){
        I = 10.0 * I;
        n = n + 1;
    }

    printf("Double: %d\n", n);
    return 0;
}


int main() {
    EpsilonProgramme_float();
    EpsilonProgramme_double();
    ZProgramme_float();
    ZProgramme_double();
    IProgramme_float();
    IProgramme_double();
    IProgramme2_float();
    IProgramme2_double();
    
    return 0;
}
