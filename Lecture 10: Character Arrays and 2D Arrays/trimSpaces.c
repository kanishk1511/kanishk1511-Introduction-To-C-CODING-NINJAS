/*
    Time complexity: O(N)
    Space complexity: O(1)

    where N is the length of the input string
*/

void trimSpaces(char input[]) {
    int j = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != ' ') {
            input[j] = input[i];
            j++;
        }
    }
    
    input[j] = '\0';
}
