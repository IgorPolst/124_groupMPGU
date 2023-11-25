import sqlite3
import random

# using sql
filename = "c:\\Users\Igor\Documents\GitHub\\124_groupMPGU\SQL\\base.sqlite"

# CREATE TABLE students (
#                user_id INTEGER PRIMARY KEY,
#                last_name TEXT varchar(255),
#                first_name TEXT,
#                group_number TEXT,
#                github_link TEXT,
#                commit_count INTEGER DEFAULT 0,
#                week_commit_count INTEGER DEFAULT 0,
#                rank INTEGER DEFAULT 0,
#                week_rank INTEGER DEFAULT 0,
#                points INTEGER DEFAULT 0,
#                last_update_date TEXT
#            )

# Создаем соединение с нашей базой данных
# В нашем примере у нас это просто файл базы
conn = sqlite3.connect(filename)

# Создаем курсор - это специальный объект который делает запросы и получает их результаты
cursor = conn.cursor()

# ТУТ БУДЕТ НАШ КОД РАБОТЫ С БАЗОЙ ДАННЫХ
# КОД ДАЛЬНЕЙШИХ ПРИМЕРОВ ВСТАВЛЯТЬ В ЭТО МЕСТО

# Делаем SELECT запрос к базе данных, используя обычный SQL-синтаксис
cursor.execute("SELECT Name,ArtistId FROM 'Artist' ORDER BY Name Limit 5")

# Получаем результат сделанного запроса
results = cursor.fetchall()
print(results)
print("track:")
cursor.execute(
    "SELECT TrackId,Name,UnitPrice, GenreId FROM Track WHERE UnitPrice>1 Limit 5"
)
results2 = cursor.fetchall()
for res2 in results2:
    print(res2)
# print(results2)


# SQL injection - допустим у нас есть таблица MediaType где есть пароли в столбце Name и мы хотим из нее выбрать
inject = "'test' UNION  SELECT Name FROM MediaType; "
inject2 = "'test' OR 1=1"
cursor.execute("SELECT Name FROM Artist where name=" + inject)
# cursor.execute("SELECT Name FROM Artist where name=:inj", {"inj":inject2})
resultsInj = cursor.fetchall()
print("иньекция:")
print(resultsInj)

# insert
print("insert:")
rndame = "test" + str(random.random() * 1000)
# используем параметры запроса чтоб не было Инъекции
cursor.execute(
    "INSERT into Artist (`ArtistId`, `Name`) values (Null, :name); ", {"name": rndame}
)
cursor.execute("SELECT * FROM Artist where name=:rndname ", {"rndname": rndame})
results3 = cursor.fetchall()
# эта строка сохранит данные после insert
conn.commit()
print(results3)

# update
print("update:")
cursor.execute("UPDATE Artist SET Name='test556677' where ArtistId=286 ")
cursor.execute("UPDATE Artist SET Name='ac-dc' where name='AC/DC' ")
cursor.execute("SELECT * FROM Artist where ArtistId>284 ")
results4 = cursor.fetchall()
# эта строка сохранит данные после UPDATE
conn.commit()
print(results4)

# delete
print("delete:")
# cursor.execute("DELETE FROM Artist where ArtistId<100 ")
# cursor.execute("SELECT * FROM Artist where ArtistId<110 ")
# results5 = cursor.fetchall()
# rint(results5)

# joins
print("join:")
cursor.execute(
    "SELECT alb.Title,alb.AlbumId, art.Name, t.TrackId, t.Name ,g.Name FROM Album AS alb "
    + " LEFT JOIN Artist AS art ON alb.ArtistId=art.ArtistId  "
    + " LEFT JOIN Track as t ON t.AlbumId=alb.AlbumId  "
    + " LEFT JOIN Genre as g on g.GenreId=t.GenreId Limit 16"
)
results6 = cursor.fetchall()
for res2 in results6:
    print(res2)

print("join2:")
cursor.execute(
    "SELECT pl.Name, pl.playlistid, t.Name FROM Playlist AS pl "
    + " LEFT JOIN PlaylistTrack AS plt ON plt.PlaylistId=pl.PlaylistId  "
    + " LEFT JOIN Track as t ON t.TrackId=plt.TrackId  "
    + " WHERE t.TrackId=597 "
)
results6 = cursor.fetchall()
for res2 in results6:
    print(res2)
# Commits the entries to the database
# эта строка сохранит данные после insert
conn.commit()
# Не забываем закрыть соединение с базой данных
conn.close()
