SELECT amount as most_frequent_value	
from value_table
GROUP by amount
ORDER BY COUNT(amount) DESC
LIMIT 1