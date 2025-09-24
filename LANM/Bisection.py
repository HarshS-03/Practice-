def f(x):
    return (x**3) - (15.2 * x) + 13.2

def bisection(x1, x2, e):
    if f(x1) * f(x2) >= 0:
        print(f"{f(x1)} and {f(x2)} must have opposite signs for the Bisection Method.")
        return None

    print("Iter\t x1\t\t x2\t\t mid\t\t f(mid)")
    for i in range(1, 100):   
        mid = (x1 + x2) / 2
        fmid = f(mid)

        print(f"{i}\t {x1:.8f}\t {x2:.8f}\t {mid:.8f}\t {fmid:.8f}")

        if abs(fmid) < e or abs(x2 - x1) / 2 < e:
            return mid

        if f(x1) * fmid < 0:
            x2 = mid

        else:
            x1 = mid

    print("Maximum iterations reached without convergence.")
    return None
 
root = bisection(x1=2, x2=3, e=0.0001)
if root is not None:
    print(f"\nEstimated Root: {root}")
