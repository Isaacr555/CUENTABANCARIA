#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <string>

class CuentaBancaria {
private:
    std::string titular;
    double saldo;
    double tasaInteres;

public:
    // Constructor
    CuentaBancaria(const std::string& titular, double saldoInicial, double tasaInteresAnual);

    // Destructor
    ~CuentaBancaria();

    // Métodos públicos
    void depositar(double cantidad);             // Agrega dinero a la cuenta
    bool retirar(double cantidad);               // Retira dinero si hay fondos suficientes
    double calcularInteresAnual() const;         // Devuelve el interés anual estimado

    // Métodos get
    std::string getTitular() const;
    double getSaldo() const;
    double getTasaInteres() const;

    // Métodos set
    void setTitular(const std::string& titular);
    void setTasaInteres(double tasaInteres);
};

#endif

