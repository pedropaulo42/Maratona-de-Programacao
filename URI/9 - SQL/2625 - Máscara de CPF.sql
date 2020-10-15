SELECT regexp_replace(natural_person.cpf,'^([0-9]{3})([0-9]{3})([0-9]{3})([0-9]{2})$', '\1.\2.\3-\4')
FROM natural_person
JOIN customers ON (natural_person.id_customers = customers.id)