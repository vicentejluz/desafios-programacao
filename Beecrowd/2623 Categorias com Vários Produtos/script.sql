SELECT prod.name, cat.name
FROM categories cat
INNER JOIN products prod on prod.id_categories = cat.id 
WHERE prod.amount > 100 AND prod.id_categories in(1, 2, 3, 6, 9);