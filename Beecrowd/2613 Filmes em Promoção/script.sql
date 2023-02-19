SELECT mov.id, mov.name
FROM movies mov
INNER JOIN prices pric on mov.id_prices = pric.id
WHERE pric.value < 2;