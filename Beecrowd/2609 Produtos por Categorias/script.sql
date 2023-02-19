SELECT cat.name, sum(prod.amount)
FROM categories cat, products prod
WHERE prod.id_categories = cat.id
GROUP BY cat.name;