Compilar.

1. g++ -c datosUsuario.cpp
2. g++ -c lectura.cpp
3. g++ -c fortuna.cpp

g++ -o fortuna lectura.o datosUsuario.o fortuna.o

datosUsuario.cpp
  Almacena los datos del usuario en una estructura.
  Muestra el contenido de la estructura.
  
lectura.cpp
  Retorna el signo zodiacal, basado en el dia y mes de nacimiento del usuario.
  Tiempo de vida en horas y segundos, basado en la edad del usuario.
  
fortuna.cpp
  Es el main del programa.
