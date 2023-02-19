SELECT	prod.name
FROM products prod, providers prov
WHERE prod.id_providers = prov.id AND 
prod.amount >= 10 AND 
prod.amount <= 20 AND	
prov.name like 'P%';