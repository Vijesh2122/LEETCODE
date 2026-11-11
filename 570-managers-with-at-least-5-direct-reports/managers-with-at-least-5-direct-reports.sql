# Write your MySQL query statement below
select b.name 
from Employee a
 join Employee b
on a.managerId=b.id
group by a.managerId
having count(*)>4;
