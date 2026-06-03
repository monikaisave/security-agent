import sqlite3

def get_user_data(username):
    # WARNING: This is highly vulnerable to SQL Injection!
    conn = sqlite3.connect('users.db')
    cursor = conn.cursor()
    query = "SELECT * FROM users WHERE username = '" + username + "'"
    cursor.execute(query)
    return cursor.fetchall()
