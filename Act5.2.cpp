// =========================================================
// File: Act5.2.cpp
// Author: Iram Kim Pichardo - A01710231
// Date: 24/11/2023
// =========================================================

#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <list>
#include <set>

using namespace std;

// Estructura para almacenar el tiempo y el número de problema
struct Problema {
    int numero_problema;
    int tiempo;
    char letra;
};

// Tabla hash para almacenar el estudiante, problema y tiempo
std::map<int, std::map<int, std::list<Problema>>> tabla_hash;

void agregar_entrada() {
    int numero_estudiante, numero_problema, tiempo;
    char letra;
    std::string linea;

    // Si la línea está vacía, significa que el usuario presiono Enter y termina de pedir inputs
    while (std::getline(std::cin, linea)) {
        if (linea.empty()) {
            break;
        }

        std::istringstream iss(linea);

        // Leer los valores de la línea
        iss >> numero_estudiante >> numero_problema >> tiempo >> letra;

        // Agregar la entrada a la tabla hash
        tabla_hash[numero_estudiante][numero_problema].push_back({numero_problema, tiempo, letra});
    }
}

// Funcion para imprimir los resultados
void imprimir_resultados(std::map<int, std::map<int, std::list<Problema>>> tabla_hash) {
    std::vector<std::tuple<int, int, int>> resultados;

    for (auto& estudiante : tabla_hash) {
        int problemas_resueltos = 0;
        int total_tiempo = 0;
        // Set para almacenar los problemas resueltos y no sumar el tiempo de los problemas posteriores.
        std::set<int> problemas_resueltos_set;
        for (auto& problema : estudiante.second) {
            int tiempo_fallido = 0;
            //Condiciones de letras para problemas resueltos.
            for (auto& intento : problema.second) {
                if (intento.letra == 'C') {
                    problemas_resueltos++;
                    total_tiempo += intento.tiempo + tiempo_fallido;
                    problemas_resueltos_set.insert(intento.numero_problema);
                    break;
                }
                if (intento.letra == 'I' && problemas_resueltos_set.find(intento.numero_problema) == problemas_resueltos_set.end()) {
                    tiempo_fallido += 20;
                }
            }
        }
        resultados.push_back(std::make_tuple(estudiante.first, problemas_resueltos, total_tiempo));
    }
    // Ordenar los outputs del programa en orden descendente de problemas resueltos, ascendente de tiempo y ascendente de numero de estudiante.
    std::sort(resultados.begin(), resultados.end(), [](const std::tuple<int, int, int>& a, const std::tuple<int, int, int>& b) {
        if (std::get<1>(a) != std::get<1>(b)) {
            return std::get<1>(a) > std::get<1>(b);
        }
        if (std::get<2>(a) != std::get<2>(b)) {
            return std::get<2>(a) < std::get<2>(b);
        }
        return std::get<0>(a) < std::get<0>(b);
    });

    for (const auto& resultado : resultados) {
        std::cout << std::get<0>(resultado) << " " << std::get<1>(resultado) << " " << std::get<2>(resultado) << std::endl;
    }
}

int main() {
    agregar_entrada();
    imprimir_resultados(tabla_hash);
    return 0;
}


//Complejidad:(O(n)) en el mejor de los casos si el estudiante intenta resolver un problema y lo resuelve a la primera.
//En el peor caso se llevaria hasta un O(n log n) debido al sort, si el estudiante intenta resolver todos los problemas y no los resuelve.