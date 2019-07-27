#include "persona.h"

Persona::Persona()
{

}

Persona::Persona(int c, std::string nom, int ed, std::string dir)
{
    this->codigo    = c;
    this->nombre    = nom;
    this->edad      = ed;
    this->direccion = dir;
}

Persona::~Persona()
{
    std::cout<<"Objeto Destruido"<<std::endl;
}

int Persona::getCodigo()
{
    return this->codigo;
}

const std::string Persona::getNombre()
{
    return this->nombre;
}

int Persona::getEdad()
{
    return this->edad;
}

const std::string Persona::getDireccion()
{
    return this->direccion;
}

void Persona::setCodigo(int c)
{
    this->codigo = c;
}

void Persona::setNombre(std::string n)
{
    this->nombre = n;
}

void Persona::setEdad(int e)
{
    this->edad = e;
}

void Persona::setDireccion(std::string d)
{
    this->direccion = d;
}
