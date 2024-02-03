# Importar la biblioteca necesaria
import requests
### PASOS ###

# Paso 1: Obtener información de la url con una respuesta
users_response = requests.get('https://jsonplaceholder.typicode.com/users')
# User data en formato json para trabajar con el
users_data = users_response.json()

# Paso 2: Lo mismo pero con otra url
posts_response = requests.get('https://jsonplaceholder.typicode.com/posts')
posts_data = posts_response.json()

# Paso 3: procesar los datos

# Crear un diccionario 
user_posts = {}

# Para cada usuario se crea una llave user id
# Como un lista vacia
for user in users_data:
    user_posts[user['id']] = []

# Para cada post busca el userID
for post in posts_data:
    user_id = post.get('userId') # Usa get para no obtener un KeyError
    if user_id in user_posts:
        # Agregar a la lista de user post
        user_posts[user_id].append({
            'title': post['title'],
            'body': post['body']
        })

# Paso 4: Imprimir los resultados
        # Itera sobre user_id y post en user_post
for user_id, posts in user_posts.items():
    # Devuelve un elemento si el id es igual a user_id
    user = next((user for user in users_data if user['id'] == user_id), None)
    if user:
        # Si devuelve un elemento se imprimen los elemntos de las listas
        print(f"\nPublicaciones de {user[ 'name']} ({user['email']}):\n")
        for post in posts:
            print(f"Title: {post['title']}\nBody: {post['body']}\n")
    else:
        # O sino solo no tiene, se muestra el mensaje
        print(f"No se encontraron datos para el usuario con ID {user_id}")

