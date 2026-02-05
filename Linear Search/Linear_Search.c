#include <stdio.h>

int main() {
    int n, key, i, found = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    for(i=0;i<n;i++){
		if(arr[i] == key){
			found = 1;
			break;
		}
	}
	if(found==1){
		printf("found at position %d\n", i);
	}else{
		printf("%d not found\n", key);
	}
}

