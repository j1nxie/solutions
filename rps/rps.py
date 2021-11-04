import random
name = input('Enter your name: ')
print(f'Hello, {name}')
rating = open('rating.txt', 'wt+')
scores = {}

def get_scores(_name):
    for line in rating:
        (_name, score) = line.split()
        scores[_name] = score
    return scores[_name]
        

if name not in scores:
    scores[name] = '0'

while True:
    action = input()
    if action == '!exit':
        print('Bye!')
        break
    elif action == '!rating':
        print(f'Your rating: {get_scores(name)}')
        continue
    elif action == '':
        print("Okay, let's start")
        while True:
            option = input()
            counters = {'rock': 'paper', 'paper': 'scissors', 'scissors': 'rock'}
            options_list = ['rock', 'paper', 'scissors']
            ai_choice = random.choice(options_list)
            if option == '!exit':
                break
            if option == '!rating':
                print(f'Your rating: {get_scores(name)}')
                continue
            if option not in options_list and option != '!exit' and option != '!rating':
                print('Invalid input')
                continue
            if option == counters[ai_choice]:
                print(f'Well done. Computer chose {ai_choice} and failed')
                scores[name] = str(int(scores[name]) + 100) 
            elif option == ai_choice:
                print(f'There is a draw ({option})')
                scores[name] = str(int(scores[name]) + 50)
            else:
                print(f'Sorry, but computer chose {ai_choice}')
        print('Bye!')
        break
    print("Okay, let's start")
    while True:
        option = input()
        options_list = action.split(',')
        if option == '!exit':
            break
        if option == '!rating':
            print(f'Your rating: {get_scores(name)}')
            continue
        if option not in options_list:
            print('Invalid input')
            continue
        counters = []
        defeats = []
        temp = []
        sliced = []
        for i, item in enumerate(options_list):
            if item == option:
                options_list.remove(item)
                sliced = options_list[i + 1::]
                for j, _item in enumerate(sliced):
                    options_list.remove(_item)
        sliced.extend(options_list)      
        for i, item in enumerate(temp):
            if i < len(temp) / 2:
                counters.append(item)
            else:
                defeats.append(item)
        ai_choice = random.choice(options_list)
        if ai_choice in defeats:
            print(f'Well done. Computer chose {ai_choice} and failed')
            scores[name] = str(int(scores[name]) + 100) 
        elif option == ai_choice:
            print(f'There is a draw ({option})')
            scores[name] = str(int(scores[name]) + 50)
        elif ai_choice in counters:
            print(f'Sorry, but computer chose {ai_choice}')
    print('Bye!')
    break
        
for line in rating:
    rating.write(scores[name] + '\n')
    
rating.close()
