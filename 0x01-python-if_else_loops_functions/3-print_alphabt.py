#!/usr/bin/python3
for a in range(ord('a'), ord('z')+1):
        if a == ord('q') or a == ord('e'):
           continue
        print("{:c}".format(a), end="")
