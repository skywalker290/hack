import random
print("Welcome to Hangman!")
name = input("Enter your nickname: ")
print("Hello " + name + "!")
print("Let's play Hangman!")

def main():
    global count
    global display
    global word
    global guessed
    global length
    global play
    words_to_guess = ["coding", "python", "data", "machine", "chocolate", "laptop", "story", "library", "country", "civilsation"]
    word = random.choice(words_to_guess)
    length = len(word)
    count = 0
    display = '_ ' * length
    guessed = []
    play = ""

def play_loop():
    global play
    play = input("Do you want to play again? (y/n) \n")
    while play not in ["y", "n","Y","N"]:
        play = input("Do you want to play again? (y/n) \n")
    if play == "y" or play == "Y" :
        main()
    elif play == "n" or play == "N":
        print("Thanks For Playing! We expect you back again!")
        exit()
    
def hangman():
    global count
    global display
    global word
    global guessed
    global play
    limit = 5
    guess = input("This is the word to be guessed: " + display + " Enter your guessing letter: \n")
    guess = guess.strip()
    if len(guess.strip()) == 0 or len(guess.strip()) > 1 or guess in [0,1,2,3,4,5,6,7,8,9]:
        print("Invalid Input. Please type in only one letter.")
        hangman()
    elif guess in word:
        guessed.extend([guess])
        index = word.find(guess)
        word = word[:index] + "_ " + word[index + 1:]
        display = display[:index] + guess + display[index + 1:]
        print(display + "\n")

    elif guess in guessed:
        print("Try another letter.\n")

    else:
        count += 1

        if count == 1:
            print("   _____ \n"
                  "  |      \n"
                  "  |      \n"
                  "  |      \n"
                  "  |      \n"
                  "  |      \n"
                  "  |      \n"
                  "__|__\n")
            print("Wrong guess. " + str(limit - count) + " guesses remaining\n")

        elif count == 2:
            print("   _____ \n"
                  "  |     | \n"
                  "  |     |\n"
                  "  |      \n"
                  "  |      \n"
                  "  |      \n"
                  "  |      \n"
                  "__|__\n")
            print("Wrong guess. " + str(limit - count) + " guesses remaining\n")

        elif count == 3:
           print("   _____ \n"
                 "  |     | \n"
                 "  |     |\n"
                 "  |     | \n"
                 "  |      \n"
                 "  |      \n"
                 "  |      \n"
                 "__|__\n")
           print("Wrong guess. " + str(limit - count) + " guesses remaining\n")

        elif count == 4:
            print("   _____ \n"
                  "  |     | \n"
                  "  |     |\n"
                  "  |     | \n"
                  "  |     O \n"
                  "  |      \n"
                  "  |      \n"
                  "__|__\n")
            print("Wrong guess. " + str(limit - count) + " last guess remaining\n")

        elif count == 5:
            print("   _____ \n"
                  "  |     | \n"
                  "  |     |\n"
                  "  |     | \n"
                  "  |     O \n"
                  "  |    /|\ \n"
                  "  |    / \ \n"
                  "__|__\n")
            print("You couldn't guess the word! Game over!")
            print("The word was:",guessed,word)
            play_loop()

    if word == '_ ' * length:
        print("Congratulations! You have guessed the word correctly!")
        play_loop()

    elif count != limit:
        hangman()


main()
hangman()
