select name,
		case 
        	WHEN type = 'A'
            	THEN '20.0'
           	WHEN type = 'B'
            	THEN '70.0'
            WHEN type = 'C'
            	THEN '530.5'
        END price
from products
ORDER by products.type, id DESC