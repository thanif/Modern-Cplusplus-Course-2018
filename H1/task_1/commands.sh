wc -l ../data/data.dat

grep -c '\<\(dalor\|dolor\)\>' ../data/data.dat

wc -w ../data/data.dat

grep -c '\<\(mol.*\)\>' ../data/data.dat

find ../data/test_folder -name '*.txt' | wc -l
