#include <string>

class Mascota
{
private:
    int hambre;
    std::string nombre;

public:
    Mascota(std::string nombre)
    {
        this->hambre = 0;
        this->nombre = nombre;
    }
    Mascota() {}
    void jugar()
    {
        this->hambre += 5;
    }
    void Comer(int comida)
    {
        this->hambre -= comida;
    }
    std::string Decirnombre()
    {
        std::cout << "Mi nombre es: " << this->nombre << std::endl;;
    }
};