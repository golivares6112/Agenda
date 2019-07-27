#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

class Persona
{
private:
    int codigo;
    std::string nombre;
    int edad;
    std::string direccion;
public:
    Persona();
    Persona(int c, std::string nom, int ed, std::string dir);
    ~Persona();
    int getCodigo();
    const std::string getNombre();
    int getEdad();
    const std::string getDireccion();
    void setCodigo(int c);
    void setNombre(std::string n);
    void setEdad(int e);
    void setDireccion(std::string d);
};

#endif // PERSONA_H
