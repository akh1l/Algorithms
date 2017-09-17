public class mergesort
{
	public static void merge(int []a, int []aux, int low, int mid, int high){
		for (int i = low; i <= high ; i++) {
			aux[i] = a[i];
		}
		int i = low, j = mid + 1;
		for (int k = low; k <= high; k++) {
			if(i > mid) 
				a[k] = aux[j++];
			else if(j > high) 
				a[k] = aux[i++];
			else if(aux[i] < aux[j])
				a[k] = aux[i++];
			else
				a[k] = aux[j++];
		}
	}
	public static void mergesort(int []a, int[] aux, int low, int high){
		if(low < high){
			int mid = (low + high) / 2;
			mergesort(a, aux, low, mid);
			mergesort(a, aux, mid + 1, high);
			merge(a, aux, low, mid, high);
		}
	}
	public static void main(String[] args)
	{
		int n = 10;
		int[] a = new int[n];
		int[] aux = new int[n];
		for (int i = 0; i < a.length ; i++) {
			a[i] = (int)(Math.random() * 100);
		}
		mergesort(a, aux, 0, a.length - 1);
		for (int i = 0; i < a.length ; i++) {
			System.out.print(a[i] + " ");
		}				
	}
}