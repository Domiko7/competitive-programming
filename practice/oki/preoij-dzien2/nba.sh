#!/usr/bin

g++-15 nba.cpp -o nba_actual
g++-15 nba_rand.cpp -o nba_randomizer

for i in {1..1000}; do
    ./nba_randomizer > nba.in
    ./nba_actual < nba.in > nba2.out
    if ! diff nba.out nba2.out; then
        echo "[$i] WRONG"
        exit 1
    fi
    echo "[$i] OK"
done
echo "TESTS PASSED"