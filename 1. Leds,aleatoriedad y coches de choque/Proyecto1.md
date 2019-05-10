# Proyecto 1. Encendiendo 3 LEDs de forma aleatoria.

A ver, para empezar como siempre se tiende a usar el Blink de Arduino, para probarlo todo, cosa que hice (y funcionó)
Luego me tocó ir a la breadboard y sacar las cosas que estaban incrustadas. En el preoceso, desgraciadamente, me cargué una patilla de un chip que
no sé cual es :/, pero bueno, en su caso iré a buscarlo por alguna tienda o por Internet.

*El circuito*

No era muy difícil, me basé en un ejemplo del guión de mi kit de **FreeNove** y simplemente le añadí un LED más, conectandolo de forma similar y usando el PIN
6 para que pueda programar su comportamiento. Aquí tenéis una imagen :

//Imagen

*El código*

Basado en lo mismo, puse en principio para que se fueran encendiendo de forma secuencial. Luego añadí la opción de encender las bombillas de dos en dos; y luego
todos los LEDs encendidos o apagados, habiendo 2 estados^3 LEDs = 8 opciones.
Tras ello, decidí hacer un switch para esos casos, coger una variable aleatoria y que se fueran encendiendo.
Con eso, tienes una minibola de discoteca que ilumina bastante y genera colores incluso violáceos (pero el verde no ilumina tanto así que no se mezclan más colores)

//Imagen


