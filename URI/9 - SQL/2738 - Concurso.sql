SELECT candidate.name, ROUND(((score.math * 2) + (score.specific * 3) + (score.project_plan * 5)) / 10, 2) as avg
FROM candidate
join score on (candidate.id = score.candidate_id)
ORDER by AVG DESC