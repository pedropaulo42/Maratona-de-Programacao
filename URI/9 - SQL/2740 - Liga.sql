(SELECT 'Podium: ' || team as "name" from league LIMIT 3)
UNION ALL
(SELECT 'Demoted: ' || team from league where position > (select count(position)-2 from league))