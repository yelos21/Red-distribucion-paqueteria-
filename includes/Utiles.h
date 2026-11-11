#ifndef UTILES_H
#define UTILES_H

#include <iostream>
#include <cstdio>
#include <limits>

// Funciones auxiliares para que el programa funcione igual en Windows y Linux.
// En Windows se usan los comandos clasicos (cls / pause); en Linux se emulan.

inline void limpiarPantalla()
{
#ifdef _WIN32
    std::system("cls");
#else
    std::cout << "\033[2J\033[H" << std::flush;
#endif
}

inline void pausar()
{
#ifdef _WIN32
    std::system("pause");
#else
    std::cout << "Presione Enter para continuar..." << std::flush;

    // Se lee directamente de la terminal para no consumir el buffer de cin.
    FILE* tty = std::fopen("/dev/tty", "r");
    if (tty != nullptr)
    {
        int c;
        while ((c = std::fgetc(tty)) != '\n' && c != EOF)
        {
        }
        std::fclose(tty);
    }
#endif
}

#endif // UTILES_H
