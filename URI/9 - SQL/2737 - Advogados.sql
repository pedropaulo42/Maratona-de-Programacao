(SELECT name, max(customers_number) as customers_number from lawyers GROUP by register ORDER by customers_number DESC LIMIT 1)
UNION ALL
(SELECT name, min(customers_number) from lawyers GROUP by register ORDER by customers_number LIMIT 1)
UNION ALL
(SELECT 'Average', ROUND(AVG(customers_number),0) from lawyers)