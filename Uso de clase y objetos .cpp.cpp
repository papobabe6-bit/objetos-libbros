#include <iostream>
#include <string>

using namespace std;

class Libro
{
private:
    string titulo;
    string autor;
    int anioPublicacion;
    int edicion;
    int cantidadPaginas;

public:
    void ingresarDatos()
    {
        cout << "Titulo: ";
        getline(cin, titulo);

        cout << "Autor: ";
        getline(cin, autor);

        cout << "Ano de publicacion: ";
        cin >> anioPublicacion;

        cout << "Edicion: ";
        cin >> edicion;

        cout << "Cantidad de páginas: ";
        cin >> cantidadPaginas;
        cin.ignore();
    }

    void mostrarInformacion()
    {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Ano de publicacion: " << anioPublicacion << endl;
        cout << "Edicion: " << edicion << endl;
        cout << "Cantidad de paginas: " << cantidadPaginas << endl;
    }
};

int main()
{
    Libro libros[5];

    for (int i = 0; i < 5; i++)
    {
        libros[i].ingresarDatos();
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        libros[i].mostrarInformacion();
        cout << endl;
    }

    return 0;
}