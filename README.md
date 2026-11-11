# Red de Distribución de Paquetería

Red de sucursales de una empresa de paquetería modelada con un **grafo dirigido** en C++, implementado con **listas enlazadas** (vértices y aristas) y cálculo de la **ruta más corta mediante el algoritmo de Dijkstra**.

Proyecto académico de la materia de Estructuras de Datos.

## Características

- Grafo dirigido con 8 sucursales y 32 rutas precargadas.
- Insertar y eliminar sucursales.
- Insertar y eliminar rutas entre sucursales.
- Listado completo de sucursales y rutas.
- Cálculo de la ruta más corta entre dos sucursales (Dijkstra).
- Menú por sucursal para ver sus datos y distribuir mercancía a otra sucursal.
- Compatible con **Windows** y **Linux** (pausa y limpieza de pantalla portables).
- Sin fugas de memoria (verificado con AddressSanitizer).

## Estructura del proyecto

```
.
├── includes/
│   ├── Nodo.h          # NodoVertice y NodoArista
│   ├── Sucursal.h      # Datos de cada sucursal
│   ├── grafo.h         # Clase Grafo
│   ├── Funciones.h     # crear_grafo() y Menu()
│   └── Utiles.h        # pausar() y limpiarPantalla() portables
├── src/
│   ├── Nodo.cpp
│   ├── Sucursal.cpp
│   ├── grafo.cpp
│   ├── Funciones.cpp
│   └── main.cpp
└── Makefile
```

## Compilación y ejecución

### Linux / macOS

```bash
make
./grafo
```

Para limpiar los archivos generados:

```bash
make clean
```

### Windows (MinGW / g++)

```bash
g++ -std=c++17 -Iincludes src/*.cpp -o grafo.exe
grafo.exe
```

## Uso

Al iniciar aparece el menú principal:

```
1. Insertar Sucursal
2. Insertar Ruta
3. Eliminar Sucursal
4. Eliminar Ruta
5. Imprimir Listado Sucursales/Rutas
6. Encontrar ruta más óptima
7. Menú de sucursales
8. Salir del programa
```

Ejemplo para obtener la ruta más corta:

1. Elegir `6`.
2. Origen: `Sur`.
3. Destino: `Foranea2`.

Resultado:

```
Ruta mas corta de Sur a Foranea2:
Sur -> Centro2 -> Foranea2
Distancia total: 31 km
```

## Tecnologías

- C++17
- g++
- Make
- AddressSanitizer / UBSan (pruebas de memoria)

## Autor

**Gustavo Yael** — [@yelos21](https://github.com/yelos21)

## Licencia

Este proyecto está bajo la licencia MIT. Consulta el archivo [LICENSE](LICENSE) para más detalles.
