# Importa la biblioteca
import requests
# Se especifica la URL
url = "https://www.google.com"
# De nuevo obtiene la respuesta de la url con get
response = requests.get(url)
# Contenido de texto (Devuelve un código html, pero por la terminal)
print(response.text)
