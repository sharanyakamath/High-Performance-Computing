gcc -Wall -pg Q3-recursive.c -o Q3-recursive
sudo perf record ./Q3-recursive
sudo perf report

sudo perf stat -e task-clock,cycles,instructions,cache-references,cache-misses ./Q3-recursive

