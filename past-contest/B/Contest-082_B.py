#
#  https://atcoder.jp/contests/abc082/tasks/abc082_b
#
s = list(input())
t = list(input())

sorted_s = ''.join(sorted(s, reverse=False))
sorted_t = ''.join(sorted(t, reverse=True))

if sorted_s < sorted_t:
    print('Yes')
else:
    print('No')
