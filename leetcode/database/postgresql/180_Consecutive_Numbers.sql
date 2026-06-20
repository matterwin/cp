WITH leads AS (
    SELECT
        num,
        LEAD(num, 1) OVER(ORDER BY id) as next_1,
        LEAD(num, 2) OVER(ORDER BY id) as next_2
    FROM Logs
)

SELECT DISTINCT num as ConsecutiveNums
FROM leads
WHERE num = next_1 and num = next_2;
