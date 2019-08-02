#include<bits/stdc++.h>
using namespace std;

char s[1000001];
char ss[1000001];
int P[1000001];

// Fills lps[] for given patttern pat[0..M-1]
void compute_lps_array(char* pat, int M, int* lps){
    // length of the previous longest prefix suffix
    int len = 0;

    lps[0] = 0; // lps[0] is always 0

    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];

                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int KMPtimes_matched(char* pat, char* txt) {
    int M = strlen(pat);
    int N = strlen(txt);

    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    int lps[M];

    // Preprocess the pattern (calculate lps[] array)
    compute_lps_array(pat, M, lps);

    int i = 0; // index for txt[]
    int j = 0; // index for pat[]
    int timesMatched = 0;
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }

        if (j == M) {
            timesMatched++;
            j = lps[j - 1];
        }

        // mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return timesMatched;
}

int main() {

    while(true){
        scanf(" %s",s);
        if(s[0] == '.') break;
        P[1] = P[0] = 0;
        int len = strlen(s);
        int j = 0;
        for(int i = 2; i <= len; i++){
            while(j > 0 && s[i-1] != s[j])
                j = P[j];
            if(s[i-1] == s[j])
                j++;
            P[i] = j;
        }
        int ans = len/(len-P[len]);
        printf("%d\n", ans);
    }
}
