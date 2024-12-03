# Write your MySQL query statement below
SELECT Name as Employee FROM Employee
WHERE Employee.salary > (SELECT salary FROM Employee as e2
WHERE id = Employee.managerId);