SELECT a.name
FROM SalesPerson a
WHERE a.sales_id NOT IN (
    SELECT b.sales_id
    FROM Orders b
    JOIN Company c
        ON b.com_id = c.com_id
    WHERE c.name = 'RED'
);