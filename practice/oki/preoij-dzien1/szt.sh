
g++-15 szt.cpp -o actual_szt
g++-15 szt_brut.cpp -o brut_szt
g++-15 szt_rand.cpp -o rand_szt

for i in {1..10000}; do
    ./rand_szt > szt.in
    ./brut_szt < szt.in > brute_szt.out
    ./actual_szt < szt.in > actual_szt.out
    if ! diff -q brute_szt.out actual_szt.out; then
        echo "[$i] FAIL"
        exit 1
    fi
    echo "[$i] OK"
done
echo "ALL TESTS PASSED"