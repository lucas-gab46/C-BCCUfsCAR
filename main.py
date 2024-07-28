def main():
    # Autor : Lucas Gabriel De Camargo Santos
    # Data de Criação 10/07/2024
    # RA : 832792

    # Ler as Notas Das Provas 
    notaProva1 = float(input("Digite a nota da prova 1: "))
    notaProva2 = float(input("Digite a nota da prova 2: "))
    notaProva3 = float(input("Digite a nota da prova 3: "))

    # Ler as Notas dos Trabalhos usando um loop for
    notasTrabalhos = []
    for i in range(10):
        nota = float(input(f"Digite a nota do trabalho {i + 1}: "))
        notasTrabalhos.append(nota)

    # Calcular a média dos Trabalhos
    somaTrabalhos = sum(notasTrabalhos)
    mediaTrabalhos = somaTrabalhos / 10.0

    # Calcular Nota Média
    notaMedia = notaProva1 * 0.25 + notaProva2 * 0.3 + notaProva3 * 0.3 + mediaTrabalhos * 0.2

    # Mostrar Nota Final
    print(f"Nota media = {notaMedia:.2f}")

if __name__ == "__main__":
    main()
