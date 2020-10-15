SELECT name, ROUND((salary * 10) / 100, 2) as tax
FROM people
where salary > 3000