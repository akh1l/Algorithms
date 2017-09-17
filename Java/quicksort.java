public class quicksort
{
	public static int partition(int []a, int low, int high){
		int i = low, j = high + 1;
		while(true){
			while(a[++i] < a[low]){
				if(i == high){
					break;
				}
			}
			while (a[low] < a[--j]) {
				if(j == low){
					break;
				}
			}
			if(i >= j){
				break;
			}
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		int temp = a[low];
		a[low] = a[j];
		a[j] = temp;
		return j;
	}
	public static void quicksort(int []a, int low, int high){
		if(low < high){
			int mid = partition(a, low, high);
			quicksort(a, low, mid - 1);
			quicksort(a, mid + 1, high);
		}
	}
	public static void main(String[] args)
	{
		int n = 10;
		int[] a = new int[n];
		for (int i = 0; i < a.length ; i++) {
			a[i] = (int)(Math.random() * 100);
		}
		quicksort(a, 0, a.length - 1);
		for (int i = 0; i < a.length ; i++) {
			System.out.print(a[i] + " ");
		}				
	}
}