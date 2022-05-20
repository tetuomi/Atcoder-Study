#
# https://atcoder.jp/contests/abc154/tasks/abc154_d
#


if __name__ == '__main__':
    n, k = map(int, input().split())
    p = list(map(int, input().split()))

    section_sum = [0.0] * (n+1)
    for i in range(n):
        section_sum[i+1] += (p[i] + 1) / 2 + section_sum[i]

    ans = 0.0
    for i in range(n-k+1):
        ans = max(ans, section_sum[i+k] - section_sum[i])
    
    print(ans)