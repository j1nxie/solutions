# Write your code here
import random
word_list = ['python', 'java', 'kotlin', 'javascript']
correct_word = random.choice(word_list)
print('H A N G M A N')
while True:
    action = input('Type "play" to play the game, "exit" to quit: ')
    if action == 'play':
        hint = '-' * len(correct_word)
        temp = list(hint)
        letters = set()
        guessed = set()
        x = 8

        while x > 0 and hint != correct_word:
            print()
            i = 0
            print(hint)
            guess = input('Input a letter: ')
            if guess in guessed:
                print('You already typed this letter')
            elif len(guess) != 1:
                print('You should input a single letter')
            elif len(guess) == 1 and not guess.isalpha() or not guess.islower():
                print('It is not an ASCII lowercase letter')
            elif guess not in correct_word:
                print('No such letter in the word')
                x -= 1
            else:
                for letters in correct_word:
                    if guess == letters:
                        temp[i] = guess
                    i += 1
                hint = ''.join(temp)
            if len(guess) == 1:
                guessed.add(guess)

        if hint == correct_word:
            print('You survived!')
        else:
            print('You are hanged!')
    elif action == 'exit':
        break
