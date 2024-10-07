# Description: burbujeo algoritmo de ordenamiento

#hecho con copilot
# lista = [7,8,15,4,9]


# def ordenar(lista):
#     for i in range(len(lista)):
#         for j in range(i+1,len(lista)):
#             if lista[i] > lista[j]:
#                 lista[i], lista[j] = lista[j], lista[i]
#     return lista

# print(ordenar(lista))



# ------hecho a mano------
# con variables auxiliares 

# lista = [7,8,15,4,9]

# for pasadas in range(len(lista)-1,0,-1):
#     for i in range(pasadas):
#         if lista[i] > lista[i+1]:
#             aux = lista[i]
#             lista[i] = lista[i+1]
#             lista[i+1] = aux
# print(lista)




# ------hecho a mano por el profesor------
#burjeo algoritmo de ordenamiento
#lista = [7,8,15,4,9,1,-2,0,54,8,14,7,62,]# tiene 13 elementos
lista = [1,2,5,10,0]
ops = 0
for pasadas in range(0,len(lista)-1): #controla la cantidad de pasadas
    for i in range(0,len(lista)-1 -pasadas): #controla la cantidad de comparaciones
        j = i+1
        ops += 1 
        if lista[i] > lista[j]:
            aux = lista[i]
            lista[i] = lista[j]
            lista[j] = aux
print(lista)
print("Operaciones: ", ops)












# def ordenar_burbujeo(lista):
#     n = len(lista)
#     for i in range(n):
#         for j in range(0, n-i-1):
#             if lista[j] > lista[j+1]:
#                 lista[j], lista[j+1] = lista[j+1], lista[j]
#     return lista

# print(ordenar_burbujeo(lista))