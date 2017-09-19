public class selectionsort
{
	public static void main(String[] args)
	{
		int n = 10;
		int[] a = new int[n];
		for (int i = 0; i < a.length ; i++) {
			a[i] = (int)(Math.random() * 100);
		}
		//selectioon sort
		for (int i = 0; i < a.length; i++) {
			int min = i;
			for (int j = i + 1; j < a.length ; j++) {
				if(a[j] < a[min])
				{
					min = j;
				}
			}
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
		for (int i = 0; i < a.length ; i++) {
			System.out.print(a[i] + " ");
		}	
	}
}