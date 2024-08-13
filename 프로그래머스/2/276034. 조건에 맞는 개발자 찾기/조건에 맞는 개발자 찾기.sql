-- 코드를 작성해주세요
-- PYTHON 256 C# 1024
SELECT ID, EMAIL, FIRST_NAME, LAST_NAME FROM DEVELOPERS
WHERE SKILL_CODE &(SELECT CODE FROM SKILLCODES WHERE NAME LIKE 'Py%')
OR SKILL_CODE &(SELECT CODE FROM SKILLCODES WHERE NAME LIKE 'C#')
ORDER BY ID;