import requests

### Ejemplo get ###

# Crear payload (carga)
payload = {'clave1': 'valor1', 'clave2': 'valor2'}
# Método obtener de la url con parametros payload
response = requests.get('https://ejemplo.com/ruta', params=payload)
# imprimir el contenido de texto
print (response.text)

### Ejemplo post ###

# Lo mismo que get pero usando .post y data
payload = {'usuario': 'juan', 'contrasena': 'secreta'}
response = requests.post('https://ejemplo.com/login', data=payload)
print(response.text)

# Aquí hace un post pero especificando que lo que manda está en formato json
payload = {'usuario': 'juan', 'contrasena': 'secreta'}
response = requests.post( 'https://ejemplo.com/login', json=payload)
print (response.text)


