#include <stdio.h>
#include <string.h>

int max_subseq_dist(char *s, char *t, int s_len, int t_len){
    int i = 0;
    int j = 0;
    int dist;
    int max = 0;
    int pos_array[201];

    while(j < t_len){
        if(s[i++] == t[j]){
            pos_array[j+1] = i;
            j++;
        }
    }
    pos_array[0] = 0;
    pos_array[t_len+1] = s_len;
    for(j = t_len-1; j >= 0; j--){
        i = pos_array[j+2]-1;
        while(i > pos_array[j+1]){
            if(s[i--] == t[j]){
                pos_array[j+1] = i;
                dist = i - pos_array[j];
                if(dist > max) max = dist;
                break;
            }
        }
    }

    return max+1;
}

int first_substr_pos(char *s, char *t, int s_len, int t_len){
    int i = 0;
    int j = 0;

    for(i = 0; i < s_len; i++){
        if(s[i] == t[j]){
            if(j == t_len-1) break;
            j++;
        } else{
            j = 0;
        }
    }
    if(i == s_len) return s_len-1;
    return i;
}

int last_substr_pos(char *s, char *t, int s_len, int t_len){
    int i = 0;
    int j = t_len-1;

    for(i = s_len-1; i >= 0; i--){
        if(s[i] == t[j]){
            if(j == 0) break;
            j--;
        } else{
            j = t_len-1;
        }
    }
    return i;
}

int main(){
    char s[201], t[201];
    scanf("%s\n%s", s, t);
    int s_len = strlen(s);
    int t_len = strlen(t);
    if(s_len == t_len){
        printf("0\n");
        return 0;
    }
    int max1 = max_subseq_dist(s, t, s_len, t_len);
    int max2 = s_len - 1 - first_substr_pos(s, t, s_len, t_len);
    int max3 = last_substr_pos(s, t, s_len, t_len);
    int max = 0;
    if(max1 > max2){
        if(max1 > max3){
            max = max1;
        } else{
            max = max3;
        }
    } else{
        if(max2 > max3){
            max = max2;
        } else{
            max = max3;
        }
    }

    printf("%d\n", max);


    return 0;
}
