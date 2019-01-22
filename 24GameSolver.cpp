#include <bits/stdc++.h>

using namespace std;

int solution[705]; // 4*4*4*11 = 704

int main() {
	int a,b,c,d;
	scanf("%d%d%d%d", &a, &b, &c, &d);

	int nsol=0;

	// Loop for combination of parenthesis skeleton
	for (int i=0; i<=10; i++) {
		
		// Loop for first operator
		for (int j=1; j<=4; j++) {
			for (int k=1; k<=4; k++) {
				for (int l=1; l<=4; l++) {
					
					long long temp=0;
					
					if (i==0) {
						if (j==1) {
							temp = a*b;
							
							if (k==1) {
								temp *= c;
								
								if (l==1) {
									temp *= d;
								} else if (l==2) {
									temp /= d;
								} else if (l==3) {
									temp += d;
								} else {
									temp -= d;
								}
							} else if (k==2) {
								temp /= c;

								if (l==1) {
									temp *= d;
								} else if (l==2) {
									temp /= d;
								} else if (l==3) {
									temp += d;
								} else {
									temp -= d;
								}
							} else if (k==3) {
								temp += c;

								if (l==1) {
									temp *= d;
								} else if (l==2) {
									temp /= d;
								} else if (l==3) {
									temp += d;
								} else {
									temp -= d;
								}
							} else {
								temp -= c;

								if (l==1) {
									temp *= d;
								} else if (l==2) {
									temp /= d;
								} else if (l==3) {
									temp += d;
								} else {
									temp -= d;
								}
							}
						}
					}

				}
			}
		}
	}

	// printf("%d %d %d %d\n", a, b, c, d);

	return 0;
}