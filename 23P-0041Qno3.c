#include <stdio.h>

void ParseHands(int playerNum, int cards[]);
int compareHands(int cards1[], int cards2[]);
int cardValue(char input);

int main() {
    int player1Cards[5];
    int player2Cards[5];

    printf("Enter Player 1's cards (separated by spaces): ");
    ParseHands(1, player1Cards);

    printf("Enter Player 2's cards (separated by spaces): ");
    ParseHands(2, player2Cards);

    int winner = compareHands(player1Cards, player2Cards);

    if (winner == 1)
        printf("Player 1 wins!\n");
    else if (winner == 2)
        printf("Player 2 wins!\n");
    else
        printf("It's a tie!\n");

    return 0;
}

// Function to input cards for a player
void ParseHands(int playerNum, int cards[]) {
    char input;
    for (int i = 0; i < 5; i++) {
        scanf(" %c", &input); 
        
    }
}


// Function to get value of the card


int cardValue(char input) {
    if (input == 'k')
        return 13;
    else if (input == 'q')
        return 12;
    else if (input == 'j')
        return 11;
    else if (input == 'a')
        return 14;
    else if (input >= '2' && input <= '9')
        return input - '0'; 
    else {
        printf("Invalid card entered.\n");
        return -1; // Indicate error
    }
}

// Function to compare hands of two players
int compareHands(int cards1[], int cards2[]) {
    for (int i = 0; i < 5; i++) {
        if (cards1[i] > cards2[i])
            return 1;              // player 1 wins
        else if (cards1[i] < cards2[i])
            return 2;             //player 2 wins
    }
    return 0;  //  tie
}
