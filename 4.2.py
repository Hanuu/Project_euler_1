def main():
    for i in range(999999,99999,-1):
        if str(i) == str(i)[::-1]:
            for j in range(999,99,-1):
                if (i % j == 0) and (i / j < 1000):
                    return i

print main()