select e.name
from Employee e
Join (
	select managerId
	from Employee
	group by managerId
    having count(*) >= 5
) t
    on t.managerId = e.id;


-- or more efficiently

select name
from Employee
where id
	in (
		select managerId
		from Employee
		group by managerId
		having count(*) > 4
	)
