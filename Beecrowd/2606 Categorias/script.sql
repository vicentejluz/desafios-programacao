SELECT prod.id, prod.name
FROM products prod, categories cat
WHERE prod.id_categories = cat.id AND cat.name like 'super%';