# Write your MySQL query statement below
select employee_id from employees where salary < (select 30000 where manager_id not in (select employee_id from employees)) order by employee_id asc;