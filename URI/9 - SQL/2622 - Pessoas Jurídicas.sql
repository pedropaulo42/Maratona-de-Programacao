SELECT customers.name
from customers
JOIN legal_person on (customers.id = legal_person.id_customers)