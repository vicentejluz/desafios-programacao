SELECT prod.name, prov.name
FROM products prod, providers prov
WHERE prod.id_categories = 6 AND prod.id_providers = prov.id;