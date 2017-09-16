import java.util.ArrayList;
public class sieveOfEratosthenes
{
	public static void main(String[] args)
	{
		int n = 25;
		boolean[] touched = new boolean[n + 1];
		ArrayList <Integer> primes = new ArrayList <Integer>();
		for (int i = 2; i <= n; i += 2) {
			touched[i] = true;
		}

		for (int i = 3; i <= Math.sqrt(n) ; i++) {
			if(!touched[i]){
				for (int j = i * i; j <= n; j = j + (i * 2)) {
					touched[j] = true;			
				}
			}
		}
		primes.add(2);
		for(int i = 2; i <= n; i++){
			if(!touched[i]){
				primes.add(i);
			}
		}
		System.out.println(primes);
	}
}