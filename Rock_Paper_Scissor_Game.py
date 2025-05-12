import random

# Game rules
rules = {
    "rock": "scissors",
    "scissors": "paper",
    "paper": "rock"
}

# Update and return new scores
def update_scores(user, computer, user_score, computer_score):
    if rules[user] == computer:
        print(f"You chose {user}, computer chose {computer}. You win this round!")
        user_score += 1
    elif rules[computer] == user:
        print(f"You chose {user}, computer chose {computer}. You lose this round!")
        computer_score += 1
    else:
        print(f"Both chose {user}. It's a tie!")

    print(f"Score -> You: {user_score}, Computer: {computer_score}\n")
    return user_score, computer_score

# Initial scores
user_score = 0
computer_score = 0

# Main game loop
while user_score < 3 and computer_score < 3:
    user = input("Enter rock, paper, or scissors: ").lower()

    if user not in rules:
        print("Invalid input. Please choose rock, paper, or scissors.\n")
        continue

    computer_move = random.choice(list(rules.keys()))
    user_score, computer_score = update_scores(user, computer_move, user_score, computer_score)

# Final result
if user_score == 3:
    print("🎉 Congratulations! You won the game!")
else:
    print("💻 The computer won the game. Better luck next time!")
