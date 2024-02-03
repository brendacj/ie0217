import requests

# Trabajar los diferentes tipos de respuestas
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
# Revisar las diferentes partes o formatos
print (response.status_code)
print (response.headers)
print (response.json()) # Si la respuesta es json

# Uso de try except para manejo de errores
try:
    # Usar el código que podría devolver un código de error ( no un 200)
    response = requests.get('https://ejemplo.com/pagina-inexistente')
    response.raise_for_status() # Genera una excepción si hay un error HTTP
    print(response.text) # O imprime la respuesta

except requests.exceptions.HTTPError as err:
    # Aquí se maneja el error con el tipo especifico
    print (f"Error HTTP: {err}")

