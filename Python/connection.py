import psycopg2

connection = psycopg2.connect(
    db="TimeTableDB",
    host="localhost",
    port="5432",
    username="postgres",
    password="harsh03"

)

cursor = connection.cursor()
 
cursor.execute("""
    CREATE TABLE IF NOT EXISTS students (
        id SERIAL PRIMARY KEY,
        name VARCHAR(50) NOT NULL,
        age INT,
        grade VARCHAR(10)
    )
""")

connection.commit()

connection.close()