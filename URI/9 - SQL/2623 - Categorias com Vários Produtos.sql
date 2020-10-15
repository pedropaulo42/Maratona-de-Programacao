SELECt products.name, categories.name
FROM products
JOIN categories on (products.id_categories = categories.id)
WHERE products.amount > 100 AND categories.id IN (1, 2, 3, 6, 9)
ORDER BY categories.id