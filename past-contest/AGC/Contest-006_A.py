#
# https://atcoder.jp/contests/agc006/tasks/agc006_a
#

def solve():
    n = int(input())
    s = input()
    t = input()
    if s == t:
        print(len(s))
        return

    s_index = 1
    t_index = 1
    while True:
        if s[s_index:] == t[:-t_index]:
            print(len(s[:s_index] + s[s_index:]+ t[-t_index:]))
            break
        s_index += 1
        t_index += 1

if __name__ == '__main__':
    solve()