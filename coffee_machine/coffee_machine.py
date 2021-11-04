class CoffeeMachine():
    coffee_type = None
    coffee_requirements = [[250, 0, 16, 4], [350, 75, 20, 7], [200, 100, 12, 6]]
    coffee_selected = None
    status = None

    def __init__(self, water, milk, beans, cups, money):
        self.water = water
        self.milk = milk
        self.beans = beans
        self.cups = cups
        self.money = money

    def current_state(self):
        print('The coffee machine has:')
        print(f'{self.water} of water')
        print(f'{self.milk} of milk')
        print(f'{self.beans} of coffee beans')
        print(f'{self.cups} of disposable cups')
        print(f'${self.money} of money')

    def fill(self):
        self.water += int(input("Write how many ml of water do you want to add: "))
        self.milk += int(input("Write how many ml of milk do you want to add: "))
        self.beans += int(input("Write how many grams of coffee beans do you want to add: "))
        self.cups += int(input("Write how many disposable cups do you want to add: "))

    def take(self):
        print(f'I gave you ${self.money}')
        self.money = 0

    def select_coffee(self):
        if self.coffee_type == '1':
            self.coffee_selected = self.coffee_requirements[0]
        elif self.coffee_type == '2':
            self.coffee_selected = self.coffee_requirements[1]
        elif self.coffee_type == '3':
            self.coffee_selected = self.coffee_requirements[2]

    def process(self):
        if self.water < self.coffee_selected[0]:
            print('Sorry, not enough water')
            self.status = 'reset'
        elif self.milk < self.coffee_selected[1]:
            print('Sorry, not enough milk')
            self.status = 'reset'
        elif self.beans < self.coffee_selected[2]:
            print('Sorry, not enough beans')
            self.status = 'reset'
        elif self.cups < 1:
            print('Sorry, not enough cups')
            self.status = 'reset'
        else:
            print('I have enough resources, making you a coffee!')
            self.status = 'make'

    def make(self):
        self.water -= self.coffee_selected[0]
        self.milk -= self.coffee_selected[1]
        self.beans -= self.coffee_selected[2]
        self.cups -= 1
        self.money += self.coffee_selected[3]


machine = CoffeeMachine(400, 540, 120, 9, 550)
while True:
    action = input('Write action (buy, fill, take, remaining, exit): ')

    if action == 'buy':
        machine.coffee_type = input('What do you want to buy? 1 - espresso, 2 - latte, 3 - cappuccino, back - to main menu: ')
        if machine.coffee_type == 'back':
            continue
        else:
            machine.select_coffee()
            machine.process()
            if machine.status == 'reset':
                continue
            elif machine.status == 'make':
                machine.make()
    elif action == 'fill':
        machine.fill()
    elif action == 'take':
        machine.take()
    elif action == 'remaining':
        machine.current_state()
    elif action == 'exit':
        break

