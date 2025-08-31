# Write your MySQL query statement below
select b.unique_id,a.name from  EmployeeUNI as b 
right join Employees as a
on a.id=b.id;
