#include <stdio.h>
#include <string.h>
void findToppers() {
    FILE *file = fopen("score.csv", "r");
    if (file == NULL) {
        return;
    }

    char name[51];
    int score;
    int maxScore = -1;
    char toppers[100][51];
    int topperCount = 0;

    while (fscanf(file, "%[^,],%d\n", name, &score) != EOF) {
        if (score > maxScore) {
            maxScore = score;
            strcpy(toppers[0], name);
            topperCount = 1;
        } else if (score == maxScore) {
            strcpy(toppers[topperCount], name);
            topperCount++;
        }
    }

    fclose(file);

    for (int i = 0; i < topperCount; i++) {
        printf("%s\n", toppers[i]);
    }
}
int main(){
    findToppers();   
    return 0;
}