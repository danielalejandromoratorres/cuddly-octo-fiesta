//Utiliza una matriz de enteros de 3X3, puedes inicializarla con 0 y representar los 'X' con 1 y los 'O' con 2. 

//Si es que el procesador va a competir contra un contraincante humano debes tener una función que valide, el tiro del jugador para intentar taparlo, eso se hace con MUCHOS if's, tienes que revisar coordenada por coordenada para saber donde tapas el juego del jugador, si es para 2 jugadores humanos te olvidas de esa validación. 

//Tienes que tener una función para imprimir el tablero y representarlo con X ó O. 

//El código sería lago así: 

int matriz[3][3]; 

while(1) 
{ 
...tiro(jugador); 

...if (ganador(jugador)) 
......break; 

...if(tiros == 9) 
......empate = 1; 

...imprime_tablero(); 

...tiros++; 
} 

if(empate) 
....Juego empatado 
else 
...el ganador es el jugador << jugador 

