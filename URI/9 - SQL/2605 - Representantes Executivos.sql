SELECT products.name, providers.name
FROM products
INNER JOIN providers on (products.id_providers = providers.id)
WHERE products.id_categories = 6