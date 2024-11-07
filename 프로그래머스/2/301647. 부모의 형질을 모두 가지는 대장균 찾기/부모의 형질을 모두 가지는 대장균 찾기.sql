-- 코드를 작성해주세요
SELECT b.id AS ID, b.genotype AS GENOTYPE, a.genotype AS PARENT_GENOTYPE
FROM ecoli_data AS a
JOIN ecoli_data AS b ON a.id = b.parent_id
WHERE (b.genotype & a.genotype) = a.genotype
ORDER BY b.id;
