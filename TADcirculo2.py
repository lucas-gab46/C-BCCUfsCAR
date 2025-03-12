
# Bibliotecas
import math 

# Constante PI
PI = 3.14

# Definição da classe Ponto
class Ponto:
    """
    Representa um ponto no plano 2D.
    """
    def __init__(self, x=0.0, y=0.0):
        self.x = x
        self.y = y

# Definição da classe Circulo
class Circulo:
    """
    Representa um círculo definido por seu centro e raio.
    """
    def __init__(self, centro=None, raio=0.0):
        self.centro = centro if centro else Ponto()
        self.raio = raio

# Função para ler os dados de um círculo do usuário
def leiaCirculo():
    """
    Sub-rotina: leiaCirculo
    Objetivo: Ler os dados de um círculo do usuário, incluindo as coordenadas do ponto central e o raio.
    Parâmetros:
    - Nenhum
    Valor de Retorno:
    - Retorna um objeto Circulo com dados lidos do usuário.
    """
    print("Digite as coordenadas do círculo:")
    x = float(input("Digite o valor da coordenada x: "))
    y = float(input("Digite o valor da coordenada y: "))
    raio = float(input("Digite o valor do raio do círculo: "))
    return Circulo(Ponto(x, y), raio)

# Função para escrever os dados de um círculo na tela
def escrevaCirculo(circulo):
    """
    Sub-rotina: escrevaCirculo
    Objetivo: Escrever os dados de um círculo na tela, incluindo as coordenadas do ponto central e o raio.
    Parâmetros:
    - circulo: Objeto Circulo cujos dados serão escritos (entrada de dados)
    Valor de Retorno:
    - Nenhum
    """
    print("Ponto:")
    print(f"Coordenada x = {circulo.centro.x:.2f}")
    print(f"Coordenada y = {circulo.centro.y:.2f}")
    print(f"Raio = {circulo.raio:.2f}")

# Função para calcular a área de um círculo
def areaCirculo(circulo):
    """
    Sub-rotina: areaCirculo
    Objetivo: Calcular a área do círculo.
    Parâmetros:
    - circulo: Objeto Circulo para o qual a área será calculada (entrada de dados)
    Valor de Retorno:
    - Retorna a área do círculo (número de ponto flutuante)
    """
    return PI * circulo.raio * circulo.raio

# Função para calcular o perímetro de um círculo
def perimetroCirculo(circulo):
    """
    Sub-rotina: perimetroCirculo
    Objetivo: Calcular o perímetro do círculo.
    Parâmetros:
    - circulo: Objeto Circulo para o qual o perímetro será calculado (entrada de dados)
    Valor de Retorno:
    - Retorna o perímetro do círculo (número de ponto flutuante)
    """
    return 2 * PI * circulo.raio

# Função para calcular a distância entre os centros de dois círculos
def distanciaCentroCirculos(circulo1, circulo2):
    """
    Sub-rotina: distanciaCentroCirculos
    Objetivo: Calcular a distância entre os centros de dois círculos.
    Parâmetros:
    - circulo1: Objeto Circulo representando o primeiro círculo (entrada de dados)
    - circulo2: Objeto Circulo representando o segundo círculo (entrada de dados)
    Valor de Retorno:
    - Retorna a distância entre os centros dos círculos (número de ponto flutuante)
    """
    dx = circulo1.centro.x - circulo2.centro.x
    dy = circulo1.centro.y - circulo2.centro.y
    return math.sqrt(dx * dx + dy * dy)

# Função para calcular a distância mínima entre dois círculos
def distanciaMinimaCirculos(circulo1, circulo2):
    """
    Sub-rotina: distanciaMinimaCirculos
    Objetivo: Calcular a distância mínima entre dois círculos, considerando a distância entre os centros e a soma dos raios.
    Parâmetros:
    - circulo1: Objeto Circulo representando o primeiro círculo (entrada de dados)
    - circulo2: Objeto Circulo representando o segundo círculo (entrada de dados)
    Valor de Retorno:
    - Retorna a distância mínima entre os círculos (número de ponto flutuante)
    """
    distanciaCentros = distanciaCentroCirculos(circulo1, circulo2)
    somaRaios = circulo1.raio + circulo2.raio
    return max(0, distanciaCentros - somaRaios)  # Retorna 0 se os círculos se sobrepuserem ou se tocarem

# Função principal
def main():
    """
    Função principal que executa o programa.
    """
    # Leitura e escrita dos dados do primeiro círculo
    print("Círculo 1")
    circulo1 = leiaCirculo()
    escrevaCirculo(circulo1)

    # Leitura e escrita dos dados do segundo círculo
    print("Círculo 2")
    circulo2 = leiaCirculo()
    escrevaCirculo(circulo2)

    # Cálculo e exibição da área do primeiro círculo
    area = areaCirculo(circulo1)
    print(f"Área do círculo 1 = {area:.2f}")

    # Cálculo e exibição da área do segundo círculo
    area = areaCirculo(circulo2)
    print(f"Área do círculo 2 = {area:.2f}")

    # Cálculo e exibição do perímetro do primeiro círculo
    perimetro = perimetroCirculo(circulo1)
    print(f"Perímetro do círculo 1 = {perimetro:.2f}")

    # Cálculo e exibição do perímetro do segundo círculo
    perimetro = perimetroCirculo(circulo2)
    print(f"Perímetro do círculo 2 = {perimetro:.2f}")

    # Cálculo e exibição da distância entre os centros dos círculos
    distancia = distanciaCentroCirculos(circulo1, circulo2)
    print(f"Distância entre os centros dos círculos = {distancia:.2f}")

    # Cálculo e exibição da distância mínima entre os círculos
    distanciaMinima = distanciaMinimaCirculos(circulo1, circulo2)
    print(f"Distância mínima entre os círculos = {distanciaMinima:.2f}")

# Execução da função principal
if __name__ == "__main__":
    main()
