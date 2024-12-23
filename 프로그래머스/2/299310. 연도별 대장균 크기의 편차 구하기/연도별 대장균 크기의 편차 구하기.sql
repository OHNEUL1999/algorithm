-- 코드를 작성해주세요
SELECT CONVERT(DATE_FORMAT(e1.DIFFERENTIATION_DATE,'%Y'), SIGNED) AS YEAR
     , e2.BIGGEST - e1.SIZE_OF_COLONY AS YEAR_DEV
     , e1.ID
FROM ECOLI_DATA e1
        JOIN
     (SELECT DATE_FORMAT(DIFFERENTIATION_DATE,'%Y') AS YEARs
           , MAX(SIZE_OF_COLONY) AS BIGGEST
      FROM ECOLI_DATA 
      GROUP BY DATE_FORMAT(DIFFERENTIATION_DATE,'%Y')) e2 
      ON DATE_FORMAT(e1.DIFFERENTIATION_DATE,'%Y') = e2.YEARs
ORDER BY YEAR ASC, YEAR_DEV ASC