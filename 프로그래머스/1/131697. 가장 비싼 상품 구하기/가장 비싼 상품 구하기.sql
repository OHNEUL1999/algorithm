-- 코드를 입력하세요
-- SELECT MAX(PRICE) AS MAX_PRICE FROM PRODUCT
SELECT PRICE AS MAX_PRICE
FROM PRODUCT
ORDER BY PRICE DESC
LIMIT 1