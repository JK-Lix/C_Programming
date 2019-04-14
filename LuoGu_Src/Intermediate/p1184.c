#include <stdio.h>
#include <string.h>

int main() {
    int n, m, cnt = 0, i, j = 0;
    char s;
    scanf("%d %d", &n, &m);
    char gs[n][100];
    
    scanf("%c", &s);
    int stat = 0;
    for (i = 0; i < n; i++) {
        j = 0;
        scanf("%c", &gs[i][j]);
        while(1) {
            if (gs[i][j] == '\n') {
                gs[i][j] = '\0';
                if (j == 0) i--;
                j = 0;
                break;
            }
            j++;
            scanf("%c", &gs[i][j]);
        }
    }
    
    for (i = 0; i < m; i++) {
        j = 0;
        char temp[100] = {0};
        scanf("%c", &temp[j]);
        while(1) {
            if (temp[j] == '\n') {
                temp[j] = '\0';
                if (j == 0) {
                    i--;
                    stat = 1;
                }
                break;
            }
            j++;
            scanf("%c", &temp[j]);
        }
        if (stat) {
            stat = 0;
            continue;
        }
        for (j = 0; j < n; j++) {
            if (strncmp(gs[j], temp, strlen(temp)) == 0) {
                cnt++;
                break;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}
