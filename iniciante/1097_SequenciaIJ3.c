///SEQUENCIA I J 3///
#include "stdio.h"
int main(){
    int i, j, n;
	n = 7;
	for (i = 1; i < 10; i = i + 2){
		for (j = n; j > (n - 3); j = j - 1){
			printf("I=%d J=%d\n", i, j);
			n += 2;
        }
	}
    return 0;
}