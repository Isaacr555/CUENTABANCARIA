#include "CuentaBancaria.h"
#include <iostream>

// Constructor
CuentaBancaria::CuentaBancaria(const std::string& titular, double saldoInicial, double tasaInteresAnual) {
    this->titular = titular;
    this->saldo = saldoInicial;
    this->tasaInteres = tasaInteresAnual;
    std::cout << "Cuenta de " << titular << " creada con saldo inicial de " 
              << saldoInicial << " y tasa de interés de " << tasaInteresAnual << "%" << std::endl;
}

// Destructor
CuentaBancaria::~CuentaBancaria() {
    std::cout << "La cuenta de " << titular << " ha sido cerrada." << std::endl;
}

// Depositar dinero en la cuenta
void CuentaBancaria::depositar(double cantidad) {
    if (cantidad > 0) {
        saldo += cantidad;
        std::cout << "Se han depositado " << cantidad << ". Nuevo saldo: " << saldo << std::endl;
    } else {
        std::cout << "Cantidad a depositar debe ser positiva." << std::endl;
    }
}

// Retirar dinero de la cuenta
bool CuentaBancaria::retirar(double cantidad) {
    if (cantidad > 0 && cantidad <= saldo) {
        saldo -= cantidad;
        std::cout << "Se han retirado " << cantidad << ". Nuevo saldo: " << saldo << std::endl;
        return true;
    } else {
        std::cout << "Saldo insuficiente o cantidad inválida." << std::endl;
        return false;
    }
}

// Calcular el interés anual
double CuentaBancaria::calcularInteresAnual() const {
    return saldo * (tasaInteres / 100);
}

// Métodos get
std::string CuentaBancaria::getTitular() const {
    return titular;
}

double CuentaBancaria::getSaldo() const {
    return saldo;
}

double CuentaBancaria::getTasaInteres() const {
    return tasaInteres;
}

// Métodos set
void CuentaBancaria::setTitular(const std::string& titular) {
    this->titular = titular;
}

void CuentaBancaria::setTasaInteres(double tasaInteres) {
    if (tasaInteres >= 0) {
        this->tasaInteres = tasaInteres;
        std::cout << "Nueva tasa de interés establecida: " << tasaInteres << "%" << std::endl;
    } else {
        std::cout << "La tasa de interés no puede ser negativa." << std::endl;
    }
}
