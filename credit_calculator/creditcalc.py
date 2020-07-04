import math
import argparse

parser = argparse.ArgumentParser()
parser.add_argument('--type', type=str)
parser.add_argument('--payment', type=int)
parser.add_argument('--principal', type=int)
parser.add_argument('--periods', type=int)
parser.add_argument('--interest', type=float)
args = parser.parse_args()

principal = args.principal
periods_count = 0
diff_sum = 0

if args.interest is None:
    print('Incorrect parameters')
    
elif args.type == 'diff':
    nominal = 0.01 * args.interest / 12
    for periods_count in range(args.periods):
        periods_count += 1
        diff_payment = math.ceil((args.principal / args.periods)
                                 + nominal
                                 * (args.principal - args.principal * (periods_count - 1) / args.periods))
        print(f'Month {periods_count}: paid out {diff_payment}')
        diff_sum += diff_payment
    overpay = diff_sum - principal
    print(f'Overpayment = {overpay}')
    

elif args.type == 'annuity':
    if args.periods is None:
        nominal = 0.01 * args.interest / 12
        total = math.ceil(math.log(args.payment
                                   / (args.payment - nominal * args.principal)
                                   , 1 + nominal))
        years = total // 12
        months = total % 12
        if years == 0:
            if months > 1:
                print(f'You need {months} months to repay this credit!')
            else:
                print('You need 1 month to repay this credit!')
        elif years > 1:
            if months > 1:
                print(f'You need {years} years and {months} months to repay this credit!')
            elif months == 0:
                print(f'You need {years} years to repay this credit!')
            else:
                print(f'You need {years} years and 1 month to repay this credit!')
        else:
            if months > 1:
                print(f'You need 1 year and {months} months to repay this credit!')
            else:
                print('You need 1 year and 1 month to repay this credit!')

        overpay = total * args.payment - principal
        print(f'Overpayment = {overpay}')

    elif args.principal is None:
        nominal = 0.01 * args.interest / 12
        principal = args.payment / (nominal * ((1 + nominal) ** args.periods) / ((1 + nominal) ** args.periods - 1))
        overpay = args.periods * args.payment - principal
        print(f'Your credit principal = {principal}')
        print(f'Overpayment = {overpay}')

    elif args.payment is None:
        nominal = 0.01 * args.interest / 12
        annuity = math.ceil(args.principal * (nominal * (1 + nominal) ** args.periods) / ((1 + nominal) ** args.periods - 1))
        overpay = args.periods * annuity - args.principal
        print(f'Your annuity payment = {annuity}')
        print(f'Overpayment = {overpay}')

elif args.principal or args.interest or args.period or args.payment < 0:
    print('Incorrect parameters')
elif args.payment is None and args.type == 'diff':
    print('Incorrect parameters')
