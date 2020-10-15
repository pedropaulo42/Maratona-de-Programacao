SELECT name, CHAR_LENGTH(name) as length
FROM people
ORDER by length DESC