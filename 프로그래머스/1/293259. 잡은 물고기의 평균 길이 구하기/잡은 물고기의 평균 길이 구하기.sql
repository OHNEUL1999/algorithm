-- 코드를 작성해주세요
SELECT ROUND(AVG(CASE 
                    WHEN FI.LENGTH IS NULL OR FI.LENGTH < 10 THEN 10 
                    ELSE FI.LENGTH 
                END), 2) AS AVERAGE_LENGTH
FROM FISH_INFO FI
