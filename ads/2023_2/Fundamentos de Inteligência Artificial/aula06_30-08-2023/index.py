import numpy as np

def ativacao(x):
    return 1 if x >= 0 else 0

dados_entrada = np.array([
    [0, 0],  # Pelé
    [0, 1],  # Zico
    [1, 0],  # Senna
    [1, 1]   # Piquet
])

# Usar valores correspondentes às categorias
saida_esperada = np.array([
    0,  # Futebol (Pelé)
    0,  # Futebol (zico)
    1,  # Automobilismo (Senna)
    1   # Automobilismo (Piquet)
])

pesos = np.random.rand(2)
vies = np.random.rand()
taxa_aprendizado = 0.1

for epoca in range(100):
    for i in range(dados_entrada.shape[0]):
        entrada = dados_entrada[i]
        saida_esperada_atual = saida_esperada[i]

        soma = np.dot(entrada, pesos) + vies
        saida_prevista = ativacao(soma)

        erro = saida_esperada_atual - saida_prevista
        pesos += taxa_aprendizado * erro * entrada
        vies += taxa_aprendizado * erro

for i in range(dados_entrada.shape[0]):
    entrada = dados_entrada[i]
    soma = np.dot(entrada, pesos) + vies
    saida_prevista = ativacao(soma)

    if saida_prevista == 0:
        categoria = "Futebol"
    else:
        categoria = "Automobilismo"

    print(f"Entrada: {entrada}, Categoria: {categoria}")