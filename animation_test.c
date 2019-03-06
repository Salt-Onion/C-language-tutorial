// ショボーン・ダンス
#include <stdio.h>
#include <unistd.h>

void main() {
    while (1) {
        puts("\x1B[2J");
	printf("♪  ∧,＿∧　　♪\n");
        printf("   ( ´･ω･) ))\n");
	printf("(( (　つ　ヽ、　　　♪\n");
	printf("　　〉 とノ　)))\n");
	printf("　（__ノ^(＿)\n");
	usleep(500000);

	puts("\x1B[2J");
	printf("　　∧＿,∧　♪\n");
	printf("(( (･ω･` )\n");
	printf("♪ /　⊂　) ))　♪\n");
	printf(" (((ヽつ〈\n");
	printf("　(__)^ヽ_）\n");
	usleep(500000);
    }
}
