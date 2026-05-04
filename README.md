# Deteccao-de-obstrucao
A impressora DTG contém uma esteira para realizar o processo de estamparia em tecidos. Ao finalizar a estampa em uma camiseta, por exemplo, a peça é movida para frente a fim de ser retirada da máquina. Neste momento, não pode haver obstrução no caminho: sejam objetos ou até mesmo as mãos ou braços do operador.

problema a ser solucionado

1. Sensores de detecção de obstrução


A forma mais direta é instalar sensores no caminho da esteira:

Sensores fotoelétricos (barreira de luz)
Criam um feixe invisível; se algo interromper, o sistema detecta imediatamente.
→ Ideal para detectar mãos, braços ou objetos.
Sensores ultrassônicos
Detectam presença independente de cor ou transparência do objeto.
Cortinas de luz (light curtain)
Mais robustas — formam uma “parede” de segurança. Se o operador colocar a mão, a máquina para automaticamente.


descrição da solução do problema:

instalação de sensores fotoeletronicos para identificação de presença para o correto funcionamento da maquina

lista de componentes utilizados
barreira de luz(sensor fotoeletronico)
sensor ultrasonico
cortina de luz(segurança da maquina, ao operador)  

fluxo logico

1 parte ###  == 
as forma mais direta é instalar sensores no caminho da esteira, 
sensor fotoletronico barreira de luz para interromper criando um sistema que detecta imediatamente mãos, braços ou objetos.
   //  após isto //
   instalação de barreiras mecanicas nas laterais da esteira e definir uma área segura de retirada de peças evitando acesso direto ao trajeto em movimento.
   // em seguida //
   instalar luzes indicadoras(LEDS RGBS) ao longo da máquina com avisos claros, com temporizador antes de cada movimentação ( com delay de segurança)

   Fluxograma mais resumido seria uma configuração comum e eficiente, que seria cortina de luz na saída da  esteira  CLP com lógica de parada segura, alarme sonoro visual, botão de reset/ manual após obstrução. Simples e prático para fácil uso.


   
