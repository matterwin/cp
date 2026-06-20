WITH ids AS (
    SELECT requester_id AS id
    FROM RequestAccepted

    UNION ALL

    SELECT accepter_id AS id
    FROM RequestAccepted
)

SELECT
    id,
    COUNT(*) AS num
FROM ids
GROUP BY id
ORDER BY num DESC
LIMIT 1;

-- or this

select id, count(*) as num
from (
    select requester_id as id from RequestAccepted
    union all
    select  accepter_id as id from RequestAccepted
) as all_ids
group by id
order by num desc
limit 1
