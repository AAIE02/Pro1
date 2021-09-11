#include <iostream>
#include "Game.hh"

int main()
{


Game* game{new Game()};
game->Initialize();

delete game;

return EXIT_SUCCESS;
}

/*
Examen Parcial 1: 
Reglas: 
  *Se entrega el enlace de github.
  *Es individual :c
  *Envialo a mi correo o aqui en discord (preferiria me lo dejaran por aqui, me avisan a donode lo enviaron) antes de la terminación de la semana de examenes.

Actividad:
Con lo que has aprendido de programación de objetos y el uso de la librería gráfica SFML.

Utiliza el motor que has estado trabajando en clase para dibujar con rectángulos un personaje PIXEL ART DE TU PREFERENCIA.

Tendras que generas varias instancias de tu clase custom Rectangle para pintarlas en el método Draw de tu engine.

Tampoco elijan algo absurda mente complejo (bueno si me quieren impresionar y tener puntos extra lo pueden intentar).

Los proyectos que hemos armado hasta ahora me los dejan en github con sus ligas por favor.

Eso es todo.
*/