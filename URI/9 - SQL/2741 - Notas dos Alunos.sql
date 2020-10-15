SELECT 'Approved: ' || name as name, grade
FROM students
WHERE grade >= 7.0
ORDER by grade DESC