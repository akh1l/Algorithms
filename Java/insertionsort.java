public class insertionsort
{
	public static void main(String[] args)
	{
		int n = 10;
		int[] a = new int[10];
		for (int i = 0; i < a.length ; i++) {
			a[i] = (int)(Math.random() * 100);
		}
		for (int i = 0; i < a.length ; i++) {
			System.out.print(a[i] + " ");
		}
		System.out.println();
		// insertion sort
		for (int i = 1; i < n; i++) {
			
			int key = a[i];
			int j = i - 1;
			while(j >= 0 && a[j] > key){
				a[j + 1] = a[j];
				j--;
			}
			a[j + 1] = key;
		}
		//priting the sorted numbres
		for (int i = 0; i < a.length ; i++) {
			System.out.print(a[i] + " ");
		}				
	}
}