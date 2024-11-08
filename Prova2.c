#include <stdio.h>
    int main(){
        # Função para verificar e retornar apenas números pares
def retornar_pares():
    while True:
        # Solicita ao usuário a entrada de um número
        entrada = input("Digite um número (ou 'sair' para encerrar): ")
        
        # Verifica se o usuário deseja encerrar o programa
        if entrada.lower() == 'sair':
            print("Programa encerrado.")
            break
        
        try:
            # Converte a entrada para inteiro
            numero = int(entrada)
            
            # Verifica se o número é par
            if numero % 2 == 0:
                print(f"O número {numero} é par.")
            else:
                print(f"O número {numero} não é par.")
        
        except ValueError:
            print("Por favor, insira um número válido.")

# Chama a função
retornar_pares()
    }