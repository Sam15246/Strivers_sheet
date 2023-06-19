def modularExponentiation(x, n, m):
	nn = n
	ans = 1
	while(nn>0):
		if nn%2 == 1:
			ans = (ans * x) % m
			nn = nn - 1
		else:
			x = (x * x )% m
			nn = nn // 2	
	return ans
