# Primero importar request
import requests
# Accede al método get (Obtener la url)
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
# Tipo de la respuesta 
print("Tipo:", type(response))

# Respuesta (exito?)
print ("Respuesta:", response)

# Lo que contiene
print ("Respuesta text:", response.text)

# Imprimir todo lo de la respuesta
print ("Respuesta:", response.__dict__)
