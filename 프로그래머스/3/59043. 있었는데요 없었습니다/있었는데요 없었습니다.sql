select a.animal_id, a.name
from animal_ins as a
inner join animal_outs as b on a.animal_id = b.animal_id
where a.datetime > b.datetime
order by a.datetime asc;