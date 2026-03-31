select employees.employee_id, 
CASE
        WHEN  employees.employee_id % 2 != 0 and employees.name not like 'M%' THEN employees.salary
        ELSE 0
    END as bonus
from employees order by employee_id