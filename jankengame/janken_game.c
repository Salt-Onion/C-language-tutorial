#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int player_hand;
    int computer_hand;

    printf("じゃんけんゲームです。\n1 ~ 3の数字を入力してください。\n1 = グー\n2 = チョキ\n3 = パー\n>>>");
    scanf("%d", &player_hand);

    switch (player_hand) {
	case 1:
            printf("\nあなたはグーを出しました。\n");
            break;

	case 2:
	    printf("\nあなたはチョキを出しました。\n");
	    break;
	    
	case 3:
	    printf("\nあなたはパーを出しました。\n");
	    break;
        
        dafault:
            printf("\n入力できるのは1 ~ 3の数字のみです。\n");
	    return 0;
    }

    srand(time(NULL));
    computer_hand = rand() % 3 + 1;
    switch (computer_hand) {
	    case 1:
	        printf("相手はグーを出しました。\n");
		break;
	    
	    case 2:
		printf("相手はチョキを出しました。\n");
		break;
		
	    case 3:
		printf("相手はパーを出しました。\n");
		break;
    }
    
    if (computer_hand == player_hand) {
        printf("あいこです。\n");

    } else if (computer_hand == 1 && player_hand == 2 || computer_hand == 2 && player_hand == 3 || computer_hand == 3 && player_hand == 1) {
        printf("相手の勝ちです。\n");

    } else {
	printf("あなたの勝ちです。\n");
    }

    return 0;
}

