class Solution {
public:
	// double solve(double x, long long int n) {
	// 	if(n == 0)
	// 		return 1.0;
	// 	if(n % 2 == 0)
	// 		return solve(x * x, n/2);
	// 	else
	// 		return (x * solve(x, n-1));
	// }
	// double myPow(double x, int n) {
	// // double ans = pow(x,n);
	// // return ans;
	// 	double ans = 1.0;
	// 	long long int temp = abs(n);
	// 	ans = solve(x, temp);
	// 	if(n<0)
	// 		ans = 1/(ans);
	// 	return ans;
	// }
	double myPow(double x, int n) {
        double ans = 1.0;
        long long temp = abs(n);
        while(temp){
            if(temp%2){
               ans = ans * x;
               temp = temp-1;
            }
            else {
                x = x*x;
                temp = temp/2;
            }
        }
        if(n<0){
            ans = 1/ans;
        }
        return ans;
	}
};