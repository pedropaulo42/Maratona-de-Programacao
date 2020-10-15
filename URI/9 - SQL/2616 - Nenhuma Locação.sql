SELECT customers.id, customers.name
FROM customers
WHERE NOT EXISTS (
  SELECT id_customers
  FROM locations
  WHERE id_customers = customers.id
)