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
    void depositar(double cantidad);
    bool retirar(double cantidad);
    double calcularInteresAnual() const;

    // Métodos get
    std::string getTitular() const;
    double getSaldo() const;
    double getTasaInteres() const;

    // Métodos set
    void setTitular(const std::string& titular);
    void setTasaInteres(double tasaInteres);
};

#endif
