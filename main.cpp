// CMake apprentisage.cpp : définit le point d'entrée de l'application.
#include "test.h"
#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    json j;
    j["name"] = "Lucas";
    j["age"] = 20;

    std::cout << j.dump(4) << std::endl;
    return 0;
}
