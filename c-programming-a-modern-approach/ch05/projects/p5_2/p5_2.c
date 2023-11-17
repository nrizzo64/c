#include <stdio.h>

int main(void) {
	printf("Enter a 24-hour time: ");
	int hour, minute;
	char meridiem;
	scanf("%d:%d %c", &hour, &minute, &meridiem);
	if(hour == 12 && minute == 0) {
		if(meridiem == 'A') printf("0000\n");
		else printf("1200\n");
	} else if (meridiem == 'A') {
		printf("%02d%02d\n", hour, minute);
	} else {		
		printf("%02d%02d\n", hour + 12, minute);
	}
//	printf("%d %d %c\n", hour, minute, meridiem);

	return 0;
}
