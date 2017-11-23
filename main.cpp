#include <iostream>

using namespace std;
//Sebastian Guardo Lugo

struct Estudiante {
    string nombre;
    double calif_calculo[3];
    double calif_algoritmo[3];
    double calif_comunicacion[3];
    double calif_algebra[3];
    double calif_introduccion[3];
    double definitiva[5];
};

const int cantidad = 1;
Estudiante est[cantidad];

void LlenarDatos() {
    double acum_comunicacion = 0;
    double acum_calculo = 0;
    double acum_algoritmo = 0;
    double acum_algebra = 0;
    double acum_introduccion = 0;

    double def_comunicacion = 0;
    double def_calculo = 0;
    double def_algoritmo = 0;
    double def_algebra = 0;
    double def_introduccion = 0;

    for (int i = 0; i < cantidad; ++i) {
        cout << "Digite su nombre" << endl;
        cin >> est[i].nombre;
        cout << "Digite sus calificaciones de algoritmo" << endl;
        for (int j = 0; j < 3; ++j) {
            cout << "Nota " << j << endl;
            cin >> est[i].calif_algoritmo[j];
            acum_algoritmo = acum_algoritmo + est[i].calif_algoritmo[j];
        }
        cout << "Digite sus calificaciones de calculo" << endl;
        for (int j = 0; j < 3; ++j) {
            cout << "Nota " << j << endl;
            cin >> est[i].calif_calculo[j];
            acum_calculo = acum_calculo + est[i].calif_calculo[j];
        }
        cout << "Digite sus calificaciones de algebra" << endl;
        for (int j = 0; j < 3; ++j) {
            cout << "Nota " << j << endl;
            cin >> est[i].calif_algebra[j];
            acum_algebra = acum_algebra + est[i].calif_algebra[j];
        }
        cout << "Digite sus calificaciones de comunicacion" << endl;
        for (int j = 0; j < 3; ++j) {
            cout << "Nota " << j << endl;
            cin >> est[i].calif_comunicacion[j];
            acum_comunicacion = acum_comunicacion + est[i].calif_comunicacion[j];
        }
        cout << "Digite sus calificaciones de introduccion" << endl;
        for (int j = 0; j < 3; ++j) {
            cout << "Nota " << j << endl;
            cin >> est[i].calif_introduccion[j];
            acum_introduccion = acum_introduccion + est[i].calif_introduccion[j];
        }
        def_algebra = acum_algebra / 3;
        def_calculo = acum_calculo / 3;
        def_comunicacion = acum_comunicacion / 3;
        def_introduccion = acum_introduccion / 3;
        def_algoritmo = acum_algoritmo / 3;

        est[i].definitiva[0] = def_algoritmo;
        est[i].definitiva[1] = def_calculo;
        est[i].definitiva[2] = def_algebra;
        est[i].definitiva[3] = def_comunicacion;
        est[i].definitiva[4] = def_introduccion;
    }


};

void PromAsignatura() {
    double prom_calculo = 0;
    double prom_algoritmo = 0;
    double prom_comunicacion = 0;
    double prom_algebra = 0;
    double prom_introduccion = 0;

    double acum_calculo = 0;
    double acum_algoritmo = 0;
    double acum_comunicacion = 0;
    double acum_algebra = 0;
    double acum_introduccion = 0;


    for (int i = 0; i < cantidad; ++i) {
        for (int j = 0; j < 3; ++j) {
            acum_algoritmo = acum_algoritmo + est[i].calif_algoritmo[j];
            acum_calculo = acum_calculo + est[i].calif_calculo[j];
            acum_introduccion = acum_introduccion + est[i].calif_introduccion[j];
            acum_algebra = acum_algebra + est[i].calif_algebra[j];
            acum_comunicacion = acum_comunicacion + est[i].calif_comunicacion[j];
        }
    }

    prom_calculo = acum_calculo / 3;
    prom_algoritmo = acum_algoritmo / 3;
    prom_comunicacion = acum_comunicacion / 3;
    prom_algebra = acum_algebra / 3;
    prom_introduccion = acum_introduccion / 3;

    cout << "El promedio de todos los estudiantes en Caculo es de: " << prom_calculo;
    cout << "El promedio de todos los estudiantes en Algoritmo es de: " << prom_algoritmo;
    cout << "El promedio de todos los estudiantes en Comunicacion es de: " << prom_comunicacion;
    cout << "El promedio de todos los estudiantes en Introduccion es de: " << prom_introduccion;
    cout << "El promedio de todos los estudiantes en Algebra es de: " << prom_algebra;
}

void GanadosPerdidosPorMateria() {

    double cont_gan_algoritmo = 0;
    double cont_gan_algebra = 0;
    double cont_gan_introduccion = 0;
    double cont_gan_comunicacion = 0;
    double cont_gan_calculo = 0;

    double cont_per_algoritmo = 0;
    double cont_per_algebra = 0;
    double cont_per_introduccion = 0;
    double cont_per_comunicacion = 0;
    double cont_per_calculo = 0;


    for (int i = 0; i < cantidad; ++i) {
        if (est[i].definitiva[0] < 3) {
            cont_gan_algoritmo++;
        } else {
            cont_per_algoritmo++;
        }
        if (est[i].definitiva[1] < 3) {
            cont_gan_calculo++;
        } else {
            cont_per_calculo++;
        }
        if (est[i].definitiva[2] < 3) {
            cont_gan_algebra++;
        } else {
            cont_per_algebra++;
        }
        if (est[i].definitiva[3] < 3) {
            cont_gan_comunicacion++;
        } else {
            cont_per_comunicacion++;
        }
        if (est[i].definitiva[4] < 3) {
            cont_gan_introduccion++;
        } else {
            cont_per_introduccion++;
        }

    }
    cout << "La cantidad de estudiantes que ganaron algoritmos fue: " << cont_gan_algoritmo << endl;
    cout << "La cantidad de estudiantes que perdieron algoritmos fue: " << cont_per_algoritmo << endl;

    cout << "La cantidad de estudiantes que ganaron calculo fue: " << cont_gan_calculo << endl;
    cout << "La cantidad de estudiantes que perdieron calculo fue: " << cont_per_calculo << endl;

    cout << "La cantidad de estudiantes que ganaron algebra fue: " << cont_gan_algebra << endl;
    cout << "La cantidad de estudiantes que perdieron algebra fue: " << cont_per_algebra << endl;

    cout << "La cantidad de estudiantes que ganaron comunicacion fue: " << cont_gan_comunicacion << endl;
    cout << "La cantidad de estudiantes que perdieron comunicacion fue: " << cont_per_comunicacion << endl;

    cout << "La cantidad de estudiantes que ganaron introduccion fue: " << cont_gan_introduccion << endl;
    cout << "La cantidad de estudiantes que perdieron introduccion fue: " << cont_per_introduccion << endl;

}

void MaximaYMinimaNota() {
    double max_nota = 0;
    double min_nota = 0;
    double aux_menor = est[0].definitiva[0];
    double aux_mayor = est[0].definitiva[0];

    for (int i = 0; i < cantidad; ++i) {
        for (int j = 0; j < 5; ++j) {

            if (aux_mayor < est[i].definitiva[j]) {
                aux_mayor = est[i].definitiva[j];
                max_nota = aux_mayor;
            } else {
                aux_menor = est[i].definitiva[j];
                min_nota = aux_menor;
            }
        }
        cout << "La nota mayor del estudiante " << est[i].nombre << " fue de " << max_nota;
        cout << "La nota menor del estudiante " << est[i].nombre << " fue de " << min_nota;

    }
}

void MayorYMenorPorAsignatura() {

    string nombre_mayor_est_algoritmo;
    string nombre_menor_est_algoritmo;

    string nombre_mayor_est_calculo;
    string nombre_menor_est_calculo;

    string nombre_mayor_est_algebra;
    string nombre_menor_est_algebra;

    string nombre_mayor_est_comunicacion;
    string nombre_menor_est_comunicacion;

    string nombre_mayor_est_introduccion;
    string nombre_menor_est_introduccion;

    double max_nota_algoritmo = 0;
    double min_nota_algoritmo = 0;

    double max_nota_calculo = 0;
    double min_nota_calculo = 0;

    double max_nota_algebra = 0;
    double min_nota_algebra = 0;

    double max_nota_comunicacion = 0;
    double min_nota_comunicacion = 0;

    double max_nota_introduccion = 0;
    double min_nota_introduccion = 0;

    double aux_menor_algoritmo = est[0].definitiva[0];
    double aux_mayor_algoritmo = est[0].definitiva[0];

    double aux_menor_calculo = est[0].definitiva[1];
    double aux_mayor_calculo = est[0].definitiva[1];

    double aux_menor_algebra = est[0].definitiva[2];
    double aux_mayor_algebra = est[0].definitiva[2];

    double aux_menor_comunicacion = est[0].definitiva[3];
    double aux_mayor_comunicacion = est[0].definitiva[3];

    double aux_menor_introduccion = est[0].definitiva[4];
    double aux_mayor_introduccion = est[0].definitiva[4];


    for (int i = 0; i < cantidad; ++i) {
        if (aux_mayor_algoritmo < est[i].definitiva[0]) {
            aux_mayor_algoritmo = est[i].definitiva[0];
            max_nota_algoritmo = aux_mayor_algoritmo;
            nombre_mayor_est_algoritmo = est[i].nombre;
        } else {
            aux_menor_algoritmo = est[i].definitiva[0];
            min_nota_algoritmo = aux_menor_algoritmo;
            nombre_menor_est_algoritmo = est[i].nombre;
        }

        if (aux_mayor_calculo < est[i].definitiva[1]) {
            aux_menor_calculo = est[i].definitiva[1];
            max_nota_calculo = aux_menor_calculo;
            nombre_mayor_est_calculo = est[i].nombre;
        } else {
            aux_menor_calculo = est[i].definitiva[1];
            min_nota_calculo = aux_menor_calculo;
            nombre_menor_est_calculo = est[i].nombre;
        }

        if (aux_mayor_algebra < est[i].definitiva[2]) {
            aux_menor_algebra = est[i].definitiva[2];
            max_nota_algebra = aux_menor_algebra;
            nombre_mayor_est_algebra = est[i].nombre;
        } else {
            aux_menor_algebra = est[i].definitiva[2];
            min_nota_algebra = aux_menor_algebra;
            nombre_menor_est_algebra = est[i].nombre;
        }

        if (aux_mayor_comunicacion < est[i].definitiva[3]) {
            aux_menor_comunicacion = est[i].definitiva[3];
            min_nota_comunicacion = aux_menor_comunicacion;
            nombre_mayor_est_comunicacion = est[i].nombre;
        } else {
            aux_menor_comunicacion = est[i].definitiva[3];
            min_nota_comunicacion = aux_menor_comunicacion;
            nombre_menor_est_comunicacion = est[i].nombre;
        }

        if (aux_mayor_introduccion < est[i].definitiva[4]) {
            aux_menor_introduccion = est[i].definitiva[4];
            min_nota_introduccion = aux_menor_introduccion;
            nombre_mayor_est_introduccion = est[i].nombre;
        } else {
            aux_menor_introduccion = est[i].definitiva[4];
            min_nota_introduccion = aux_menor_introduccion;
            nombre_menor_est_introduccion = est[i].nombre;
        }
    }
    cout << "El estudiante que saco la mayor nota en Algoritmo fue " << nombre_mayor_est_algoritmo<<" con una nota de "<<max_nota_algoritmo<<endl;
    cout << "El estudiante que saco la menor nota en Algoritmo fue " << nombre_menor_est_algoritmo<<" con una nota de "<<min_nota_algoritmo<<endl;

    cout << "El estudiante que saco la mayor nota en Calculo fue " << nombre_mayor_est_calculo<<" con una nota de "<<max_nota_calculo<<endl;
    cout << "El estudiante que saco la menor nota en Calculo fue " << nombre_menor_est_calculo<<" con una nota de "<<min_nota_calculo<<endl;

    cout << "El estudiante que saco la mayor nota en Algebra fue " << nombre_mayor_est_algebra<<" con una nota de "<<max_nota_algebra<<endl;
    cout << "El estudiante que saco la menor nota en Algebra fue " << nombre_menor_est_algebra<<" con una nota de "<<min_nota_algebra<<endl;

    cout << "El estudiante que saco la mayor nota en Comunicacion fue " << nombre_mayor_est_comunicacion<<" con una nota de "<<max_nota_comunicacion<<endl;
    cout << "El estudiante que saco la menor nota en Comunicacion fue " << nombre_menor_est_comunicacion<<" con una nota de "<<min_nota_comunicacion<<endl;

    cout << "El estudiante que saco la mayor nota en Introduccion fue " << nombre_mayor_est_introduccion<<" con una nota de "<<max_nota_introduccion<<endl;
    cout << "El estudiante que saco la menor nota en Introduccion fue " << nombre_menor_est_introduccion<<" con una nota de "<<min_nota_introduccion<<endl;

}

int main() {
    LlenarDatos();
    PromAsignatura();
    GanadosPerdidosPorMateria();
    MaximaYMinimaNota();
    MayorYMenorPorAsignatura();
    return 0;
}