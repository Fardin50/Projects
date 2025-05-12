import random

rules = {
    "rock": "scissors",
    "scissors": "paper",
    "paper": "rock"
}

moves = ["rock", "paper", "scissors"]
computer_move = random.choice(moves)

user = input("Enter rock, paper, or scissors: ")
user = user.lower() 
if rules[user] == computer_move:
    print("You win!")
elif rules[computer_move] == user:
    print("You lose!")
else:
    print("It's a tie!")