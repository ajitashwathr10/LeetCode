
SELECT firstName, lastname, city, state
FROM person left join address on 
person.personId = address.personId;