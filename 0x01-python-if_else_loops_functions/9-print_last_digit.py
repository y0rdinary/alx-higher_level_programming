#!/usr/bin/python3
def print_last_digit(number):
            if number < 0: number *= -1
                num = list(map(int, str(number)))
                    number = num[-1]
                        print("{:d}".format(number), end="")
                            return number
