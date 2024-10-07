#tupas no puden ser modificadas

# se puede modificar pero no agregar ni eliminar elementos, "se modifica la tupla entera" 
tupla = (1,2,3,4,5)
print(tupla)
print(tupla[0])
print(tupla[1])
print(tupla[2])
print(tupla[3])
print(tupla[4])
tupla[0] = 10 #error


# string modificacion de una letra
palabra = "hola"
palabra = palabra[:1] + "u" + palabra[2:]
print(palabra)
