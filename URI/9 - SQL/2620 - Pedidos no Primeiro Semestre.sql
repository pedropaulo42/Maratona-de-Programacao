SELECT customers.name, orders.id
FROM orders
JOIN customers on (orders.id_customers = customers.id)
WHERE orders.orders_date BETWEEN '2016-01-01' AND '2016-06-30'