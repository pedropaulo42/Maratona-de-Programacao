SELECT life_registry.name, ROUND(life_registry.omega * 1.618, 3) as "Fator N"	
from life_registry
inner JOIN dimensions on (life_registry.dimensions_id = dimensions.id)
where life_registry.name like 'Richard%' and (dimensions.name LIKE 'C875' or dimensions.name LIKE 'C774')