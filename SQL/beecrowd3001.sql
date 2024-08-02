SELECT name as type, CASE WHEN type = 'A' then 20.0 WHEN type = 'B' then 70.0 ELSE 530.5 END AS price FROM products ORDER BY products.type, products.id DESC;