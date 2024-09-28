def mediaNotas():
    nota1 = float (input("Digite a nota1: "))
    nota2 = float (input("Digite a nota2: "))
    media = (nota1 + nota2)/2
    print("A média é: ", media)      

def mediaNotasIf():
    nota1 = float
    nota2 = float

    while True:
        nota1 = float (input("Digite a nota1: "))
        if(nota1 < 10 and nota1 > 0):
            break
    while True:
        nota2 = float (input("Digite a nota2: "))
        if(nota2 < 10 and nota2 > 0):
            break

    media = (nota1 + nota2)/2
    print("A média é: ", media)

def mediaRegular():
    nota1 = float
    nota2 = float

    while True:
        nota1 = float (input("Digite a nota1: "))
        if(nota1 < 10 and nota1 > 0):
            break
    while True:
        nota2 = float (input("Digite a nota2: "))
        if(nota2 < 10 and nota2 > 0):
            break

    media = (nota1 + nota2)/2
    print("A média é: ", media)  
    if media > 7:
        print("Passou!!!!")
    elif media > 4:
        print("Exame!!!")
    else:
        print("Reprovou!!")

def divisores():
    for 

def Lista1(variavel):
    if variavel == 1:
        mediaNotas()
    elif variavel == 2:
        mediaNotasIf()
    elif variavel == 3:
        mediaRegular()

variavel = int(input("Escolha a atividade: "))
Lista1(variavel)

