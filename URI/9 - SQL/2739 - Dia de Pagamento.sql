SELECT name, cast(EXTRACT(day from payday) as int) as day
FROM loan