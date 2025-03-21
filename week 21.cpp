#include <stdio.h>
#include <time.h>
int isPrime(int num) {
if (num &lt;= 1) {
return 0;
}
for (int i = 2; i * i &lt;= num; i++) {
if (num % i == 0) {
return 0;
}
}
return 1;
}
int main() {
int N,num = 2,count = 0;
printf(&quot;Enter the value of N: &quot;);
scanf(&quot;%d&quot;, &amp;N);
clock_t start = clock();
printf(&quot;First %d prime numbers are:\n&quot;, N);
while (count &lt; N) {
if (isPrime(num)) {
printf(&quot;%d &quot;, num);
count++;
}
num++;
}
clock_t end = clock();
double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
printf(&quot;\nTime taken: %f seconds\n&quot;, time_taken);
return 0;
}
