#include <iostream>
#include "CuentaBancaria.h"

int main() {
    // Crear una cuenta bancaria
    CuentaBancaria cuenta("Juan Perez", 5000.0, 5.0);

    // Mostrar saldo e interés anual estimado
    std::cout << "Saldo inicial: " << cuenta.getSaldo() << std::endl;
    std::cout << "Interes anual estimado: " << cuenta.calcularInteresAnual() << std::endl;

    // Realizar algunas operaciones
    cuenta.depositar(1000.0);  // Depositar dinero
    cuenta.retirar(500.0);     // Retirar dinero

    // Mostrar saldo final e interés anual
    std::cout << "Saldo final: " << cuenta.getSaldo() << std::endl;
    std::cout << "Interés anual estimado: " << cuenta.calcularInteresAnual() << std::endl;

    // Cambiar la tasa de interés
    cuenta.setTasaInteres(6.0);

    // Crear otra cuenta bancaria y modificar el titular
    CuentaBancaria cuenta2("Maria Lopez", 3000.0, 4.0);
    cuenta2.setTitular("Ana Rodriguez");

    return 0;
}

