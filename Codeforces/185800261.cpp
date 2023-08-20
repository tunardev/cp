// https://codeforces.com/contest/1772/submission/185800261

def solve():
    s = list(map(int, input().split('+')))
    print(sum(s))
 
def main():
    t = int(input())
    for _ in range(t):
        solve()
main()