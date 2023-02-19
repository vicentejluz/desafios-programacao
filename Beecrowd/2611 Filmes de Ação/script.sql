SELECT mov.id, mov.name
FROM movies mov
INNER JOIN genres gen on gen.id = mov.id_genres
WHERE gen.description = 'Action';